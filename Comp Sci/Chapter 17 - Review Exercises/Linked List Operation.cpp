#include <iostream>
using namespace std;

//Include link list in sorted order

class LinkedList {
protected:
	//Declare a struct for the Node
	struct Node {
		double value;
		Node* next;
		Node(double t_value, Node* t_next = nullptr) {
			value = t_value;
			next = t_next;
		}
	};
	Node* head;

public:
	LinkedList() : head(nullptr) {}
	~LinkedList();
	void add(double num);
	void remove(double num);
	void display() const;
};

LinkedList::~LinkedList() {
	Node* garbage;
	Node* ptr = head;
	while (ptr != nullptr) {
		//Garbage keeps track of node "to be deleted"
		garbage = ptr;
		//Move on to next node
		ptr = ptr->next;
		//Delete the garbage node after ptr left the place
		delete garbage;
	}
}

void LinkedList::add(double num) {
	//If list empty, make a new node right at head
	if (head == nullptr) {
		head = new Node(num);
	}
	else {
		//The list is not empty
		//Use node_ptr to traverse the list
		Node* node_ptr = head;

		//While the Node pointer is not the last one
		while (node_ptr->next != nullptr) {
			node_ptr = node_ptr->next;
		}
		//This is add another node to the TAIL of the list, you can make another function to add on the HEAD side of the list
		node_ptr->next = new Node(num);
	}
}

void LinkedList::remove(double num) {
	//One to run, one follow behind always
	Node* node_ptr = nullptr, * previous_node_ptr = nullptr;

	//If the list is empty, do nothing
	if (head == nullptr) {
		return;
	}

	//Determine If the first node is the one to delete?
	if (head->value == num) {
		//Assign the ptr to remove at head
		node_ptr = head;
		//Move head to the next node after and make it the new head
		head = head->next;
		//Delete the old head node
		delete node_ptr;
	}
	else {
		//Initialize the node_ptr to be the head of the list
		node_ptr = head;

		//Skip node whose value num is not the num we're trying to remove
		while (node_ptr != nullptr && node_ptr->value != num) {
			previous_node_ptr = node_ptr;
			node_ptr = node_ptr->next;
		}
		//Found the one node we need to remove now
		//Link the previous node to the node after the one need to delete
		//Then delete that node
		if (node_ptr != nullptr) {
			previous_node_ptr->next = node_ptr->next;
			delete node_ptr;
		}
	}
}

void LinkedList::display() const {
	Node* ptr = head;	//Start at the beginning of the list
	//While ptr is not a value outside of the list
	while (ptr != nullptr) {
		cout << ptr->value << "   ";
		ptr = ptr->next;
	}
}

//Linked list in sorted order
class SortedLinkedList : public LinkedList {
public:
	void add(double num);
};

void SortedLinkedList::add(double num) {
	//There are 2 cases to consider. The first case is when the new number to be inserted should go "before every node already in the list" or "the first number in the list is greater or equal to the number we are trying to add
	//If the number are greater than the head of the list or there is nothing in the list yet
	//Then we only need to put one right before the head
	//Ex:
	// Head ------------- Tail
	// If add is smaller than head, or there is nothing in the list yet
	// Add - Head ---------- Tail
	// Then turn Add into the new head
	// Head -------------- Tail
	Node* ptr, * prev_ptr;
	if (head == nullptr || num < head->value) {
		head = new Node(num, head);
	}
	//Second Case, the number should be somewhere in the middle
	//That's mean the add number needs "to go before one of the node already in the list"
	//Meaning there has to be a node that has number bigger than the one we are trying to add
	//That means we will just gona put the node to be just before the one that is bigger than the number
	// Head -------- Bigger ------ Tail
	// Head ------ Add - Bigger ----- Tail
	//To do that, we use the trailing pointer method, double ptr, one follow the other
	else {
		prev_ptr = head;
		ptr = head->next;
		//Find the intersection point, the point where ptr points to bigger and prev_ptr is right behind it
		while (ptr != nullptr && ptr->value < num) {
			prev_ptr = ptr;
			ptr = ptr->next;
		}
		//Found it
		//Now to insert the new node right after the prev_ptr. Or just before the bigger ( which is ptr )
		prev_ptr->next = new Node(num, ptr);
	}
}


//Program 17-5
int main() {
	LinkedList list;

	//Build the list
	list.add(2.5);
	list.add(7.9);
	list.add(12.6);

	//Diplay the list
	cout << "Here are the initial values: \n";
	list.display();
	cout << "\n\n";

	//Demonstrate the remove function
	cout << "Now removing the value in the middle.\n";
	list.remove(7.9);
	cout << "Here are the values left: \n";
	list.display();
	cout << "\n\n";

	cout << "Now removing the last value.\n";
	list.remove(12.6);
	cout << "Here are the values left.\n";
	list.display();
	cout << "\n\n";

	cout << "Now removing the only remaining value.\n";
	list.remove(2.5);
	cout << "Here are the values left.\n";
	list.display();
	cout << endl;

	return 0;
}