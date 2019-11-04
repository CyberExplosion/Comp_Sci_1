//#include <iostream>
//using namespace std;
//
//class LinkedList {
//protected:
//	struct Node {
//		int val;
//		Node* next;
//	};
//	Node* head;
//private:
//	Node* lastValueRecursive(Node* ptr) {
//		if (ptr->next == nullptr) {
//			return ptr;
//		}
//		else {
//			return lastValueRecursive(ptr->next);
//		}
//	}
//	Node* concat(Node* list) {
//		if (concat == nullptr) {
//			return nullptr;
//		}
//		concat(list->next);
//		return list;
//	}
//public:
//	void printFirst(Node* ptr) {
//		ptr = head;
//		if (ptr == nullptr) {
//			cout << "There are no node in the list.\n";
//			exit(1);
//		}
//		else {
//			cout << ptr->val << endl;
//		}
//	}
//	void printSecond(Node* ptr) {
//		ptr = head;
//		int count = 0;
//		while (ptr != nullptr) {
//			ptr = ptr->next;
//			count++;
//		}
//		if (count < 2) {
//			cout << "There are less than 2 nodes in the list.\n";
//			exit(2);
//		}
//		else {
//			ptr = head;
//			for (int i = 0; i < 2; i++) {
//				ptr = ptr->next;
//			}
//			cout << ptr->val << endl;
//		}
//	}
//	double lastValue(Node* ptr) {
//		ptr = head;
//		if (ptr == nullptr) {
//			cout << "There are no nodes in the list.\n";
//			exit(3);
//		}
//		else {
//			ptr = lastValueRecursive(ptr);
//			return ptr->val;
//		}
//	}
//	Node* removeFirst(Node* ptr) {
//		ptr = head;
//		if (ptr == nullptr) {
//			return nullptr;
//		}
//		else {
//			head = head->next;
//			delete ptr;
//			return head;
//		}
//	}
//	Node* ListConcat(Node* list1, Node* list2) {
//		if (list1 == nullptr) {
//			return nullptr;
//		}
//		else {
//			while (list1 != nullptr) {
//				list1 = list1->next;
//			}
//			list1->next = concat(list2);
//			list1 = head;
//			return list1;
//		}
//	}
//};
//
//int main() {
//
//	return 0;
//}