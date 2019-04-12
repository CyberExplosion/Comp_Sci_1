#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main_done8() {
	int first_num,
		second_num,
		answer,
		input;

	srand(time(0));
	first_num = rand() % 50 + 10;
	second_num = rand() % 50 + 10;
	answer = first_num + second_num;
	
	cout << setw(4) << first_num << endl
		<< "+ " << second_num << endl
		<< setw(4) << "--" << endl;

	cout << "  ";
	cin >> input;
	if (input == answer) {
		cout << "The answer is correct, Congrats!!" << endl;
	}
	else {
		cout << "The answer is incorrect. It should be " << answer << endl;
	}

	return 0;
}