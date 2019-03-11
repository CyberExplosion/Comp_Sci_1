//Khoi Nguyen
//CS 1, Section #0109
//Assignment #2, Problem: Salary with Overtime
//The program takes user input of hours worked and the basic rate then calculate the appropriate salary earned and display as output

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	/*Pseudo Code
	Input:
		enter the number of hours worked
		basic rate
	Processing:
		if
			\
			number of hours worked less than or equal to 40
				\ 
				receive basic rate
		else
			\
			first 40 hours at basic rate
			remaining hours at 1.5 x basic rate
	Output:
		Display the salary earned
end
*/
	double hours_worked,
		basic_rate,
		salary;

	cout << "Salary with Overtime Program\n\n"
		<< "Please enter the number of hours worked: ";
	cin >> hours_worked;
	cout << "Please enter the hourly rate: ";
	cin >> basic_rate;

	if (hours_worked <= 40) {
		salary = hours_worked * basic_rate;
	}
	else {
		salary = (40 * basic_rate) + (hours_worked - 40) * (basic_rate*1.5);
	}
	
	cout << showpoint << fixed << setprecision(2);
	cout << "Your salary of the week is: $" << salary << endl;

	return 0;
}