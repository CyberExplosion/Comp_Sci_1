//#include <iostream>
//using namespace std;
//
//class Overflow{};
//class Underflow{};
//
//template<typename T>
//class Queue {
//private:
//	unique_ptr<T[]>que;
//	int front;
//	int rear;
//	int numExist;
//	int capacity;
//public:
//	Queue(int size) {
//		que = make_unique<T[]>(size);
//		front = -1;
//		rear = -1;
//		numExist = 0;
//		capacity = size;
//	}
//	void enqueue(T val);
//	void dequeue(T& val);
//	void clear();
//	bool isEmpty();
//	bool isFull();
//};
//
//int main() {
//	Queue<int>que(3);
//	que.enqueue(10);
//	que.enqueue(50);
//	que.enqueue(600);
//	try {
//		que.enqueue(500);
//		cout << "You shouldn't see this\n";
//	}
//	catch (Overflow) {
//		cout << "It's working\n";
//	}
//
//	int out;
//	que.dequeue(out);
//	que.dequeue(out);
//	que.enqueue(15);
//	que.enqueue(1);
//	while (!que.isEmpty()) {
//		que.dequeue(out);
//		cout << out << "\n";
//	}
//	que.clear();
//	try {
//		que.dequeue(out);
//		cout << "You also shouldn't be able to see this\n";	
//	}
//	catch (Underflow) {
//		cout << "Great\n";
//	}
//}
//
//template<typename T>
//void Queue<T>::enqueue(T val) {
//	if (!isFull()) {
//		rear = (rear + 1) % capacity;
//		que[rear] = val;
//		numExist++;
//	}
//	else throw Overflow();
//}
//
//template<typename T>
//void Queue<T>::dequeue(T& val) {
//	if (!isEmpty()) {
//		front = (front + 1) % capacity;
//		val = que[front];
//		numExist--;
//	}
//	else throw Underflow();
//}
//
//template<typename T>
//void Queue<T>::clear() {
//	numExist = 0;
//	front = -1;
//	rear = -1;
//}
//
//template<typename T>
//bool Queue<T>::isEmpty() {
//	return numExist == 0;
//}
//
//template<typename T>
//bool Queue<T>::isFull() {
//	return numExist == capacity;
//}
