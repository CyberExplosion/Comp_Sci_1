#include <iostream>
using namespace std;

int main_done21() {
	int total_seconds = 125, // Number of seconds to be converted
		minutes,
		seconds;

	//Calculate the number of minutes
	minutes = total_seconds / 60;
	//Calculate the remaining seconds
	seconds = total_seconds % 60;
	//Display the results
	cout << total_seconds << " second is equivalent to ";
	cout << minutes << " minutes and " << seconds << " seconds.\n";
	return 0;
}