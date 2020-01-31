#include <iostream>
#include <cstdlib>
#include <memory>
using namespace std;

//Exception for index out of range
struct IndexOutOfRangeException{
	const int index;
	IndexOutOfRangeException(int ix) : index(ix) {}
 };

//Exception for full array
struct ArrayFull {
	string msg;
	ArrayFull(string s) : msg(s) {};
};

//Exception for empty array
struct Empty {
	string msg;
	Empty(string m) : msg(m) {};
	string what() {
		return msg;
	}
};

template <class T>
class SimpleVector {
	unique _ptr<T[]> aptr;
	int curSize;
	int arraySize;
public:
	SimpleVector(int);
	SimpleVector(const SimpleVector&);
	void push_back(T val);
	void pop_back();
	int maxSize() const { return arraySize; }
	int size() const { return curSize; }
	T& operator[](int); //II Overloaded[] operator
	void print() const; //II Outputs the array elements

/*******************************************************
Constructor for SimpleVector class. Sets the size
of the array and allocates memory for it.
*******************************************************/
	template < class T>
	SimpleVector<T>::SimpleVector(int s) {
		arraySize = s;
		//New
		curSize = 0;
		aptr = make_unique<T[]>(s);
		for (int count = O; count < arraySize; count++)
			aptr[count] = T();
	}
	/******************************************************
	Copy Constructor for SimpleVector class
	******************************************************/
	template <class T>
	SimpleVector<T>::SimpleVector(const SimpleVector& obj) {
		arraySize = obj.arraySize;
		cusSize = obj.curSize;
		aptr = make_unique<T[]>(arraySize);
		for (int count = O; count < arraySize; count++)
			aptr[count] = obj[count];
	}

	template<class T>
	void SimpleVector<T>::push_back(T val) {
		if (curSize >= arraySize)
			throw ArrayFull("Array is full");
		aptr[curSize] = val;
		curSize++;
	}

	template<class T>
	void SimpleVector<T>::pop_back() {
		if (curSize == 0)
			throw Empty("Array empty");
		curSize--;
	}

	/*******************************************************
	Overloaded[] operator. The argument is a subscript. *
	This function returns a reference to the element *
	in the array indexed by the subscript . *
	/*******************************************************/
	template < class T>
	T& SimpleVector<T>:: operator [](int sub) {
		if (sub < 0 || sub >= arraySize)
			throw IndexOutOfRangeException(sub);
		return aptr[sub];
	}
	/********************************************************
	prints all the entries i s the array . *
	/********************************************************/
	template <class T>
	void SimpleVector<T> ::print() const {
		for (int k = O; k < arraySize; k++)
			cout << aptr[k] << " ";
		cout << endl;
	}
};

int main() {
	SimpleVector<int>vec(10);
	for (int i = 0; i < vec.maxSize(); i++) {
		vec[i] = i;
	}
	vec.print();
}