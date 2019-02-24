#include <iostream>
using namespace std;

int main_done21() {
	/*Pseudo Code
	Input: 
		Weeks left until Christmas
	Processing:
		Weeks x 7 days = time left
	Output:
		Time left until christmas = time left
	*/
	int weeks,
		days;

	cout << "Weeks left until Christmas: ";
	cin >> weeks;
	days = weeks * 7;
	cout << days << " days left until Christmas.\n";
	return 0;
}