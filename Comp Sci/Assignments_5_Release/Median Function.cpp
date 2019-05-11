//Khoi Nguyen
//CS1, Section #0109
//Assignment #5, Problem #3
//Description: The program returns the median of 2 sorted array of different size.
#include <iostream>
using namespace std;

double median(int[], int);

int main() {
	const int SIZE_1 = 3,
		SIZE_2 = 4;

	int arr1[SIZE_1] = { 1,3,7 },
		arr2[SIZE_2] = { 2,4,5,9 };
	cout << "The value of array one are ";
	for (int i = 0; i < SIZE_1; i++) {
		cout << *(arr1 + i) << " ";
	}
	cout << endl;
	cout << "The median of array one is " << median(arr1, SIZE_1) << endl << endl;
	cout << "The value of array two are ";
	for (int k = 0; k < SIZE_2; k++) {
		cout <<  * (arr2 + k) << " ";
	}
	cout << endl;
	cout << "The median of array two is " << median(arr2, SIZE_2) << endl;

	return 0;
}
/****************************
FUNCTION NAME: median
INPUT: an array and its size
OUTPUT: The median value of the array
DESCRIPTION: The function takes in the array and its size, depending on if the size is odd or even, the function will do differently. When size is odd number, the function return the value of the middle element of the array. When size is even, the function return the value of the average of the 2 middle elements of the array.
*****************************/
double median(int number[], int size) {
	int the_chosen_one,
		the_chosen_two;
	double result;
	//When size is an even number
	if (size % 2 == 0) {
		the_chosen_one = size / 2;
		the_chosen_two = the_chosen_one - 1;
		result = (*(number + the_chosen_one) + *(number + the_chosen_two)) / 2.0;
		return result;
	}
	// When size is an odd number
	else {
		the_chosen_one = size / 2.0 - 0.5;
		return *(number + the_chosen_one);
	}
}