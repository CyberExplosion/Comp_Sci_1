#include <iostream>
using namespace std;

int main_done17() {
	double apple;
	cout << "The size of a short integer is " << sizeof(short) << " bytes .\n";
	cout << "The size of a long integer is " << sizeof(long) << " bytes.\n";
	cout << "An apples can be eaten in " << sizeof(apple) << " bytes.\n";
	cout << "The size of a float is " << sizeof(float) << " bytes. \n";
	cout << "The size of double is " << sizeof(double) << " \t Comparing to the size of float: sizeof(double)-sizeof(float) = " << sizeof(double) - sizeof(float) << endl;
	cout << "\n Testing out new 'auto' variable type initialization, this allow you to assign the value in variable without worrying about data type the variable need to hold. For example: ";
	auto stock_code = 'D'; // This will initialize just with a "char" data type
	auto custom_num = 459L; // this will initialized with "long integer" data type
	auto integer_num = 12; // int type
	auto double_num = 12.0;// double type
	return 0;
}