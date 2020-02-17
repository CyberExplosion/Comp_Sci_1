#include <iostream>
using namespace std;

//Exception
class Underflow{};

template<typename T>
class DynStack {
private:
	struct Node {
		T value;
		Node* next;
		Node(T val, Node* t_next = nullptr) : value(val), next(t_next) {};
	};
	Node* top;
public:
	DynStack() : top(nullptr) {};
	~DynStack();
	void push(T val);
	void pop(T& val);
	bool isEmpty();
	void clear();
};

int main() {
	int out;
	DynStack<int>stk;
	stk.push(12);
	//stk.pop(out);
	//try {
	//	stk.pop(out);
	//	cout << "You should not see this\n";
	//}
	//catch (Underflow) {
	//	cout << "ERROR: The stack is empty\n";
	//}
	stk.push(65);
	stk.push(99);
	while (!stk.isEmpty()) {
		stk.pop(out);
		cout << out << "\n";
	}
	stk.push(550);
	stk.clear();
	try {
		stk.pop(out);
		cout << "This should not happen\n";
	}
	catch (Underflow) {
		cout << "Everything works as expected\n";
	}
}

template<typename T>
DynStack<T>::~DynStack() {
	clear();
}

template<typename T>
void DynStack<T>::push(T val) {
	top = new Node(val, top);
}

template<typename T>
void DynStack<T>::pop(T& val) {
	if (!isEmpty()) {
		val = top->value;
		Node* temp = top;
		top = top->next;
		delete temp;
	}
	else throw Underflow();
}

template<typename T>
bool DynStack<T>::isEmpty() {
	return top == nullptr;
}

template<typename T>
void DynStack<T>::clear() {
	Node* garbage;
	while (top != nullptr) {
		garbage = top;
		top = top->next;
		delete garbage;
	}
}
