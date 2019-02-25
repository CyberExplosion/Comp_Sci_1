#include <iostream>
#include <string>
using namespace std;

int main_done22() {
	char ch;

	cout << "This program has paused. Press Enter key to continue.";
	cin.get(ch);
	cout << "It has paused a second time. Please press Enter again.";
	ch = cin.get();
	cout << "It has paused a third time. Please press Enter again.";
	cin.get();
	cout << "Thank you!\n";

	return 0;
}