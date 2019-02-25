#include <iostream>
#include <string>
using namespace std;

int main_done23() {
	string first_name,
		last_name,
		full_name,
		stars;
	int num_stars;

	cout << "Please enter your first name: ";
	getline(cin, first_name);
	cout << "Please enter your last name: ";
	getline(cin, last_name);
	
	full_name = first_name + " " + last_name;
	num_stars = full_name.length(); // This wil get the total number of characters in full_name and put in num_stars that value
	stars.assign(num_stars, '*'); // Use the value in num_stars as a numbers of stars will print out '*'. Then assign that string of stars to "stars" object
	
	cout << endl;
	cout << stars << endl;
	cout << full_name << endl;
	cout << stars << endl;
	return 0;
}