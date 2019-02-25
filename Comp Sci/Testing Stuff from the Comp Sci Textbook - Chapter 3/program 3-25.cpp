#include <iostream>
using namespace std;

int main_done25() {
	const int SIZE = 12;
	char name1[SIZE],
		name2[SIZE];

	strcpy_s(name1, "Sebastian");
	cout << "name1 now holds the string " << name1 << endl;
	strcpy_s(name2, name1);
	cout << "name2 now also holds the string " << name2 << endl;

	return 0; 
}