#include <iostream>
using namespace std;

double CalculateMean(double[], int);

int main_done3() {
	double array[5] = { 1.0,2.5,3,4,5 };
	cout << CalculateMean(array, 5);

	return 0;
}

double CalculateMean(double arr[], int size) {
	double mean = 0.0, total = 0;
	for (int i = 0; i < size; i++) {
		total += arr[i];
	}
	mean = total / size;
	return mean;
}