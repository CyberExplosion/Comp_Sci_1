#include <iostream>
using namespace std;

int main_done6() {
	int gallon = 20;
	float miles_per_gallon_town = 23.5,
		miles_per_gallon_highway = 28.9;

	cout << "Distance car can travel on one tank of gas when driven in town: " << gallon * miles_per_gallon_town << " miles.\n";
	cout << "Distance car can travel on one tank of gas when driven on the highway: " << gallon * miles_per_gallon_highway << " miles.\n";
	return 0;
}