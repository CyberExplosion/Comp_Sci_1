#include <iostream>
using namespace std;

void ascenBubleSort(int[], int);
void ascenSelectionSort(int[], int);

int main_done10ch10() {
	const int SIZE = 8;
	int arr1[SIZE] = { 5,1,3,6,2,4,8,7};
	int arr2[SIZE] = { 5,1,3,6,2,4,8,7};
	cout << "Bubble Sort: " << endl;
	ascenBubleSort(arr1, SIZE);
	cout << endl;
	cout << "Selection Sort: " << endl;
	ascenSelectionSort(arr2, SIZE);
	cout << endl;
	return 0;
}

void ascenBubleSort(int arr[], int size) {
	bool swap_flag = false;
	do {
		swap_flag = false;
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				swap_flag = true;
			}
		}
		for (int j = 0; j < size; j++) {
			cout << arr[j] << " ";
		}
		cout << endl;
	} while (swap_flag == true);
	return;
}

void ascenSelectionSort(int arr[], int size) {
	int minimum;
	for (int i = 0; i < size - 1; i++) {
		minimum = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
		for (int k = 0; k < size; k++) {
			cout << arr[k] << " ";
		}
		cout << endl;
	}
	return;
}