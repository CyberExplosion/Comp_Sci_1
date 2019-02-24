#include <iostream>
using namespace std;

int main_done22() {
	/*Pseudo Code
	Input
		Number of eggs collects on a day
	Processing:
		carton of egg = number of egg / 12
	Output:
		Carton of egg is = carton of egg
	*/
	int eggs,
		cartons;

	cout << "Number of eggs collected on a given day: ";
	cin >> eggs;
	cartons = eggs / 12;
	cout << cartons << " full carton of egg can be made.\n";
	return 0;
}