//#include <iostream>
//#include <cstdlib>
//#include <memory>
//using namespace std;
//
////Exception for index out of range
//struct IndexOutOfRangeException {
//	const int index;
//	IndexOutOfRangeException(int ix) : index(ix) {}
//};
//
//template<class T>
//class SimpleVector {
//	unique_ptr<T[]>aptr;
//	int arraySize;
//public:
//	SimpleVector(int);	//Constructor
//	SimpleVector(const SimpleVector&);	//Copy Constructor
//	SimpleVector& operator=(const SimpleVector&);	//Assignment Constructor
//
//	int size()const {
//		return arraySize;
//	}
//	T& operator[](int);	//Overloaded [] operator
//	void print() const;	//Outputs the array elements
//};
//
///*********************************
//Constructor for SimpleVector Class. Sets the size of the array and allocates memory for it
//**********************************/
//template <class T>
//SimpleVector<T>::SimpleVector(int s) {
//	arraySize = s;
//	aptr = make_unique<T[]>(s);
//	for (int count = 0; count < arraySize; count++) {
//		aptr[count] = T();
//	}
//}
//
///*********************************
//Copy Constructor for SimpleVector Class.
//**********************************/
//template <class T>
//SimpleVector<T>::SimpleVector(const SimpleVector& obj) {
//	arraySize = obj.arraySize;
//	aptr = make_unique<T[]>(arraySize);
//	for (int count = 0; count < arraySize; count++) {
//		aptr[count] = obj[count];
//	}
//}
//
//
///**********************************
//Assignment Constructor for SimpleVector Class.
//***********************************/
//template<class T>
//SimpleVector<T>& SimpleVector<T>::operator=(const SimpleVector& obj) {
//	aptr.reset();
//	arraySize = obj.arraySize;
//	aptr = make_unique<T[]>(arraySize);
//	for (int i = 0; i < arraySize; i++) {
//		aptr[i] = obj[i];
//	}
//	return *this;
//}
//
//
///***********************************
//Overloaded [] operator. The argument is a subscript. This function returns a reference to the element in the array indexed by the subscript
//***********************************/
//template <class T>
//T& SimpleVector<T>::operator[](int sub) {
//	if (sub < 0 || sub >= arraySize) {
//		throw IndexOutOfRangeException(sub);
//	}
//	return aptr[sub];
//}
//
///************************************
//Prints all the entries in the array
//*************************************/
//template <class T>
//void SimpleVector<T>::print()const {
//	for (int k = 0; k < arraySize; k++) {
//		cout << aptr[k] << "  ";
//	}
//	cout << endl;
//}
//
//int main() {
//	const int SIZE = 10;
//	SimpleVector<int> intTable(SIZE);
//	SimpleVector<double>doubleTable(SIZE);
//
//	//Store value in the arrays
//	for (int x = 0; x < SIZE; x++) {
//		intTable[x] = (x * 2);
//		doubleTable[x] = (x * 2.14);
//	}
//
//	//Test assignment
//
//}