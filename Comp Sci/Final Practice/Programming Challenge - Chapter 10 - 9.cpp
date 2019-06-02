#include <iostream>
#include <string>
using namespace std;

struct Person {
	string name;
	struct DateofBirth {
		short int date;
		short int month;
		short int year;
	};
	DateofBirth birth;
};

int main_done9ch10() {
	const int NUM_USER = 1;
	Person user[NUM_USER];
	
	cout << "What's your name: ";
	getline(cin, user->name);
	cin.ignore(100, '\n'); cin.clear(); cin.sync();
	cout << "Please enter your date, month and year of birth: ";
	cin >> user->birth.date;
	cin >> user->birth.month;
	do {
		cin >> user->birth.year;
		if (user->birth.year < 1800 || user->birth.year > 2099) {
			cout << "The only qualified birth year are between 1800 and 2099, please try again\n";
		}
	} while (user->birth.year < 1800 || user->birth.year > 2099);
	cout << endl;
	cout << "Hello " << user->name << ", you are " << 2019 - user->birth.year << " years old\n.";
	return 0;
}