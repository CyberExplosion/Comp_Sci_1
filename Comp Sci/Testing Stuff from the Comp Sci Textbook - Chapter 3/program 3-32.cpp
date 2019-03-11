#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main_done32() {
	unsigned seed;
	string space;
	//Use the time function to get a "seed" value for srand
	seed = time(0);
	srand(seed);
	//Now generate and print three random numbers
	space.assign(5, ' ');
	cout << rand() << space;
	cout << rand() << space;
	cout << rand() << endl;

	return 0;
}