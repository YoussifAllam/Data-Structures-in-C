#include<iostream>
using namespace std;
const int arr_size = 5;
// Made by Youssif Allam
struct node
{
	int data;
	node* next;
};

class stack
{
private:
	int top;
	int stack_arr[arr_size];
public:
	stack()
	{
		top = -1;
	}

	void push(int elemnt)
	{
		if (top == arr_size-1)
		{
			cout << " the stack is full";
		}
		else
		{
			top++;
			stack_arr[top] = elemnt;
		}
	}

	bool is_empty()
	{
		if (top == -1)
			return true;
		else
			return false;
	}

	int pop()
	{
		int deleted_value;
		if (top == -1)
			cout << "the stack is Emptob2";
		else
		{
			deleted_value = stack_arr[top];
			top--;
		}
		return deleted_value;
	}

	void get_top(int& stacktop)
	{
		if (is_empty())
			cout << "the stack is Emptob2";
		else
			stacktop = stack_arr[top];
		cout << stacktop;
	}

	void print_stack_elemnts()
	{
		cout << "[ ";
		for (int i = top; i >= 0; i--)
		{
			cout << stack_arr[i] << " ";

		}
		cout << "]";
		cout << endl;
	}

};

class Queue
{
private:
	int first; // 3onsor el 7azf 
	int last; // 3onsor el 2dafa 
	int arr[arr_size];

public:
	Queue()
	{
		first = -1;
		last = -1;
	}

	void enqueue(int item)
	{

		if (last == arr_size - 1)
		{
			cout << "The Queue is Full";
		}

		else
		{

			if (first == -1)
				first = 0;

			last++;
			arr[last] = item;

		}

	}

	int dequeue()
	{

		if (first == -1 || first > last)
		{
			cout << "the queue is Embty";
		}

		else
		{

			int item = arr[first];
			first++;
			return item;

		}

	}

	void add_after_delete(int item)
	{

		if (first > 0 && first < last)
			last = -1;

		last++;
		arr[last] = item;

	}

	void print_queue_elemnts_1()
	{

		if (first == -1)
		{
			cout << "the queue is Embty";
		}

		else
		{

			cout << " [ ";
			for (int i = first; i <= last; i++)
			{
				cout << arr[i] << " ";

			}
			cout << " ] ";
		}
	}

	void print_queue_elemnts_2()
	{
		if (first == -1)
		{
			cout << "the queue is Embty";
		}

		else
		{
			cout << " [ ";

			for (int n = 0; n < arr_size; n++)
			{
				cout << arr[n] << " ";

			}
			cout << " ] ";

		}

	}

};

class Priority_Queue
{
private:
	int pqdata[5]; // array of elemnts 
	int pqpriority[5]; // array of priorty of elemnts
	int front; //for delete
	int rear; // for add

public:
	Priority_Queue()
	{
		front = -1;
		rear = -1;
	}
	void pqadd(int elemnt, int pr) //pr is The variable that indicates the priority of the elements 
	{ //pqadd
		int i = 0;
		if (front == 0 && rear == 5 - 1)
			cout << "Queue id Full \n";

		else
		{//2
			if (front == -1)
			{ //3
				front = 0;
				rear = 0;
				pqdata[rear] = elemnt;
				pqpriority[rear] = pr;
			} //3
			else
			{ //4
				for (i = rear; i >= front; i--)
				{ //for 1
					if (pr > pqpriority[i])
					{ //5
						pqdata[i + 1] = pqdata[i];
						pqpriority[i + 1] = pqpriority[i];
					} //5
					else
						break;
				} //for1
				pqdata[i + 1] = elemnt;
				pqpriority[i + 1] = pr;
				rear++;

			} //4
		}//2


	} //pqadd

	void print()
	{
		if (front == -1 || front > rear)
		{
			cout << "Queue is Empty" << endl;
		}
		else
			for (int i = front; i <= rear; i++)
			{ //for 2
				cout << pqdata[i] << " " << pqpriority[i] << endl;
			} //for2

		cout << "\n";
	}
};

class linked_list
{
public:

	node* head;
	node* temp;
	node* last;
	node* temp3;
	int counter = 0;

