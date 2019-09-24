//#include <iostream>
//using namespace std;
//
//struct Node {
//	double value;
//	Node* next;
//};
//
//int main() {
//	Node* head = nullptr;
//
//	//Create first node with 12.5
//	head = new Node;
//	head->value = 12.5;
//	head->next = nullptr;
//
//	//Create second node with 13.5
//	Node* secondPtr = new Node;
//	secondPtr->value = 13.5;
//	secondPtr->next = nullptr; //Second node is end of list now
//	head->next = secondPtr; //First node points to second
//
//	//Print the list
//	cout << "First item is " << head->value << endl;
//	cout << "Second item is " << head->next->value << endl;
//
//	return 0;
//}