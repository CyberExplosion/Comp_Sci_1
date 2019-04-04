#include <iostream>
using namespace std;

int main_done4() {
	double length,
		width,
		area1,
		area2;

	cout << "Enter the length and width of the 1st rectangle: ";
	cin >> length >> width;

	area1 = length * width;

	cout << "Enter the length and width of the 2nd rectangle: ";
	cin >> length >> width;

	area2 = length * width;

	cout << (area1 > area2 ? "The 1st rectangle has the greater area\n" : "The 2nd area has the greater area\n");

	return 0;
}