	linked_list()
	{
		head = NULL;
		temp3 = NULL;
	}

	~linked_list() // constractor to delete all node in linked  
	{
		node* current = head, * temp;
		while (current != NULL) {
			temp = current;
			current = current->next;
			delete temp;
		}
	}

	bool is_empty()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}

	int count()
	{
		temp = head;
		while (temp != NULL)
		{
			counter++;
			temp = temp->next;

		}
		return counter;
	}

	void insert_in_begining(int item)
	{
		node* new_node = new node;
		new_node->data = item;
		new_node->next = head;
		head = new_node;
	}

	void insert_node_in_end(int item)
	{
		node* new_node = new node;
		new_node->data = item;
		if (head == NULL)
		{
			head = new_node;
			new_node->next = NULL;
		}
		else
		{
			temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new_node;
			new_node->next = NULL;
		}
	}

	void insert_Before_Last(int x)
	{
		node* new_node = new node;
		new_node->data = x;
		node* temp = head;
		while (temp->next->next != NULL)
			temp = temp->next;
		new_node->next = temp->next;
		temp->next = new_node;
	}

	void insert_in_middle(int y)
	{
		node* new_node = new node;
		new_node->data = y;
		node* temp = head;
		float mid = count() / 2.0;
		while (mid > 1.0) {
			temp = temp->next;
			mid--;
		}
		new_node->next = temp->next;
		temp->next = new_node;

	}

	void Add_in_specific_postion(int postion, int newdata)
	{
		if (postion == 1)
		{
			insert_in_begining(newdata);
		}

		if (head == NULL)
		{
			cout << "invalide position ";
			return;
		}
		node* new_node = new node;
		new_node->data = newdata;
		new_node->next = NULL;
		node* current = head;
		for (int i = 1; i < postion - 1; i++)
		{
			current = current->next;
			if (current == NULL)
			{
				cout << "invalide position ";
			}
		}
		new_node->next = current->next;
		current->next = new_node;
	}

	void delete_node(int value)
	{

		node* current = head; // da ele hanshwer be 3la el node ele htt7zef;
		node* pirveus = head; // ele hnshwer be 3la el node el 2bel ele htt7zef

		if (current->data == value) //If the element that will be deleted is in the first node
		{
			head = current->next;
			free(current);
		}
		else
		{
			while (current->data != value)
			{
				pirveus = current;
				current = current->next;
			}
			pirveus->next = current->next;
			free(current);
		}

	}

	void delete_from_begining()
	{

		if (is_empty())
		{
			cout << " the linked is Empty" << endl;
		}
		else
		{
			node* first_node = head;
			head = first_node->next;
			free(first_node);

		}

	}

	void delete_after_first()
	{
		if (is_empty())
		{
			cout << "the linked is Empty" << endl;
		}
		else
		{
			node* temp = head->next;
			head->next = temp->next;
			delete temp;
		}
	}

	void delete_before_last()
	{
		if (is_empty())
		{
			cout << "the linked is Empty" << endl;
		}
		else
		{
			node* temp = head;
			int t = count();
			for (int i = 1; i < t - 2; i++)
				temp = temp->next;
			node* temp2 = temp->next;
			temp->next = temp2->next;
			delete temp2;
		}
	}

	void delete_from_middle()
	{
		node* temp = head;
		float middle_elemnt = count() / 2.0;
		while (middle_elemnt > 2.0)
		{
			temp = temp->next;
			middle_elemnt--;
		}
		node* temp4 = temp->next;
		temp->next = temp4->next;
		delete temp4;
	}

	void delete_even_elemnts()
	{
		if (is_empty())
		{
			cout << "the linked is Empty" << endl;
		}
		else
		{
			node* temp = head;
			node* temp2 = NULL;
			while (temp != NULL) 
			{
				if (temp->data % 2 == 0) 
				{
					node* t = temp;
					if (temp2 == NULL)
						head = temp->next;
					else
						temp2->next = temp->next;
					temp = temp->next;
					delete t;
					continue;
				}
				temp2 = temp;
				temp = temp->next;
			}
			temp3 = temp2;
		}
	}

	void delete_odd_elemnts()
	{
		if (is_empty())
		{
			cout << "the linked is Empty" << endl;
		}
		else
		{
			node* temp = head;
			node* temp2 = NULL;
			while (temp != NULL) {
				if (temp->data % 2 == 1) {
					node* t = temp;
					if (temp2 == NULL)
						head = temp->next;
					else
						temp2->next = temp->next;
					temp = temp->next;
					delete t;
					continue;
				}
				temp2 = temp;
				temp = temp->next;
			}
			temp3 = temp2;
		}
	}

	void Delete_from_specific_position(int position)
	{
		if (head == NULL)
		{
			cout << " The Queue is Empty ";
			return;
		}

		if (position == 1)
		{
			node* temp = head;
			head = head->next;
			free(temp);
		}

		else
		{

			node* pirvous = head;
			for (int i = 1; i < position - 1 && pirvous->next != NULL; i++)
			{
				pirvous = pirvous->next;
			}

			if (pirvous->next == NULL)
			{
				cout << "invalide position ";
				return;
			}

			node* temp2 = pirvous->next; //temp2 it indicates the node that we want to delete it
			pirvous->next = pirvous->next->next;
		}

	}

	int highest_value_inlinked()
	{
		node* temp = head;
		int highest_value = INT_MIN;
		while (temp != NULL)
		{
			if (temp->data > highest_value)
				highest_value = temp->data;
			temp = temp->next;
		}

		return highest_value;
	}

	int smallest_value_inlinked()
	{
		node* temp = head;
		int smallest_value = INT_MAX;
		while (temp != NULL)
		{
			if (temp->data < smallest_value)
				smallest_value = temp->data;
			temp = temp->next;
		}

		return smallest_value;
	}

	void reverse_linked_elemnts()
	{
		if (is_empty())
		{
			cout << "The linked is Empty";
			return;
		}
		node* pirvous = NULL;
		node* current = head;
		node* next = NULL;

		while (current != NULL)
		{
			next = current->next;
			current->next = pirvous;
			pirvous = current;
			current = next;
		}
		head = pirvous;
	}

	bool is_found(int value)
	{
		bool found = false;
		temp = head;
		while (temp != NULL)
		{
			if (temp->data == value)
			{
				found = true;
			}
			temp = temp->next;
		}
		return found;
	}

	int get_first_elemnt()
	{
		return head->data;
	}

	int get_last_elemnt()
	{

		node* temp = head;
		while (temp->next != NULL)
			temp = temp->next;

		return temp->data;
	}

	void Merge(linked_list list1, linked_list list2, linked_list list3)
	{
		linked_list list4;

		node* ptr1 = list1.head;
		node* ptr2 = list2.head;
		node* ptr3 = list3.head;
		while (ptr1 != NULL)
		{
			list4.insert_node_in_end(ptr1->data);
			ptr1 = ptr1->next;
		}
		while (ptr2 != NULL)
		{
			list4.insert_node_in_end(ptr2->data);
			ptr2 = ptr2->next;
		}
		while (ptr3 != NULL)
		{
			list4.insert_node_in_end(ptr3->data);
			ptr3 = ptr3->next;
		}
		list4.print_linked_elemnts();
	}

	void print_linked_elemnts()
	{
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

};

