#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main_done30() {
	//3 random number
	string space;

	space.assign(5, ' ');
	cout << rand() << space;
	cout << rand() << space;
	cout << rand() << endl;

	return 0;
}