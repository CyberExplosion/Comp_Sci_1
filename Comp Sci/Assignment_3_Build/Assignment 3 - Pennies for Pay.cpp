//Khoi Nguyen
//CS1, Section #0109
//Assignment #3, Problem 1
//Write a program that calculates how much a person would earn over a period of time 



#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main_done1() {
	/*Pseudo Code
	Input:
		numbers of days
		(not lower than 1 and max is 50)
	Processing:
		day ^ number of days
		 = 1 - 1
		 2 - 2
		 3 - 4
		 4 - 8
		 5 - 16
		 6 - 32

		 1 dollar = 100 pennies
		 101 pennies = 1 dollar 1 penny = $1.01
	Output:
		how much salary was each day
		total pay at the end of the period
	*/
	int days,
		dollar;

	double salary = 0;
	cout << "Enter the number of days someone has worked: ";
	cin >> days;
	
	//Condition to when the number of days is accepted
	while (days < 1) {
		cout << "You entered a number of days less than 1. Please enter the number of days again: ";
		cin >> days;
	}
	while (days > 50) {
		cout << "You entered a number of days more than 50. Please enter the number of days again: ";
		cin >> days;
	}
	cout << endl;

	//Prompt
	cout << "Days Number \t\t Pennies Earned for the Day" << endl;
	cout << "---------------------------------------------------\n";
	
	//Loop to put out days number and the pennies
	for (int i = 0; i < days; i++) {
		cout << setw(11) << i + 1 << " \t\t " << setw(26) << pow(2, i) << endl;
		
		//Sum of the amount of pennies receive
		salary += pow(2, i);
	}

	//Convert the salary into dollar and into the remaining pennies
	salary /= 100.00;
	
	//Prompt the amount of salary earned in  dollar and pennies
	cout << showpoint << fixed << setprecision(2);
	cout << "The amount of salary this person has earned over " << days << " days is "
		<< "$" << salary << endl;

	return 0;
}