class stack_with_linkedlist	
{

public:
	node* top = NULL;
	node* temp;
	void push_to_linked_stack(int item)
	{
		node* newnode = new node;
		newnode->data = item;
		newnode->next = top;
		top = newnode;


	}


	bool is_empty()
	{
		if (top == NULL)
			return true;
		else
			return false;
	}


	int pop()
	{

		int item;
		if (is_empty())
		{
			cout << "the stack is empty";
			return -1;
		}
		else
		{
			node* first_node = top;
			item = first_node->data;
			top = first_node->next;
			delete (first_node);
			return item;
		}

	}

	int get_top()
	{

		if (top == NULL)
		{
			cout << " stack is Empty";
			return -1;
		}
		else
		{
			return top->data;
		}
	}

	void print_linked_stack_elemnts()
	{
		temp = top;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
			cout << endl;
		}

	}

	void marge(stack_with_linkedlist stack1, stack_with_linkedlist stack2)
	{
		stack_with_linkedlist stack3;
		node* temp1 = stack1.top;
		node* temp2 = stack2.top;

		while (temp1 != NULL)
		{
			stack3.push_to_linked_stack(temp1->data);
			temp1 = temp1->next;
		}

		while (temp2 != NULL)
		{
			stack3.push_to_linked_stack(temp2->data);
			temp2 = temp2->next;

		}

		stack3.print_linked_stack_elemnts();
	}

	~stack_with_linkedlist()
	{
		while (top != NULL)
		{
			node* temp = top;
			top = top->next;
			delete temp;
		}
	}


};

