#include <iostream>
using namespace std;

int main() {
	int length, width, area;

	cout << "This program calculates the area of a rectangle.\n";
	cin >> length;
	cout << "What is the width of the rectangle? ";
	cin >> width;

	area = length * width;
	cout << "The area of the rectangle is " << area << endl;
	return 0;
}