#include <iostream>
using namespace std;

int main_done_int_data_type(){
	//short int -- range: -32,768 to +32,767
	short a = 32767;
	cout << "This is short: " << a << endl;
	a += 1;
	cout << "This is short after oversteps its' size " << a << endl;
	//long int = int, they have equal size, which is -2,147,483,648 to 2,147,483,647
	//however, long long int = -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
	long long b = 2147483647 + 1;
	cout << "However, C++ always store every data types of integer as interger. It doesn't matter if your variable is defined to able to store a \'long long\' data type, it stills store as normal integer, which inturn will makes the value oversteps the size of normal \'integer\' data type. Thus making it in accurate. Take a look: \t" << b << endl;
	cout << "\n\n Look at that, it results in an inaccurate number, and we thought the 'long long' type is supposse to have wider range\n.";
	//Double L = Long long
	b = 2147483647 + 1LL;
	cout << "In fact it does, however, we need to also do the calculation on the right size of the assigning operator also to force C++ to store the value as an 'long long integer' data type and not just normal integer: \t";
	cout << b;
	short c = 32767 + 1;
	cout << "\n" << c << endl;
	return 0;
}