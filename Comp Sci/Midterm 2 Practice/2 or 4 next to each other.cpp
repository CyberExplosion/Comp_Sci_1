#include <iostream>
using namespace std;

bool either_24(int*, int n);

int main_done3() {
	int grades[5] = { 1,4,4,2,2 };

	cout << either_24(grades, 5);

	return 0;
}

bool either_24(int *array_name, int size) {
	bool next_to_each_other_2 = false,
		next_to_each_other_4 = false;
	
	for (int i = 0; i < size - 1; i++) { // got to add -1 or else would run out of array bound
		// Test for if 2 number 2 next to each other, the thing would be true
		// something like array == array-1;
		if (*(array_name+i) == 2 && *(array_name+i+1) == 2) {
			next_to_each_other_2 = true;
		}
		if (*(array_name+i) == 4 && *(array_name+i+1) == 4) {
			next_to_each_other_4 = true;
		}
	}
	if (next_to_each_other_2 != next_to_each_other_4) {
		return true;
	}
	else return false;
	
}