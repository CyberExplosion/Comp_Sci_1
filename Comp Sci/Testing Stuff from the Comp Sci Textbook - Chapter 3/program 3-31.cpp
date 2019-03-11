#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main_done31() {
	unsigned seed;
	string space;
	//Get the seed value from the user
	cout << "Enter a seed value: ";
	cin >> seed;
	//Set the random generator seed before calling rand()
	srand(seed);
	//Generate and print three random numbers
	space.assign(5, ' ');
	cout << rand() << space;
	cout << rand() << space;
	cout << rand() << endl;

	return 0;
}