class Queue_with_linkedlist
{
public:
	node* front = NULL;
	node* rear = NULL;

	void EnQueue(int value)
	{
		node* new_node = new node;
		new_node->data = value;
		new_node->next = NULL;

		if (rear == NULL && front == NULL)
		{
			front = rear = new_node;
		}

		else
		{
			rear->next = new_node;
			rear = new_node;
		}

	}

	void DeQueue()
	{
		if (rear == NULL)// lw el queue faade 
		{
			cout << "The Queue is Empty";
		}
		else if (rear == front) // y3ne fe node wa7da
		{
			node* ptr = front;
			rear = front = NULL;
			free(ptr);
		}
		else
		{
			node* ptr = front;
			front = front->next;
			free(ptr);
		}
	}

	int Get_First_Node()
	{
		if (front == NULL)
		{
			cout << " the Queue is Empty";
			return -1;
		}
		else
		{
			return front->data;
		}
	}

	void print_Linked_Queue_Elemnts()
	{
		if (rear == NULL)
		{
			cout << " the Queue is Empty";
		}
		else
		{
			node* current = front;
			cout << " [ ";
			while (current->next != NULL)
			{
				cout << current->data << "  ";
				current = current->next;
			}
			cout << "]";
		}
		cout << endl;
	}

};

class Doubly_Linked_List
{
private:
	struct Node
	{
		int Data;
		Node* next;
		Node* prev = NULL;
	};
public:
	Node* head = NULL;

	void insert_node_in_end(int item)
	{
		Node* new_node = new Node;
		new_node->Data = item;
		if (head == NULL)
		{
			head = new_node;
			new_node->next = NULL;
		}
		else
		{
			Node* temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new_node;
			new_node->prev = temp;
			new_node->next = NULL;
		}
	}

	void insert_at_pos(int val, int pos)
	{
		Node* newNode = new Node;
		newNode->Data = val;
		if (head == nullptr)
		{
			head = newNode;
			return;
		}
		if (pos == 0) {
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
			return;
		}

		Node* temp = head;
		for (int i = 0; i < pos && temp != nullptr; i++)
		{
			temp = temp->next;
		}

		if (temp == nullptr)
		{
			this->insert_node_in_end(val);
			return;
		}

		newNode->prev = temp->prev;
		temp->prev->next = newNode;
		temp->prev = newNode;
		newNode->next = temp;
	}

	void delete_specific_value(int val)
	{
		if (head == nullptr)
			return;

		Node* temp;
		temp = head;

		if (temp->Data == val)
		{
			head = temp->next;
			if (head != nullptr)
				head->prev = nullptr;
			delete temp;
			return;
		}

		while (temp != nullptr && temp->Data != val)
		{
			temp = temp->next;
		}

		if (temp == nullptr) {
			return;
		}
		else {
			temp->prev->next = temp->next;
			if (temp->next != nullptr)
				temp->next->prev = temp->prev;
			delete temp;
		}
	}

	void remove_at_pos(int pos)
	{
		if (head == nullptr)
			return;

		Node* temp = head;
		if (pos == 0)
		{
			head = temp->next;
			if (head)
				head->prev = nullptr;
			delete temp;
			return;
		}

		for (int i = 0; i < pos && temp != nullptr; i++)
			temp = temp->next;

		if (temp == nullptr)
			return;

		temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
		delete temp;

	}

