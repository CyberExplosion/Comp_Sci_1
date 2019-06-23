//#include <iostream>
////#include <memory>
//using namespace std;
//
//double findMedian(int arr[], int size) {
//	double median = 0;
//	int index;
//	if (size % 2 == 0) {
//		// even
//		index = size / 2 - 1;
//		median = (*(arr + index) + *(arr + index + 1)) / 2.0;
//	}
//	else {
//		//odd
//		index = ((size - 1) / 2);
//		median = *(arr + index);
//	}
//	return median;
//}
//
//int main() {
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		cout << "Enter value number " << i + 1 << ": ";
//		cin >> arr[i];
//	}
//	cout << "the median is: " << findMedian(arr, 5);
//	return 0;
//}