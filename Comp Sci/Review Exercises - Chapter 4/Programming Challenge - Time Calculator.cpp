#include <iostream>
using namespace std;

int main_done7() {
	int second;

	cout << "Enter a number of seconds: ";
	cin >> second;

	if (second>=86400) {
		second /= 86400;
		cout << "The number of days are: " << second << endl;
	}
	else if (second < 86400 && second >= 3600) {
		second /= 3600;
		cout << "The number of hours are: " << second << endl;
	}
	else if (second < 3600 && second >= 60) {
		second /= 60;
		cout << "The number of minutes are: " << second << endl;
	}

	return 0;
}