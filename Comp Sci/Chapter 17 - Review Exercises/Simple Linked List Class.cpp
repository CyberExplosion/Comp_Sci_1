#include <iostream>
using namespace std;

//Added challenge 2, 3, 4, 5, 6, 7, 8

class LinkedList {
protected:
	struct Node {
		double val;
		Node* next;
		Node(double t_val, Node* t_next = nullptr) {
			val = t_val;
			next = t_next;
		}
	};
private:
	Node* head;
	void printRecursive(Node* list);
	Node* recursiveCheck(Node* list, double x);
	Node* recursiveRemove(Node* list, double x);
	Node* recursiveReverse(Node* list);
public:
	LinkedList() :head(nullptr) {}
	~LinkedList();
	LinkedList(const LinkedList& original);
	void remove(double x);
	void add(double x);
	bool isMember(double x);
	void print();
	void reverse();
	int search(double x);
	void insert(double x, int pos);
	void remove(int pos);
	void sort();
};

int main() {
	LinkedList list;
	//list.add(10);
	list.add(20);
	list.add(30);

	//if (list.isMember(20)) {
	//	cout << "This is a member\n";
	//}
	//else {
	//	cout << "It's not a member\n";
	//}

	//LinkedList list1(list);
	//if (list1.isMember(10)) { 
	//	cout << "List 1 copy success\n";
	//}
	//else {
	//	cout << "failed\n";
	//}
	//list.remove(20);
	//list.print();
	//cout << "\n========================\n";
	//cout << list.search(10) << endl;
	//list.insert(25, 1);
	//list.print();
	//cout << endl;
	//list.remove(2);
	//list.print();
	//cout << endl;
	list.sort();
	list.print();
	return 0;
}


void LinkedList::printRecursive(Node* list) {
	if (list != nullptr) {
		cout << list->val << "  ";
		printRecursive(list->next);
	}
}

LinkedList::Node* LinkedList::recursiveCheck(Node* list, double x) {
	if (list == nullptr) {
		return nullptr;
	}
	if (list->val == x) {
		return list;
	}
	else {
		recursiveCheck(list->next, x);
	}
}

LinkedList::Node* LinkedList::recursiveRemove(Node* list, double x) {
	if (list == nullptr) {
		return nullptr;
	}
	//When the head is the thing you want to delete
	if (list->val == x) {
		Node* tail = list->next;
		delete list;
		return tail;
	}
	else {
		//You move the head down by one in the function parameter
		list->next = recursiveRemove(list->next, x);
		return list;
	}
}

LinkedList::Node* LinkedList::recursiveReverse(Node* list) {
	if (list == nullptr) {
		return nullptr;
	}
	//There's only 1 node
	if (list->next == nullptr) {
		head = list;
		return list;
	}
	else {
		//More than 1 node
		Node* rest = recursiveReverse(list->next);	//Recursive call on rest
		head->next->next = head;	//Make head link to the last node in the reversed rest.
		head->next = nullptr;	//Since head is the new last, make its link to nullptr
		return rest;	//Rest now points to the head of the reversed list
	}
}

LinkedList::~LinkedList() {
	Node* ptr = head;
	while (ptr != nullptr) {
		Node* garbage = ptr;
		ptr = ptr->next;
		delete garbage;
	}
}

LinkedList::LinkedList(const LinkedList& original) {
	LinkedList();
	Node* ptr = original.head;
	if (ptr == nullptr) {
		return;
	}
	else {
		head = new Node(ptr->val);
		ptr = ptr->next;
		Node* cpy_ptr = head;
		
		while (ptr != nullptr) {
			cpy_ptr->next = new Node(ptr->val);
			cpy_ptr = cpy_ptr->next;
			ptr = ptr->next;
		}
	}
}

void LinkedList::remove(double x) {
	recursiveRemove(head, x);
}

void LinkedList::add(double x) {
	head = new Node(x, head);
}

bool LinkedList::isMember(double x) {
	//Node* ptr = head;
	//if (ptr == nullptr) {
	//	return false;
	//}
	//else {
	//	while (ptr->next != nullptr && ptr->val != x) {
	//		ptr = ptr->next;
	//	}
	//	if (ptr->val == x) {
	//		return true;
	//	}
	//	else return false;
	//}
	Node* ptr = head;
	if (recursiveCheck(ptr, x)) {
		return true;
	}
	else return false;
}


void LinkedList::print() {
	printRecursive(head);
}

void LinkedList::reverse() {
	head = recursiveReverse(head);
}

int LinkedList::search(double x) {
	int rank = 0;
	Node* ptr = head;

	if (head == nullptr) {
		return -1;
	}
	while (ptr!= nullptr) {
		if (ptr->val == x)
			return rank;
		rank++;
		ptr = ptr->next;
	}
	return -1;
}

void LinkedList::insert(double x, int pos) {
	if (pos == 0) {
		head = new Node(x, head);
		return;
	}
	if (head == nullptr) {
		head = new Node(x, head);
		return;
	}
	int size = 0;
	Node* ptr = head;

	while (ptr!= nullptr) {
		//In middle of linked list
		if (pos == size + 1) {
			//If position we want to insert into is the next node
			ptr->next = new Node(x, ptr->next);
			return;
		}
		ptr = ptr->next;
		size++;
	}
	//At the end of linked list
	if (pos >= size) {
		ptr = new Node(x);
	}
}

void LinkedList::remove(int pos) {
	if (head == nullptr)
		return;
	Node* ptr = head->next;
	if (pos == 0) {
		delete head;
		head = ptr;
		return;
	}
	ptr = head;
	int size = 0;
	while (ptr != nullptr) {
		if (pos == size + 1) {
			Node* garbage = ptr->next;
			ptr->next = ptr->next->next;
			delete garbage;
			return;
		}
		ptr = ptr->next;
		size++;
	}
}


//Use recursion, insertion sort or merge sort is required for this
void LinkedList::sort() {
	if (head == nullptr)
		return;
	if (head->next == nullptr)
		return;

	//Bubble swap
	bool swapFlag;
	Node* ptr = head,
		* prev_ptr = ptr;
	do {
		swapFlag = false;
		while (ptr != nullptr) {
			if (prev_ptr->val > ptr->val) {
				prev_ptr->next = ptr->next;
				//Swap the head after the swap
				head = ptr;
				ptr->next = prev_ptr;
				swapFlag = true;
			}
			prev_ptr = ptr;
			ptr = ptr->next;
		}
	} while (swapFlag);

}
