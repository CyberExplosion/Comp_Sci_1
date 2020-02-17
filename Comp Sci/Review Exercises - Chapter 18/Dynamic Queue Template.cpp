#include <iostream>
using namespace std;

class Underflow{};

template<typename T>
class DynQueue {
private:
	struct Node {
		T val;
		Node* next;
		Node(T value, Node* t_next = nullptr) : val(value), next(t_next) {};
	};
	Node* front;
	int numExist;
public:
	DynQueue() : front(nullptr), numExist(0) {};
	~DynQueue();
	void enqueue(T val);
	void dequeue(T& val);
	bool isEmpty();
	void clear();
	int size();
};

int main() {
	DynQueue<int>que;
	que.enqueue(10);
		que.enqueue(50);
		que.enqueue(600);
		int out;
		que.dequeue(out);
		que.dequeue(out);
		que.enqueue(15);
		que.enqueue(1);
		while (!que.isEmpty()) {
			que.dequeue(out);
			cout << out << "\n";
		}
		cout << "Size: " << que.size() << endl;
		try {
			que.clear();
			que.dequeue(out);
			cout << "You also shouldn't be able to see this\n";	
		}
		catch (Underflow) {
			cout << "Great\n";
		}
}
template<typename T>
DynQueue<T>::~DynQueue() {
	try {
		clear();
	}
	catch (Underflow) {
		cout << "Great\n";
	}
}

template<typename T>
void DynQueue<T>::enqueue(T val) {
	front = new Node(val, front);
	numExist++;
}

template<typename T>
void DynQueue<T>::dequeue(T& val) {
	if (!isEmpty()) {
		if (front->next == nullptr) {
			val = front->val;
			delete front;
			front = nullptr;
		}
		else {
			Node* ptr = front;
			Node* prev_ptr = ptr;
			while (ptr->next != nullptr) {
				prev_ptr = ptr;
				ptr = ptr->next;
			}
			val = ptr->val;
			delete ptr;
			prev_ptr->next = nullptr;
		}
		numExist--;
	}
	else throw Underflow();
}

template<typename T>
bool DynQueue<T>::isEmpty() {
	return front == nullptr;
}

template<typename T>
void DynQueue<T>::clear() {
	if (front != nullptr) {
		Node* garbage;
		while (front != nullptr) {
			garbage = front;
			front = front->next;
			delete garbage;
		}
		numExist = 0;
	}
	else throw Underflow();
}

template<typename T>
int DynQueue<T>::size() {
	return numExist;
}
