#include <iostream>
#include <cmath>
using namespace std;

double hyp(double, double);

int main_done1() {
	double a = 6.0;
	double c, b = 7.0;
	c = hyp(a, b);
	cout << "C = " << c << endl;
	return 0;

} 


/* Should print 5 for c */
double hyp(double side1, double side2) {
	double hypotenuse;

	hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

	return hypotenuse;
}