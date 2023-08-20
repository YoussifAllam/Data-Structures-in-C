#include<iostream>
#include<queue>
using namespace std;

class BST_recersion_way
{

  private:

	struct Node
	{
		int Data;
		Node* Left;
		Node* Right;

		Node(int value)
		{
			Data = value;
			Left = Right = NULL;
		}
	};

	Node* Root = NULL;

	void insert_Helper(Node* temp, int value)
	{
		if (value <= temp->Data)
		{
			if (temp->Left == NULL)
				temp->Left = new Node(value);

			else
				insert_Helper(temp->Left, value);
		}
		else
		{
			if (temp->Right == NULL)
			{
				temp->Right = new Node(value);
			}
			else
				insert_Helper(temp->Right, value);
		}

	}

	int GET_MAX_HELPER(Node* temp)
	{
		if (temp->Right == NULL)
			return temp->Data;
		else
			return GET_MAX_HELPER(temp->Right);
	}
 
	int GET_MIN_HELPER(Node* temp)
	{
		if (temp->Left == NULL)
			return temp->Data;
		else
			return GET_MIN_HELPER(temp->Left);
	}

	void Display_preorder_HELPER(Node* temp)
	{
		if (temp == NULL)
			return;

		cout << temp->Data << " ";
		Display_preorder_HELPER(temp->Left);
		Display_preorder_HELPER(temp->Right);
	}

	void Display_inorder_HELPER(Node* temp)
	{
		if (temp == NULL)
			return;

		Display_preorder_HELPER(temp->Left);
		cout << temp->Data << " ";
		Display_preorder_HELPER(temp->Right);
	}

	void Display_postorder_HELPER(Node* temp)
	{
		if (temp == NULL)
			return;

		Display_preorder_HELPER(temp->Left);
		Display_preorder_HELPER(temp->Right);
		cout << temp->Data << " ";
	}

	Node* Search_Helper(Node* r, int key)
	{
		if (r == NULL)
			return NULL;
		else if (r->Data == key)
			return r;
		else if (key < r->Data)
			return	Search_Helper(r->Left, key);
		else
			return Search_Helper(r->Right, key);
	}

	int getHeightHelper(Node* temp) 
	{
		if (temp == NULL)
			return -1;

		int Left_SubTree = getHeightHelper(temp->Left);
		int Right_SubTree = getHeightHelper(temp->Right);
		int result = 1 + max(Left_SubTree, Right_SubTree);
		return result;
	}

	bool isHeightBalanced_helper(Node* root) {
		if (!root) {
			return true;
		}

		int Left_st = getHeightHelper(root->Left);
		int Right_st = getHeightHelper(root->Right);

		if (abs(Left_st - Right_st) > 1) // abs function returns the absolute value of x
			return false;
		return isHeightBalanced_helper(root->Left) && isHeightBalanced_helper(root->Right);
	}
	
	int isBST_helper(Node* temp)
	{
		if (temp == NULL)
			return 1;

		/* false if left is > than node */
		if (temp->Left != NULL && temp->Left->Data > temp->Data)
			return 0;

		/* false if right is < than node */
		if (temp->Right != NULL && temp->Right->Data < temp->Data)
			return 0;

		/* false if, recursively, the Left or right is not a BST */
		if (!isBST_helper(temp->Left) || !isBST_helper(temp->Right))
			return 0;

		/* passing all that, it's a BST */
		return 1;
	}

	Node* removeHelper(Node* root, int data) 
	{
		if (root == nullptr)
			return root;

		else if (data < root->Data)
			root->Left = removeHelper(root->Left, data);

		else if (data > root->Data)
			root->Right = removeHelper(root->Right, data);

		else {

			if (root->Left == nullptr) 
			{
				Node* temp = root->Right;
				delete root;
				return temp;
			}

			else if (root->Right == nullptr)
			{
				Node* temp = root->Left;
				delete root;
				return temp;
			}

			else 
			{
				int maxValue = this->GET_MAX_HELPER(root->Left);
				root->Data = maxValue;
				root->Left = removeHelper(root->Left, maxValue);
			}

		}
		return root;
	}

public:


	void insert_to_tree(int value)
	{
		if (Root == NULL)
		{

			Root = new Node(value);
		}
		else
		{
			insert_Helper(Root, value);
		}
	}

	int GET_MAX()
	{
		return GET_MAX_HELPER(Root);
	}

	int GET_MIN()
	{
		return GET_MIN_HELPER(Root);
	}

	void Display_preorder()
	{
		if (Root != NULL)
		{
			Display_preorder_HELPER(Root);
		}
	}

	void Display_inorder()
	{
		if (Root != NULL)
		{
			Display_inorder_HELPER(Root);
		}
	}

	void Display_postorder()
	{
		if (Root != NULL)
		{
			Display_preorder_HELPER(Root);
		}
	}

	bool Search(int key)
	{
		Node* result = Search_Helper(Root, key);

		if (result == NULL)
			return false;
		else
			return true;
	}

	int getHeight()
	{
		if (Root == nullptr)
			return -1;
		else
			return getHeightHelper(Root);
	}

