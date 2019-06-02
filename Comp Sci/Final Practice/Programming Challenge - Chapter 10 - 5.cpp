// Description: The program will find the mode of statistic
#include <iostream>
using namespace std;

void findMode(int[], int);

int main_done5ch10() {
	int arr[5] = {0,0,0,3,4};
	findMode(arr, 5);

	return 0;
}

void findMode(int arr[], int size) {
	bool swap_flag = false;
	int most_appearance_pos = -1;
	do {
		swap_flag = false;
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				swap_flag = true;
			}
		}
	} while (swap_flag == true);
	int* num_appearance = new int[size];
	for (int n = 0; n < size; n++) {
		num_appearance[n] = 1;
	}
	for (int j = 0; j < size - 1; j++) {
		if (arr[j] == arr[j + 1]) {
			num_appearance[j]++;
		}
	}
	for (int m = 0; m < size - 1; m++) {
		if (num_appearance[m] < num_appearance[m + 1] || most_appearance_pos == -1) {
			most_appearance_pos = m;
		}
	}
	cout << "The mode of the element in the array is: " << arr[most_appearance_pos] << endl;

	delete[]num_appearance;
	num_appearance = nullptr;
}