#include <iostream>
#include <iomanip>
using namespace std;

const double PRICE_PER_CUBIC_YD = 22.00;

int main() {
	double square_feet;
	int depth;
	double cubic_feet,
		cubic_yards,
		total_price;

	cout << "Number of square feet to be covered with mulch: ";
	cin >> square_feet;
	cout << "Number of inches deep: "
		;
	cin >> depth;

	cubic_feet = square_feet * (depth / 12.0);
	cubic_yards = cubic_feet / 27;
	total_price = cubic_yards * PRICE_PER_CUBIC_YD;

	cout << "\nNumber of cubic yards needed: " << cubic_yards << endl;
	cout << fixed << showpoint << setprecision(2)
		<< "Price per cubic yard: $" << setw(7)
		<< PRICE_PER_CUBIC_YD << endl
		<< "Total price:          $" << setw(7)
		<< total_price << endl << endl;

	return 0;
}