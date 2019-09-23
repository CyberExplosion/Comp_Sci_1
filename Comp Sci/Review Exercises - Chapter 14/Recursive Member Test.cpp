//#include <iostream>
//using namespace std;
//
//bool isMember(int *arr, int size, int num) {
//	if (size == 0) {
//		return 0;
//	}
//	if (arr[size - 1] == num) {
//		return true;
//	}
//	else {
//		return false + isMember(arr, size - 1, num);
//	}
//}
//
//int main() {
//	int arr[3] = { 1,2,3 };
//
//	if (isMember(arr, 3, 3)) {
//		cout << "True\n";
//	}
//	else {
//		cout << "False\n";
//	}
//
//	return 0;
//}