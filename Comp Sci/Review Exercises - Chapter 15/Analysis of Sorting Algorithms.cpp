//#include <iostream>
//using namespace std;
//
////Include Problem 1 and 2
//
//class AbstractSort {
//protected:
//	bool compare(int x, int y) {
//		return x < y;
//	}
//	virtual void sort(int arr[], int size) = 0;
//};
//
//class Bubble : protected AbstractSort {
//private:
//	int numCompare = 0;
//public:
//	void sort(int arr[], int size) override {
//		bool flag = false;
//		do {
//			flag = false;
//			for (int i = 0; i < size - 1; i++) {
//				if (compare(arr[i], arr[i + 1])) {
//					swap(arr[i], arr[i + 1]);
//					flag = true;
//				}
//				numCompare++;
//			}
//		} while (flag == true);
//	}
//	int numComparision() {
//		return numCompare;
//	}
//};
//
//class QuickSort : protected AbstractSort {
//private:
//	int num = 0;
//	int partition(int arr[], int left, int right);
//	void quickSort(int arr[], int first, int last);
//public:
//	void sort(int arr[], int size) override {
//		quickSort(arr, 0, size - 1);
//	}
//};
//
//int main() {
//	Bubble test;
//	int arr[5] = { 5,3,2,4,1 },
//		arr2[3] = { 3,1,2 };
//
//	test.sort(arr, 5);
//	cout << "Number of comparison made: " << test.numComparision() << endl;
//
//	QuickSort test2;
//	test2.sort(arr2, 3);
//}
//
//int QuickSort::partition(int arr[], int left, int right) {
//	//Pick the rightmost as pivot
//	int pi_index = right;
//	int pivot = arr[right];
//	do {
//		while (left <= right && arr[left] <= pivot)
//			left++;
//		//Now left is bigger than pivot
//		while (arr[right] > pivot)
//			right--;
//		//Now right is smaller than pivot
//		if (left < right)
//			//The index hasn't cross each other yet, meaning a swap is possible
//			swap(arr[left], arr[right]);
//	} while (left < right);
//	swap(arr[pi_index], arr[right]);
//	pi_index = right;
//	return pi_index;
//}
//
//void QuickSort::quickSort(int arr[], int first, int last) {
//	//If there's more than 1 element
//	if (last - first > 0) {
//		int pivotIndex;
//
//		pivotIndex = partition(arr, first, last);
//		quickSort(arr, first, pivotIndex - 1);
//		quickSort(arr, pivotIndex + 1, last);
//	}
//}
