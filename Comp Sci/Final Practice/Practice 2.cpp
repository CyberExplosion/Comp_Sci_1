#include <iostream>
using namespace std;

bool noDuplicates(int[], int);

int main_done2() {
	int array1[5] = { 1,2,3,4,5 };

	cout << noDuplicates(array1, 5);

	return 0;
}

bool noDuplicates(int numbers[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (j != i) {
				if (numbers[i] == numbers[j]) {
					return false;
				}
			}
		}
	}
	return true;
}