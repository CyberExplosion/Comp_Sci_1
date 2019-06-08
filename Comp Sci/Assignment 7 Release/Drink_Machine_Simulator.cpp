//Khoi Nguyen
//CS1, Section #0109
//Assignment 7, Problem #1
//Write a program that simulates a soft drink machine.
//It gives you a selection display for drinks and cost, how many of each drink there is,
//prompt user for money input, update quantity list after a drink is purchased, and show you the total revenue,
//after you quit the program.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Drink {
	string name;
	double cost;
	int amount = 20;
};

double checkingMoney(Drink drink_array[], int drink_num);
int Selection_menu(Drink[]);
void Change(Drink item[], int drink_num, double user_pay);
void selectionSortResult(Drink[], int);

int main() {
	Drink drink[5];
	// Arrays of structure 
	drink[0] = { "Coca", 0.65 };
	drink[1] = { "Root Beer", 0.70 };
	drink[2] = { "Grape Soda", 0.75 };
	drink[3] = { "Lemon-Lime", 0.85 };
	drink[4] = { "Water", 0.90 };
	// Original Drinks amount, considering all drinks start with the same amount
	const int ORIGINAL_AMOUNT = drink->amount;
	bool exit = false;
	bool *ptr_exit = &exit;
	double total_revenue = 0;
	do {
		switch (Selection_menu(drink)) {
		case 1:
			if (drink[0].amount > 0) {
				Change(drink, 0, checkingMoney(drink, 0));
			}
			else cout << "SOLD OUT\n";
			break;
		case 2:
			if (drink[1].amount > 0) {
				Change(drink, 1, checkingMoney(drink, 1));
			}
			else cout << "SOLD OUT\n";
			break;
		case 3:
			if (drink[2].amount > 0) {
				Change(drink, 2, checkingMoney(drink, 2));
			}
			else cout << "SOLD OUT\n";
			break;
		case 4:
			if (drink[3].amount > 0) {
				Change(drink, 3, checkingMoney(drink, 3));
			}
			else cout << "SOLD OUT\n";
			break;
		case 5:
			if (drink[4].amount > 0) {
				Change(drink, 4, checkingMoney(drink, 4));
			}
			else cout << "SOLD OUT\n";
			break;
		case 6:
			// Final function that calculates drink revenue and what left in the machine
			for (int n = 0; n < 5; n++) {
				total_revenue += ( ORIGINAL_AMOUNT - drink[n].amount) * drink[n].cost;
			}
			cout << endl;
			cout << "Total Revenue: $" << total_revenue << endl << endl; // << variable sum of drinks $
			selectionSortResult(drink, 5);
			exit = true;
			break;
		default:
			cout << "Invalid Input\n";
			break;
		}

	} while (!exit);
	// User's Drinks Selection

	return 0;
}
/**********************
FUNCTION NAME: checkingMoney
INPUT: user's payment and the corresponding object of Drink structure
OUTPUT: a boolean value
DESCRIPTION: The function will compare the payment the user make with the amount of money require to purchase the drinks they want. The function will return true for sufficient payment and false for insufficient payment
***********************/
double checkingMoney(Drink drink_array[], int drink_num) {
	double payment;
	do {
		cout << "Enter the amount of money you want to insert: ";
		cin >> payment;
		if (payment < 0 || payment > 1) {
			cout << "This machine cannot accept values less than 0 or greater than $1.00\n";
		}
	} while (payment < 0 || payment > 1);
	if (payment < drink_array[drink_num].cost) {
		cout << "Insufficient Funds\n";
		return -1;
	}
	else {
		drink_array[drink_num].amount--;
		return payment;
	}
}

/************************************************
Function Name: Selection_menu
Input: integer
Output: integer
 Description: Shows the selection menu along with option to select what drink you want with an integer.
************************************************/
int Selection_menu(Drink item[]) {
	int choice;
	cout << showpoint << fixed << setprecision(2);
	cout << endl;
	cout << "1) " << item[0].name << setw(13) << "$" << item[0].cost << setw(8) << "Qty:" << setw(3) << item[0].amount << endl;
	cout << "2) " << item[1].name << setw(8) << "$" << item[1].cost << setw(8) << "Qty:" << setw(3) << item[1].amount << endl;
	cout << "3) " << item[2].name << setw(7) << "$" << item[2].cost << setw(8) << "Qty:" << setw(3) << item[2].amount << endl;
	cout << "4) " << item[3].name << setw(7) << "$" << item[3].cost << setw(8) << "Qty:" << setw(3) << item[3].amount << endl;
	cout << "5) " << item[4].name << setw(12) << "$" << item[4].cost	<< setw(8) << "Qty:" << setw(3) << item[4].amount << endl;
	cout << endl;

	cout << "Select a drink (1-5) or enter 6 to quit:" << endl;
	cin >> choice;

	return choice;
}

/***********************
FUNCTION NAME: Change
INPUT: struct array, array size, <double> money pay
OUTPUT: nothing
DESCRIPTION: The function use the money pay to compare with the price of the chosen drink. Then return the amount of change given back to the payer if the payment is suffice. 
***********************/
void Change(Drink item[], int drink_num, double user_pay) {
	double change = 0;
	if (user_pay < 0) {
	}
	else if (user_pay > 0) {
		change = user_pay - item[drink_num].cost;
		cout << "Change: $" << change << endl;
	}
	return;
}

/**********************
FUCNTION NAME: selectionSortResult
INPUT: struct array, size of array
OUTPUT: nothing
DESCRIPTOIN: The function compare the amount of drinks left of each type, then sort the array in small to big order of the drinks amount. The function then display the array into the screen.
**********************/
void selectionSortResult(Drink item[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (item[j].amount < item[i].amount) {
				swap(item[i], item[i]);
			}
		}
	}
	cout << "Drink" << setw(20) << "Numbers Left" << endl;
	cout << endl;
	for (int k = 0; k < size; k++) {
		cout << left << setw(20) << item[k].name << item[k].amount << endl;
	}
}
