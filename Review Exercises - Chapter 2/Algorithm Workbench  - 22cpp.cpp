#include <iostream>
using namespace std;

int main_done23() {
	/*Pseudo Code
	Input:
		speed traveling 
		time travelling
	Processing:
		distance = speed * time
	Output:
		distance traveled
	*/
	float speed,
		time,
		distance;
	cout << "Speed: ";
	cin >> speed;
	cout << "Time: ";
	cin >> time;
	distance = speed * time;
	cout << "Distance traveled is: " << distance << endl;
	return 0;
}