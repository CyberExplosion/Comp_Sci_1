#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Drink {
	string name;
	double cost;
	int amount = 2;
}drink[5];

double checkingMoney(Drink drink_array[], int drink_num);
int Selection_menu(Drink[]);
double Change(Drink item[], int drink_num, double user_pay);
void selectionSortResult(Drink[], int);

int main() {
	// Arrays of structure 
	drink[0] = { "Coca", 0.65 };
	drink[1] = { "Root Beer", 0.70 };
	drink[2] = { "Grape Soda", 0.75 };
	drink[3] = { "Lemon-Lime", 0.85 };
	drink[4] = { "Water", 0.90 };
	double payment = 0;
	bool exit = false;
	do {
		switch (Selection_menu(drink)) {
		case 1:
			if (drink[0].amount > 0) {
				Change(drink, 1, checkingMoney(drink, 1));
			}
			else cout << "SOLD OUT\n";
			break;
		case 2:
			if (drink[1].amount > 0) {
				Change(drink, 2, checkingMoney(drink, 2));
			}
			else cout << "SOLD OUT\n";
			break;
		case 3:
			if (drink[2].amount > 0) {
				Change(drink, 3, checkingMoney(drink, 3));
			}
			else cout << "SOLD OUT\n";
			break;
		case 4:
			if (drink[3].amount > 0) {
				Change(drink, 4, checkingMoney(drink, 4));
			}
			else cout << "SOLD OUT\n";
			break;
		case 5:
			if (drink[4].amount > 0) {
				Change(drink, 5, checkingMoney(drink, 5));
			}
			else cout << "SOLD OUT\n";
			break;
		case 6:
			// Final function that calculates drink revenue and what left in the machine
			selectionSortResult(drink, 5);
			exit = true;
			break;
		default:
			cout << "Invalid Input. Try again Bietch\n";
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
	cout << "Enter the amount of money you want to insert: ";
	cin >> payment;
	if (payment < 0 || payment > 1) {
		cout << "This machine cannot accept values less than 0 or greater than $1.00\n";
		return -1;
	}
	else if (payment < drink_array[drink_num].cost) {
		cout << "Insufficient Funds\n";
		return -1;
	}
	else {
		drink_array[drink_num-1].amount--;
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

double Change(Drink item[], int drink_num, double user_pay) {
	double change = 0;
	if (user_pay < 0) {
		return 0;
	}
	else if (user_pay > 0) {
		change = user_pay - item[drink_num - 1].cost;
	}
	return change;
}

void selectionSortResult(Drink item[], int size) {
	int minimum;

	for (int i = 0; i < size - 1; i++) {
		minimum = i;
		for (int j = i + 1; j < size; j++) {
			if (item[j].amount < item[minimum].amount) {
				minimum = j;
			}
		}
		swap(item[i], item[minimum]);
	}
	cout << endl;
	cout << "Total Revenue: " << endl; // << variable sum of drinks $
	cout << endl;
	cout << "Drink" << setw(20) << "Numbers Left" << endl;
	cout << endl;
	for (int k = 0; k < size; k++) {
		cout << item[k].name << setw(20) << item[k].amount << endl;
	}
}

/*Need to make a Total Revenue function*/