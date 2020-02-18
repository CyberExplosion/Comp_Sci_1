//#include <iostream>
//using namespace std;
//
////Add challenge 8
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
//
//	//Copy Constructor
//	IntStack(const IntStack& obj);
//	//Assignment Operator
//	IntStack& operator=(const IntStack<T>& obj);
//
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
//	
//	IntStack<int>stk2(2);
//	stk2.push(20);
//	stk2.push(15);
//	IntStack<int>stkCopy(stk2);
//	int out;
//	while (!stkCopy.isEmpty()) {
//		stkCopy.pop(out);
//		cout << out << " ";
//	}
//	cout << "\n";
//	IntStack<int>stkAssign(15);
//	stkAssign = stk2;
//	cout << "Assignment :\n";
//	while (!stkAssign.isEmpty()) {
//		stkAssign.pop(out);
//		cout << out << " ";
//	}
//	cout << endl;
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
//IntStack<T>::IntStack(const IntStack& obj) : IntStack(obj.capacity) {
//	for (int i = 0; i < this->capacity; i++) {
//		this->stk[i] = obj.stk[i];
//	}
//	top = obj.top;
//}
//
//template<typename T>
//IntStack<T>& IntStack<T>::operator=(const IntStack<T>& obj) {
//	capacity = obj.capacity;
//	top = 0;
//	this->stk.reset();
//	stk = make_unique<T[]>(capacity);
//	for (int i = 0; i < this->capacity; i++) {
//		this->stk[i] = obj.stk[i];
//	}
//	top = obj.top;
//	return *this;
//}
//
//
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