	bool isHeightBalanced()
	{
		Node* temp = Root;
		if (isHeightBalanced_helper(temp))
		{
			return  true;
		}
		else 
		{
			return false;
		}

	}

	bool isFullBinaryTree(Node* root) {
		if (root == NULL) {
			return true;
		}
		if (root->Left == NULL and root->Right == NULL) {
			return true;
		}
		else if (root->Left and root->Right) {
			return (isFullBinaryTree(root->Left) and isFullBinaryTree(root->Right));
		}
		return false;
	}

	int isBST()
	{
		Node* temp1 = Root;
		if (isBST_helper(temp1) == 1)
			return true;
		else
			return false;

	} 

	void remove(int data) 
	{
		Root = removeHelper(Root, data);
	}
	
};

class BST_linked_way
{
private:

	struct Node
	{
		int Data;
		Node* Left;
		Node* Right;
	};
	Node* Root = NULL;

public:
	void insert_to_tree(int value)
	{
		Node* new_node = new Node;
		new_node->Data = value;
		new_node->Left = NULL;
		new_node->Right = NULL;

		if (Root == NULL)
		{
			Root = new_node;
			return;
		}

		Node* temp = Root;// for cheak
		Node* parent = NULL;// pointer h7t fe el value ele fe el temp
		//3shan lma 2tla3 mn el loop
		while (temp != NULL) // loop 3ashn 2b7s 3n mkan el 2dafa 
		{
			parent = temp;
			if (temp->Data >= value)
			{
				temp = temp->Left;
            }
			else
			{
				temp = temp->Right;
			}

		}
		if (value <= parent->Data)
			parent->Left = new_node;
		else
			parent->Right = new_node;
		

	}

	int Get_MAX()
	{
		Node* temp = Root;
		while (temp->Right != NULL)
		{
			temp = temp->Right;
		}
		return temp->Data;
	}

	int Get_MIN()
	{
		Node* temp = Root;
		while (temp->Left != NULL)
		{
			temp = temp->Left;
		}
		return temp->Data;
	}

	void display_level_order()
	{
		if (Root == NULL)
			return;

		queue<Node*> q;
		q.push(Root);
		while (!q.empty())
		{
			Node* cur = q.front();
			q.pop(); // 3mlna kda 3ashan 22dar 2rg3 be el pointer
			//we 2ro7 3la el child el tane
			cout << cur->Data << " ";

			if (cur->Left != NULL)
				q.push(cur->Left);

			if (cur->Right != NULL)
				q.push(cur->Right);

		}
	}

	bool search(int item)
	{
		bool found = false;
		Node* temp = Root;
		while (!found && temp != NULL) //!foound y3ne twal,ma hya mash true
		{
			if (item < temp->Data) 
			{
				temp = temp->Left;
			}
			else if (item > temp->Data)
			{
				temp = temp->Right;
			}
			else // lma temp->DATA = ITEM
				found = true; 
		}
		return found;
	}

	

	
};


int main()
{
	             /*   Youssif Allam   */
	cout << "press 1 ) for BST recersion way "<<endl;
	cout << " 2 ) for BST Linked way "<<endl;
	int a;
	cout << "your chosse is : ";
	cin >>a;
	
	if (a == 1)
	{
		
		BST_recersion_way ob1;
		
		ob1.insert_to_tree(8);
		ob1.insert_to_tree(5);
		ob1.insert_to_tree(3);
		ob1.insert_to_tree(13);
		ob1.insert_to_tree(7);
		ob1.insert_to_tree(10);
		ob1.insert_to_tree(15);
		ob1.insert_to_tree(555);
		
		cout << "The Max Number in tree  is : ";
		cout << ob1.GET_MAX() << endl;

		cout << "The Min Number in tree  is : ";
		cout << ob1.GET_MIN() << endl;

		cout << "preorder traversel : ";
		ob1.Display_preorder();
		cout << endl;

		cout << "inorder traversel : ";
		ob1.Display_inorder();
		cout << endl;

		cout << "postorder traversel : ";
		ob1.Display_postorder();
		cout << endl;

		if (ob1.isHeightBalanced())
		{
			cout << "The Tree is blanced ";
		}
		else 
		{
			cout << "The Tree is not blanced";
		}
		cout << endl;
		cout<<ob1.isBST();

	} 

	if (a == 2)
	{

		BST_linked_way ob2;
		ob2.insert_to_tree(8);
		ob2.insert_to_tree(5);
		ob2.insert_to_tree(13);
		ob2.insert_to_tree(3);
		ob2.insert_to_tree(7);
		ob2.insert_to_tree(10);
		ob2.insert_to_tree(15);

		cout << "The Max Number in tree  is : ";
		cout << ob2.Get_MAX() << endl;

		cout << "The Min Number in tree  is : ";
		cout << ob2.Get_MIN() << endl;
		cout << "print Tree elemnts by level order : ";
		ob2.display_level_order();
		cout << endl;

		
		if (ob2.search(111))
		{
			cout << "founded";
		}
		else
			cout << "not founded";

		cout << endl;

		
		
		
	}

}
