#include <iostream>
#include <iomanip>
using namespace std;

int main_done27() {
	const int SIZE = 5;
	char word[SIZE];

	cout << "Enter a word: ";
	cin.width(SIZE);
	cin >> word;
	cout << "You entered " << word << endl;

	return 0;
}