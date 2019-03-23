#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main_done19() {
	int num1,
		num2,
		student_answer;


	string prnt;

	unsigned seed;

	srand(time(0));
	num1 = (rand() % 9) + 1;
	num2 = (rand() % 9) + 1;

	prnt.assign(10, '-');
	cout << setw(2) << num1 << endl
		<< setw(1) << "+" << num2 << endl
		<< prnt << endl;
	cin >> student_answer;

	cout << endl;
	cout << "The correct answer is: " << num1 + num2 << endl;

	return 0;
}