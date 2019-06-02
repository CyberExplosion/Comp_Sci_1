#include <string>
#include <iostream>
using namespace std;

int main_done10ch12() {
	string password;
	bool valid = true;
	int num_digit = 0;
	do {
		bool upper_flag = false,
			lower_flag = false;
		cout << "Please enter your chosen password: ";
		getline(cin, password);
		// Flag
		valid = true;
		if (password.length() < 6) {
			cout << "Your password needs to be at least 6 character long.\n";
			valid = false;
		}
		for (int i = 0; i < password.length(); i++) {
			if (isupper(password[i])) {
				upper_flag = true;
			}
			if (islower(password[i])) {
				lower_flag = true;
			}

			if (isdigit(password[i])) {
				num_digit++;
			}
		}
		if ((!upper_flag) || (!lower_flag)) {
			cout << "There needs to be at least one uppercase letter and one lowercase letter.\n";
			valid = false;
		}
		if (num_digit < 1) {
			cout << "The password needs to have at least 1 digit.\n";
			valid = false;
		}
	} while (!valid);
	cout << "Your password has been verified, congratz.\n";
	return 0;
}