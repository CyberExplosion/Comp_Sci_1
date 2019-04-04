#include <iostream>
#include <string>
using namespace std;

int main_done28() {
	string first,
		second;
	string book1,
		book2;

	cout << "Enter the title of book 1: ";
	getline(cin, book1);
	cout << "Enter the title of book 2: ";
	getline(cin, book2);

	if (book1 > book2) {
		first = book2;
		second = book1;
	}
	else {
		first = book1;
		second = book2;
	}

	cout << "Book in order: " << first << endl << second << endl;

	return 0;
}