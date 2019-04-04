#include <iostream>
using namespace std;

int main_done25() {
	int grade;

	cout << "Enter the grade: ";
	cin >> grade;

	cout << "The number is " << (grade > 0 && grade < 100 ? "valid\n" : "invalid\n");


	return 0;
}