#include <iostream>
#include <cmath>
using namespace std;

int main_done11c() {
	int choice;
	
	cout << "Geometry Calculator\n\n";
	cout << "\t1. Calculate the Area of a Circle\n"
		<< "\t2. Calculate the Area of a Rectangle\n"
		<< "\t3. Calculate the Area of a Triangle\n"
		<< "\t4. Quit\n";
	cin >> choice;
	cout << endl;

	switch (choice){
		double area,
			height,
			width,
			radius,
			length,
			base;
	case 1:
		cout << "Enter the radius of the circle: ";
		cin >> radius;
		if (radius > 0) {
			area = pow(radius, 2)*3.14159;
			cout << "\nThe area of the circle is " << area << endl;
		}
		else cout << "Radius cannot be a negative number\n";

		break;
	case 2:
		cout << "Enter the length and width of the rectangle: ";
		cin >> length >> width;
		if (length > 0) {
			if (width > 0) {
				area = length * width;
				cout << "\nThe area of the rectangle is " << area << endl;
			}
			else cout << "Width cannot be a negative number.\n";
		}
		else cout << "Length cannot be a negative number.\n";

		break;
	case 3:
		cout << "Enter the base length and the height of the triangle: ";
		cin >> base >> height;
		if (base > 0) {
			if (height > 0) {
				area = (base / 2.0)*height;
				cout << "\nThe area of the triangle is " << area << endl;
			}
			else cout << "Height cannot be a negative number.\n";
		}
		else cout << "Base of the triangle cannot be a negative number.\n";

		break;
	case 4:
		cout << "The program will end\n";
		break;
	default:
		cout << "Invalid input\n";
	}

	return 0;
}