	void print_linked_elemnts()
	{
		Node* temp = head;
		while (temp != nullptr)
		{
			cout << temp->Data << " ";
			temp = temp->next;
		}
		cout << endl;

	}

	void reverse_display() {
		Node* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		//---------------------------
		while (temp != nullptr) {
			cout << temp->Data << " ";
			temp = temp->prev;
		}
		cout << std::endl;

	}

	~Doubly_Linked_List() {
		Node* temp = head;
		while (head != nullptr) {
			head = head->next;
			delete temp;
			temp = head;
		}
	}
};

int main()
{
	int a;
	cout << " What kind of data structures do you want to deal with ? " << endl;
	cout << " prees ( 1 ) for stack "<<endl;
	cout << " 2 ) for sample Queue and circular Queue " << endl;
	cout << " 3 ) for priority Queue  " << endl;
	cout << " 4 ) for linked list " << endl;
	cout << " 5 ) for stack with linked list " << endl;
	cout << " 6 ) for Queue with linked list  " << "\n";
	cout << " 7 ) for Doubly Linked List" << endl;
	cout << " your choose is : ";
	cin >> a;
	cout << endl;
	// -----------------------------------------------------
	//__ stack __
	if (a == 1)
	{

		stack ob1;
		int y;
		ob1.push(1);
		ob1.push(2);
		ob1.push(3);
		cout << " stack elemnts is :";
		ob1.print_stack_elemnts();


		cout << "the stack top is : ";
		ob1.get_top(y);
		cout << endl;

		ob1.pop();
		cout << " stack elemnts after delete one elemnt is : ";
		ob1.print_stack_elemnts();
		cout << endl;

	}


	//---------------------------------------------------------
	//__ sample Queue and circular queue __
	if (a == 2)
	{

		Queue y;
		cout << " add 5 items : ";
		y.enqueue(1);
		y.enqueue(2);
		y.enqueue(3);
		y.enqueue(4);
		y.enqueue(5);
		y.print_queue_elemnts_1();
		cout << endl;

		cout << " after delete one item : ";
		y.dequeue();
		y.print_queue_elemnts_1();
		cout << endl;

		cout << " after delete two item : ";
		y.dequeue();
		y.print_queue_elemnts_1();
		cout << endl;

		cout << " The addition process after deleting : ";
		y.add_after_delete(6);
		y.add_after_delete(7);
		y.print_queue_elemnts_2();
		cout << endl;
	}


	//---------------------------------------------------------
	//__ Priority Queue __
	if (a == 3)
	{
		Priority_Queue obj;
		cout << "the elmnts of Queue is : ";
		obj.pqadd(16, 4);
		obj.pqadd(10, 3);
		obj.pqadd(20, 6);
		obj.pqadd(12, 2);
		cout << "\n";
		obj.print();
	}


	//---------------------------------------------------------
	//linked list
	if (a == 4)
	{
		
		linked_list ob3;
		int value;
		cout << " fun insert begining" << "\n";
		ob3.insert_in_begining(1);
		ob3.insert_in_begining(2);
		ob3.insert_in_begining(3);
		ob3.insert_in_begining(4);
		ob3.print_linked_elemnts();
		cout << endl;

		cout << " after insert in middle" << "\n";
		ob3.insert_in_middle(555);
		ob3.print_linked_elemnts();
		cout << endl;

		cout << "insert node in end" << "\n";
		ob3.insert_node_in_end(4);
		ob3.insert_node_in_end(5);
		ob3.insert_node_in_end(6);
		ob3.print_linked_elemnts();
		cout << endl;

		cout << "Add in specific postion" << "\n";
		ob3.Add_in_specific_postion(2, 44);
		ob3.Add_in_specific_postion(8, 55);
		ob3.print_linked_elemnts();
		cout << endl;

		cout << "after delete one elemnt from begining" << "\n";
		ob3.delete_from_begining();
		ob3.print_linked_elemnts();
		cout << endl;

		cout << "after delete two elemnt from begining" << "\n";
		ob3.delete_from_begining();
		ob3.print_linked_elemnts();
		cout << endl;

		cout << "after delete specific value " << "\n";
		ob3.delete_node(6);
		ob3.print_linked_elemnts();
		cout << endl;

		cout << "after delete specific value " << "\n";
		ob3.delete_node(55);
		ob3.print_linked_elemnts();
		cout << endl;

		cout << "Number of nodes in linked list = ";
		cout << ob3.count() << "\n";
		cout << endl;

		cout << "after delete one elemnt from specific_position : " << "\n";
		ob3.Delete_from_specific_position(4);
		ob3.print_linked_elemnts();
		cout << endl;

		cout << "The linked list elemnts before reverse is : ";
		ob3.print_linked_elemnts();

		cout << "The linked list elemnts after reverse is : ";
		ob3.reverse_linked_elemnts();
		ob3.print_linked_elemnts();
		cout << endl;

		
		cout << "Enter the value which you want to look for" << "\n";
		cout << "value is : ";
		cin >> value;
		if (ob3.is_found(value))
		{
			cout << "The element was found. " << "\n";
		}
		else
		{
			cout << "The element not found. " << "\n";
		}
		cout << endl;
	
		cout << "The Data after merge three Linked is : ";
		linked_list a;
		a.insert_node_in_end(1);
		a.insert_node_in_end(2);
		a.insert_node_in_end(3);
		a.insert_node_in_end(4);

		linked_list b;
		b.insert_node_in_end(5);
		b.insert_node_in_end(6);
		b.insert_node_in_end(7);
		b.insert_node_in_end(8);

		linked_list c;
		c.insert_node_in_end(9);
		c.insert_node_in_end(10);
		c.insert_node_in_end(11);
		c.insert_node_in_end(12);
		a.Merge(a, b, c);


	}


	//---------------------------------------------------------
	//stack with linked list
	if (a == 5)
	{

		stack_with_linkedlist ob4;
		ob4.push_to_linked_stack(30);
		ob4.push_to_linked_stack(44);
		ob4.push_to_linked_stack(20);
		cout << "stack1 elemnts is : " << "\n";
		ob4.print_linked_stack_elemnts();

		cout << "stack1 elemnts after delete one elemnt is : " << "\n";
		ob4.pop();
		ob4.print_linked_stack_elemnts();
		cout << endl;

		cout << "top is = " << ob4.get_top() ;
		cout << endl;

		stack_with_linkedlist ob5;
		ob5.push_to_linked_stack(4);
		ob5.push_to_linked_stack(8);
		ob5.push_to_linked_stack(77);
		cout << "stack2 elemnts is : " << "\n";
		ob5.print_linked_stack_elemnts() ;
		cout << endl;
		cout << "stack elemnts after merge is : ";
		ob5.marge(ob4, ob5);

		

	}


	//---------------------------------------------------------
	//Queue with linked list
	if (a == 6)
	{

		Queue_with_linkedlist ob;

		ob.EnQueue(1);
		ob.EnQueue(2);
		ob.EnQueue(3);
		ob.EnQueue(4);
		cout << "Queue elemnts is : ";
		ob.print_Linked_Queue_Elemnts();
		cout << endl;

		cout << "data in first node = ";
		cout << ob.Get_First_Node();
		cout << endl;
		cout << endl;

		ob.DeQueue();
		ob.DeQueue();
		cout << "Queue elemnts after delete two elemnts is : ";
		ob.print_Linked_Queue_Elemnts();

	}

	//---------------------------------------------------------
	//Doubly Linked List
	if (a == 7)
	{
		Doubly_Linked_List ob;
		ob.insert_node_in_end(1);
		ob.insert_node_in_end(2);
		ob.insert_node_in_end(3);
		cout << "linked elemnts is : ";
		ob.print_linked_elemnts();

		cout << "linked elemnts after reverse is : ";
		ob.reverse_display();

		cout << "after add 55 to position 2 : ";
		ob.insert_at_pos(55, 2);
		ob.print_linked_elemnts();

		cout << "after delete  55 : ";
		ob.delete_specific_value(55);
		ob.print_linked_elemnts();

		cout << "after delete data from  position 1 : ";
		ob.remove_at_pos(1);
		ob.print_linked_elemnts();
		

	}

	return 0;
	// YOUSSIF ALLAM
	cout << "\n ";

}
