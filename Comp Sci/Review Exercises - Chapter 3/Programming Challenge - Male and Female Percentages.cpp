#include <iostream>
#include <iomanip>
using namespace std;

int main_done8() {
	int male_number,
		female_number;
	double percent_male,
		percent_female;

	cout << "Enter the number of males: ";
	cin >> male_number;
	cout << "Enter the number of females: ";
	cin >> female_number;

	percent_male = (male_number*100.0) / (male_number + female_number);
	percent_female = (female_number*100.0) / (female_number + male_number);

	cout << showpoint << fixed << setprecision(2)
		<< "The percentage of male students: " << percent_male << "%" << endl
		<< "The percentage of female students: " << percent_female << "%" << endl;

	return 0;
}