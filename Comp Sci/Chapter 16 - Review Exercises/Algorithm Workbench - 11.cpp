//#include <iostream>
//using namespace std;
//
//template<typename T>
//unique_ptr<T[]> reverseArray(T arr[], int size) {
//	unique_ptr<T[]>reversed = make_unique<T[]>(size);
//	for (int i = size - 1; i >= 0; i--) {
//		reversed[size - i - 1] = arr[i];
//	}
//	return reversed;
//}
//
//template <typename T>
//T sumOfTwo(T a, T b) {
//	return a + b;
//}
//
//int main() {
//	string name[] = { "Khoi Nguyen", "wow", "haha", "yea" };
//	auto unique = reverseArray(name, 4);
//	for (int i = 0; i < 4; i++) {
//		cout << unique[i] << "  ";
//	}
//
//	string ye = "Wow";
//	string wow = "name";
//
//	cout << sumOfTwo(ye, wow);
//}