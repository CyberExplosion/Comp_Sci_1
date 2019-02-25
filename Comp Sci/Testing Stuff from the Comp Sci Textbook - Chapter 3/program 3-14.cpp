#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main_done14() {
	int int_value = 3928;
	double double_value = 91.5;
	string string_value = "Jill Q. Jones";

	cout << "(" << setw(5) << int_value << ")" << endl;
	cout << "(" << setw(8) << double_value << ")" << endl;
	cout << "(" << setw(16) << string_value << ")" << endl;

	return 0;
}