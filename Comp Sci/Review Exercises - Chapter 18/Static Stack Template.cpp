//#include <iostream>
//using namespace std;
//
////Exception
//class Overflow {};
//class Underflow{};
//
//template<typename T>
//class IntStack {
//private:
//	unique_ptr<T[]> stk;
//	int top;
//	int capacity;
//public:
//	IntStack(int size);
//	void push(T val);
//	void pop(T& val);
//	bool isEmpty();
//	void clear();
//};
//
//int main() {
//	IntStack<int> stk(1);
//	stk.push(12);
//	try {
//		stk.push(22);
//		cout << "This shouldn't happen\n";
//	}
//	catch (Overflow) {
//		cout << "Reach stack capacity limit.\n";
//	}
//	catch (Underflow) {
//		cout << "Empty stack.\n";
//	}
//}
//
//template<typename T>
//IntStack<T>::IntStack(int size) {
//	stk = make_unique<T[]>(size);
//	capacity = size;
//	top = 0;
//}
//
//template<typename T>
//void IntStack<T>::push(T val) {
//	if (top != capacity) {
//		stk[top] = val;
//		top++;
//	}
//	else
//		throw Overflow();
//}
//
//template<typename T>
//void IntStack<T>::pop(T& val) {
//	if (!isEmpty()) {
//		top--;
//		val = stk[top];
//	}
//	else
//		throw Underflow();
//}
//
//template<typename T>
//bool IntStack<T>::isEmpty() {
//	return top == 0;
//}
//
//template<typename T>
//void IntStack<T>::clear() {
//	top = 0;
//}
