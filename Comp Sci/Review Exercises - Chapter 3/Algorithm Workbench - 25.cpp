#include <iostream>
#include <cmath>
using namespace std;

int main_done25() {
	/*Pseudo Code
	Input:
		amount of 14-inch pizza sold
		amount of 12-inch pizza sold
	Processing:
		how much money earned per square inch of pizza sold
			
		-	12-inch diameter
				\
				price for 1 inch square of 12-inch pizza
					\
					pizza area / 12-inch price (14.95)
						\
						pizza area = r^2*pi = (12/2)^2 * pi
			
		-	14-inch diameter
				\	
				price for 1 inch square of 14-inch pizza
					\
					pizza area / 14-inch price (17.95)
						\
						pizza area = r^2*pi = (14/2)^2 * pi
	Output:
		price per inch for 12-inch
		price per inch for 14-inch
end
	*/
	int amount_12_inch_sold,
		amount_14_inch_sold;
	double area_12_inch,
		area_14_inch,
		price_per_inch_12_inch,
		price_per_inch_14_inch;
	double const PI = 3.14159,
		PRICE_12_INCH = 14.95,
		PRICE_14_INCH = 17.95;

	cout << "Enter the amount of 12-inch pizza sold: ";
	cin >> amount_12_inch_sold;
	cout << "Enter the amount of 14-inch pizza sold: ";
	cin >> amount_14_inch_sold;

	//12 inch pizza
	area_12_inch = pow((12.0 / 2), 2.0) * PI;
	price_per_inch_12_inch = area_12_inch / PRICE_12_INCH;

	//14 inch pizza
	area_14_inch = pow((14.0 / 2), 2.0) * PI;
	price_per_inch_14_inch = area_14_inch / PRICE_14_INCH;

	cout << "Amount earned from selling 12-inch pizza, per inch are: $" << price_per_inch_12_inch << endl;
	cout << "Amount earned from selling 14-inch pizza, per inch are: $" << price_per_inch_14_inch << endl;


	return 0;
}