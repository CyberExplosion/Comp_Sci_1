//#include <iostream>
//#include <cstdlib>
//#include <memory>
//using namespace std;
//
////Exception for index out of range
//struct IndexOutOfRangeException{
//	const int index;
//	IndexOutOfRangeException(int ix) : index(ix) {}
// };
//
//template <class T>
//class SimpleVector {
//	unique _ptr<T[]> aptr;
//	int arraySize;
//public:
//	SimpleVector(int);
//	SimpleVector(const SimpleVector&);
//	int size() const { return arraySize; }
//	T& operator[](int); //II Overloaded[] operator
//	void print() const; //II Outputs the array elements
//
///*******************************************************
//Constructor for SimpleVector class. Sets the size
//of the array and allocates memory for it.
//*******************************************************/
//	template < class T>
//	SimpleVector<T>::SimpleVector(int s) {
//		arraySize = s;
//		aptr = make_unique<T[]>(s);
//		for (int count = O; count < arraySize; count++)
//			aptr[count] = T();
//	}
//	/******************************************************
//	Copy Constructor for SimpleVector class
//	******************************************************/
//	template <class T>
//	SimpleVector<T>::SimpleVector(const SimpleVector& obj) {
//		arraySize = obj.arraySize;
//		aptr = make_unique<T[]>(arraySize);
//		for (int count = O; count < arraySize; count++)
//			aptr[count] = obj[count];
//	}
//
//	/*******************************************************
//	Overloaded[] operator. The argument is a subscript. *
//	This function returns a reference to the element *
//	in the array indexed by the subscript . *
//	/*******************************************************/
//	template < class T>
//	T& SimpleVector<T>:: operator [](int sub) {
//		if (sub < 0 || sub >= arraySize)
//			throw IndexOutOfRangeException(sub);
//		return aptr[sub];
//	}
//	/********************************************************
//	prints all the entries i s the array . *
//	/********************************************************/
//	template <class T>
//	void SimpleVector<T> ::print() const {
//		for (int k = O; k < arraySize; k++)
//			cout << aptr[k] << " ";
//		cout << endl;
//	}
//};
//
//int main() {
//	return 0;
//}