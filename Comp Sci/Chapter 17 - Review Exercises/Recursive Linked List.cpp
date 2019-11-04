//#include <iostream>
//using namespace std;
//
//class LinkedList {
//protected:
//	struct Node {
//		int val;
//		Node* next;
//		Node(int t_val, Node* t_next = nullptr) {
//			val = t_val;
//			next = t_next;
//		}
//	};
//	Node* head;
//	Node* addRecursive(Node* list, int val);
//	Node* removeRecursive(Node* list, int val);
//	void displayRecursive(Node* list);
//	int sizeRecursive(Node* list);
//public:
//	LinkedList() : head(nullptr) {}
//	~LinkedList();
//	void add(int);
//	void remove(int);
//	void display();
//	int size();
//};
//
//LinkedList::Node* LinkedList::addRecursive(Node* list, int val) {
//	if (list == nullptr) {
//		return new Node(val);
//	}
//	else {
//		//Add the value to the end of the tail
//		list->next = addRecursive(list->next, val);
//		return list;
//	}
//}
//
///********************************
//The function goes like this:
//	1) It's gonna see if the list is empty or not, if it's empty then return nullptr
//	2) Then it checks the first value in the list, if it's the value we need to remove then assign the new head to the next one in line and delete the old head
//	3) If it's not the first one in the list, then recursively make a new list by moving the head parameter to the next node and restart at step 1)
//	4) Once step 2) is completed, return the new head of the list, which has the Node right after the removed one
//	5) Step 3) then complete and return the Node that is now has "next" point to the Node right after the removed one.
//	6) Repeat till the Node hit nullptr
//*********************************/
//LinkedList::Node* LinkedList::removeRecursive(Node* list, int val) {
//	//If the list is empty
//	if (list == nullptr) {
//		return nullptr;
//	}
//	//See if the value is the first on the list
//	//If the first node is the correct one, delete the value and return the tail.
//	//The tail is the rest of the list, since is the first node, we delete the head and assign the new head as the first node on the tail
//	if (list->val == val) {
//		Node* neo_head = list->next;
//		delete list;
//		return neo_head;
//	}
//	else {
//		//First node in the list is not the one we want
//		//Return the list with the value remove from the tail of the list
//		list->next = removeRecursive(list->next, val);
//		return list;
//	}
//}
//
//void LinkedList::displayRecursive(Node* list) {
//	if (list != nullptr) {
//		cout << list->val << "  ";
//		displayRecursive(list->next);
//	}
//}
//
//int LinkedList::sizeRecursive(Node* list) {
//	if (list == nullptr) {
//		return 0;
//	}
//	else {
//		return 1 + sizeRecursive(list->next);
//	}
//}
//
//LinkedList::~LinkedList() {
//	Node* ptr = head;
//	if (ptr == nullptr) {
//		return;
//	}
//	else {
//		while (ptr != nullptr) {
//			Node* garbage = ptr;
//			ptr = ptr->next;
//			delete garbage;
//		}
//	}
//}
//
//void LinkedList::add(int val) {
//	head = addRecursive(head, val);
//}
//
//void LinkedList::remove(int val) {
//	head = removeRecursive(head, val);
//}
//
//void LinkedList::display() {
//	displayRecursive(head);
//}
//
//int LinkedList::size() {
//	return sizeRecursive(head);
//}
//
//class ReliableLinkedList : public LinkedList {
//private:
//	//These functions are static because they are just utilities function that doesn't need specific access to an object to do its' job.
//	static Node* copyList(Node* list);
//	static void destroyList(Node* list);
//public:
//	//Default Constructor, this allow list that are empty to be created. Since this is an inherited class, the LinkedList Constructor will be called if an object in this class is made.
//	ReliableLinkedList(){}
//	//Copy constructor
//	ReliableLinkedList(const ReliableLinkedList& original) {
//		head = copyList(original.head);
//	}
//	//Assignment constructor
//	ReliableLinkedList& operator=(ReliableLinkedList right) {
//		destroyList(head);
//		head = copyList(right.head);
//		return *this;
//	}
//};
//
//
//ReliableLinkedList::Node* ReliableLinkedList::copyList(Node* list) {
//	if (list == nullptr) {
//		return nullptr;
//	}
//	else {
//		//Copy the tail
//		Node* tail = copyList(list->next);
//		//Return copy of head attached to copy of tail
//		return new Node(list->val, tail);
//		//Now we just need the head to point to the first node in the tail
//	}
//}
//
//void ReliableLinkedList::destroyList(Node* list) {
//	if (list != nullptr) {
//		Node* tail = list->next;
//		//Deallocate the head and then destroy the tail
//		delete list;
//		destroyList(tail);
//	}
//}
//
//int main() {
//	ReliableLinkedList squareList, cubeList;
//	//Store values in the two lists
//	for (int k = 1; k <= 5; k++) {
//		squareList.add(k * k);
//		cubeList.add(k * k * k);
//	}
//
//	//Use copy constructor to create a third list
//	ReliableLinkedList otherList(squareList);
//	cout << "Result of the copy constructor is: ";
//	otherList.display();
//	cout << endl;
//
//	//Use the assignment operator
//	otherList = cubeList;
//	cout << "Result of assignment is: ";
//	otherList.display();
//	cout << endl;
//	return 0;
//}