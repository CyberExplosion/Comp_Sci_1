#include <iostream>
using namespace std;

int main_done4() {
	/*Pseudo Code
	Input:
		replacement cost of a building
	Processing:
		amount of insurance
			\
			80% of cost of replacement = (80/100) x replacement cost
	Output:
		insurance should be purchased
end
	*/
	double replacement_cost;

	cout << "Enter the replacement cost of a building: $";
	cin >> replacement_cost;

	replacement_cost *= 80.0 / 100;

	cout << "The minimal amount of insurance that should be purchased for the property is: $" << replacement_cost << endl;

	return 0;
}