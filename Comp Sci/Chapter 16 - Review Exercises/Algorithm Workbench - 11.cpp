#include <iostream>
using namespace std;

template<typename T>
unique_ptr<T[]> reverseArray(T arr[], int size) {
	unique_ptr<T[]>reversed = make_unique<T[]>(size);
	for (int i = size - 1; i >= 0; i--) {
		reversed[size - i - 1] = arr[i];
	}
	return reversed;
}

int main() {
	int lol[4] = { 1,2,3,4 };
	auto unique = reverseArray(lol, 4);
	for (int i = 0; i < 4; i++) {
		cout << unique[i] << "  ";
	}
}