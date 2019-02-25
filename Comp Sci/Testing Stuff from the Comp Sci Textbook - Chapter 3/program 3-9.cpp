// Represent overflow and underflow
#include <iostream>
using namespace std;

int main_done9() {
	//Set int_var to the max a short int can hold
	short int_var = 32767;

	//Set float_var to a number too small to fit in a float
	float float_var = 3.0e-47;
	cout << "Original value of int_var: " << int_var << endl;
	
	//add 1 to int_var to make it Overflow
	int_var = int_var + 1;
	cout << "int_var after overflow " << int_var << endl;
	// subtract 1 from int_var to make if overflow again
	int_var = int_var - 2;
	cout << "int_var after the 2nd overflow: " << int_var << endl;
	cout << "Value of very tiny float_var: " << float_var << endl;
	return 0;
}