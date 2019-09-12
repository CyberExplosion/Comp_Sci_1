//#include <cmath>
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
////Program 8-31
//class Circle {
//private:
//	double radius;
//	int centerX, centerY;
//
//public:
//	Circle() {
//		radius = 1.0;
//		centerX = centerY = 0;
//	}
//	Circle(double r) {
//		radius = r;
//		centerX = centerY = 0;
//	}
//	Circle(double r, int x, int y) {
//		radius = r;
//		centerX = x;
//		centerY = y;
//	}
//	void setRadius(double r) {
//		radius = r;
//	}
//	int getXcoord() {
//		return centerX;
//	}
//	int getYcoord() {
//		return centerY;
//	}
//	double findArea() {
//		return 3.14 * pow(radius, 2);
//	}
//	//Modified for Challenge 11
//	double getRadius() {
//		return radius;
//	}
//};
//
//const int NUM_CIRCLES = 7;
//
//int main() {
//	Circle circle[NUM_CIRCLES];
//
//	for (int index = 0; index < NUM_CIRCLES; index++) {
//		double r;
//		cout << "Enter the radius for circle " << (index + 1) << ": ";
//		cin >> r;
//		circle[index].setRadius(r);
//	}
//
//	//Challenge 11 Part (bubble sort - ascending order of radius size)
//	bool swap_flag = false;
//	do {
//		swap_flag = false;
//		for (int i = 0; i < NUM_CIRCLES - 1; i++) {
//			if (circle[i].getRadius() > circle[i + 1].getRadius()) {
//				swap(circle[i], circle[i + 1]);
//				swap_flag = true;
//			}
//		}
//	} while (swap_flag == true);
//
//
//	cout << fixed << showpoint << setprecision(2);
//	cout << "\nHere are the areas of the " << NUM_CIRCLES
//		<< " circles.\n";
//	for (int index = 0; index < NUM_CIRCLES; index++) {
//		cout << "circle " << (index + 1) << setw(8)
//			<< circle[index].findArea() << endl;
//	}
//
//	return 0;
//}