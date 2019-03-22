//Khoi Nguyen
//CS 1, Section #0109
//Assignment #2, Problem: Pet Insurance Program
//A program that prints the insurance fee to pay for a pet according to the rules

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	/*Pseudo Code
	Input:
		character for pet type
		yes/no prompt
		* Should be able to enter both upper and lower case
	Processing:
		Conditional statements to determine pre-chosen service fees
		* Any error in input should generate "Invalid data - no fee calculated"
	Output:
		Type of animal (full name of animal)
		insurance fee
end	
	*/
	char animal_first_letter,
		answer;

	cout << "Pet Insurance Program\n\n"
		<< "Please enter the first letter of the type of pet you would like to insure: \n"
		<< setw(16) << "Dog\n"
		<< setw(16) <<"Cat\n"
		<< setw(17) << "Bird\n"
		<< setw(20) << "Reptile\n"
		<< "Animal Type: ";
	cin >> animal_first_letter;
	cin.ignore(100,'\n');
	cout << endl;
	
	switch (animal_first_letter) {
	case 'd':
	case 'D':
		cout << "Has the animal been neutered? ";
		cin >> answer;
		cin.ignore(100, '\n');
		cout << endl;
		switch (answer) {
		case 'y':
		case 'Y':
			cout << "The fee to insure your neutered Dog is $50\n" << endl;
			break;
		case 'n':
		case 'N':
			cout << "The fee to insure your non-neutered Dog is $80\n" << endl;
			break;
		default:
			cout << "Invalid data - no fee calculated.\n" << endl;
		}
		break;
	case 'c':
	case 'C':
		cout << "Has the animal been neutered? ";
		cin >> answer;
		cin.ignore(100, '\n');
		cout << endl;
		switch (answer) {
		case 'y':
		case 'Y':
			cout << "The fee to insure your spayed Cat is $40\n" << endl;
			break;
		case 'n':
		case 'N':
			cout << "The fee to insure your non-spayed Cat is $60\n" << endl;
			break;
		default:
			cout << "Invalid data - no fee calculated.\n" << endl;
		}
		break;
	case 'b':
	case 'B':
		cout << "There is no cost to insure your Bird\n";
		break;
	case 'r':
	case 'R':
		cout << "There is no cost to insure your Reptile\n";
		break;
	default:
		cout << "Invalid data - no fee calculated\n";
	}

	return 0;
}