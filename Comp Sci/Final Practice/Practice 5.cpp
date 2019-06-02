#include <iostream>
using namespace std;

void bubleSort(int[], int);
void selectionSort(int arr[], int size);

int main_done5() {
	int unsorted_arr[5] = { 23,5,16,33,7 };
	//selectionSort(unsorted_arr, 5);
	//cout << "Selection Sort: ";
	//for (int i = 0; i < 5; i++) {
	//	cout << unsorted_arr[i] << " ";
	//}
	//cout << endl;
	cout << "Bubble Sort: ";
	bubleSort(unsorted_arr, 5);
	for (int j = 0; j < 5; j++) {
		cout << unsorted_arr[j] << " ";
	}
	cout << endl;
	return 0;
}

void selectionSort(int arr[], int size) {
	int minimum;
	for (int i = 0; i < size - 1; i++) {
		minimum = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
	return;
}

void bubleSort(int arr[], int size) {
	bool swap_flag = false;
	do {
		swap_flag = false;
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				swap_flag = true;
			}
		}
	} while (swap_flag == true);
	return;
}