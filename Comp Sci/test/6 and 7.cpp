#include <iostream>
using namespace std;

int sum(int a[], int n);

int main() {
	int array[9] = { 1,6,2,3,7,5,6,8,7};
	cout << sum(array, 9) << endl;
	return 0;
}

int sum(int a[], int size) {
	int sum = 0,
		sum_6_exist = 0;
	bool exist_6 = false,
		exist_7 = false;

	for (int i = 0; i < size; i++) {
		sum += *(a + i);	// Make a sum for every number in the array

		if (*(a + i) == 6) {
			exist_6 = true;  // If a number in the array is 6, set the indicator to on
		}
		if (exist_6) {
			sum_6_exist += *(a + i);	// If the indicator of 6 is on, make another sum start from the position where 6 is detected
			
			if (*(a + i) == 7) {
				exist_7 = true;	// If the number 7 is in the array, set the indicator to on
			}

		}						

		if (exist_6 && exist_7) {	// Only apply if a pair of 6 and 7 has been found.
			exist_6 = false;	// Reset the 6 indicator after 1 loop
			exist_7 = false;	// Reset the 7 indicator after 1 loop
		}

	}

	for (int j = 0; j < size - 1; j++) {	// Add a case if 6 and 7 right next to each other with no number in between
		if (*(a+j) == 6 && *(a + j + 1) == 7) {
			sum_6_exist = 6 + 7;	// When 6 and 7 right next to each other, we jut need to set the sum_6_indicator like this so we can just minus them in the final sum
		}
	}

	if (exist_6==false && exist_7==false) {	// Another indicator that a pair of 6 and 7 is found. With the condition above on line 33, if there is a pair of 6 and 7 found, both indicator will turn to false
		sum -= sum_6_exist;		// Take the normal sum and minus another sum that is created after 6 detected. The result will be a sum minus the number in between 6 and 7
	}
	
	return sum;
}