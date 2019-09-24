//#include <iostream>
//#include <fstream>
//using namespace std;
//
//struct Node {
//	double value;
//	Node* next;
//	//Constructor
//	//This will assign next automatically to nullptr if there are no argument for the second parameter
//	Node(double t_value, Node* t_next = nullptr) {
//		value = t_value;
//		next = t_next;
//	}
//};
//
//int main() {
//	double number; //Used to read the file
//	Node* head = nullptr;	//List of numbers
//
//	//Open the file
//	ifstream number_file("number.txt");
//	if (!number_file) {
//		cout << "Error in opening the file of numbers.\n";
//		return 1;
//	}
//
//	//Read the file into a linked list
//	cout << "The contents of the file are: " << endl;
//	while (number_file >> number) {
//		cout << number << " ";
//		//Each loop, create a node to hold this number
//		head = new Node(number, head);
//	}
//
//	//Traverse the list while printing
//	cout << endl << "The contents of the list are: " << endl;
//	Node* ptr = head;
//	while (ptr != nullptr) {
//		cout << ptr->value << " ";	//Process node
//		ptr = ptr->next;	// Move to next node
//	}
//
//	return 0;
//}