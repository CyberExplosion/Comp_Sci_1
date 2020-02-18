//#include <iostream>
//#include <crtdbg.h>
//using namespace std;
//
////Exception
//class Underflow{};
//
//class StringQueue {
//private:
//	struct Node {
//		char ch;
//		Node* next;
//		Node(char t_char, Node* t_next = nullptr) : ch(t_char), next(t_next) {};
//	};
//	Node* first;
//public:
//	StringQueue() : first(nullptr) {};
//	~StringQueue();
//	void store(string str);
//	void show();
//	void clear();
//};
//
//int main() {
//	string name = "K";
//	StringQueue que;
//	que.store(name);
//	que.show();
//	
//	que.clear();
//	try {
//		que.clear();
//	}
//	catch (Underflow) {
//		cout << "wtf\n";
//	}
//
//	if (_CrtDumpMemoryLeaks())
//		cout << "man\n";
//}
//
//StringQueue::~StringQueue() {
//	try {
//		clear();
//	}
//	catch (Underflow) {
//		cout << "The queue is already empty\n";
//	}
//}
//
//void StringQueue::store(string str) {
//	while (!str.empty()) {
//		first = new Node(str.back(), first);
//		str.pop_back();
//	}
//}
//
//void StringQueue::show() {
//	Node* ptr = first;
//	while (ptr != nullptr) {
//		cout << ptr->ch;
//		ptr = ptr->next;
//	}
//}
//
//void StringQueue::clear() {
//	if (first != nullptr) {
//		Node* trash = first;
//		while (first != nullptr) {
//			trash = first;
//			first = first->next;
//			delete trash;
//		}
//	}
//	else throw Underflow();
//}
