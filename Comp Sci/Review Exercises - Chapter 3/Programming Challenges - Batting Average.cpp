#include <iostream>
#include <iomanip>
using namespace std;

int main_done5() {
	/*Pseudo Code
	Input:
		number of times the player was at bat
		number of hits earned
	Processing:
		average = hits earned / numbers at bat
	Output:
		the batting average
end
	*/
	double bat_number,
		hit_earned;
	double average;

	cout << "Enter the number of times the player was at bat: ";
	cin >> bat_number;
	cout << "Enter the number of hits earned: ";
	cin >> hit_earned;

	average = hit_earned / bat_number;

	cout << showpoint << fixed << setprecision(4);
	cout << "The batting average is: " << average << endl;

	return 0;
}