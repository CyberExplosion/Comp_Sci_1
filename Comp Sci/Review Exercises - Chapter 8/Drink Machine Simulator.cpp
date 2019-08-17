#include <iostream>
#include <iomanip>
using namespace std;

struct DrinksInfo {
	string name;
	double price;
	int quanity;
};

class DrinkMachine {
private:
	DrinksInfo drinks[5];
	double inputMoney(double,DrinksInfo);
	void dailyReport();
public:
	DrinkMachine();
	~DrinkMachine() {
		dailyReport();
	}
	void displayChoices();
	double buyDrink(double, int);
};

int main() {
	DrinkMachine machine1;
	int choice;
	char ch;
	double money;

	do {
		machine1.displayChoices();
		cout << "Put in your money: $";
		cin >> money;
		cout << "Enter you choice of drinks 1-5: ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << machine1.buyDrink(money, 0) << endl;
			break;
		case 2:
			cout << machine1.buyDrink(money, 1) << endl;
			break;
		case 3:
			cout << machine1.buyDrink(money, 2) << endl;
			break;
		case 4:
			cout << machine1.buyDrink(money, 3) << endl;
			break;
		case 5:
			cout << machine1.buyDrink(money, 4) << endl;
			break;
		default:
			cout << "Out of range\n";
			break;
		}
		cout << "Do you want to buy another beverage? (Y/N) ";
		cin >> ch;
	} while (toupper(ch) == 'Y');

	return 0;
}

double DrinkMachine::inputMoney(double money, DrinksInfo drink) {
	if (money <= 0) {
		cout << "Money cannot be negative\n";
		return 0;
	}
	else {
		if (money < drink.price) {
			cout << "You don't have enough money for this product\n";
			return money;
		}
	}
	return money;
}

void DrinkMachine::dailyReport() {
	double total = 0;
	cout << "------------------------------------------\n";
	cout << right;
	cout << setw(25) << "REPORT \n";
	cout << left;
	cout << setw(30) << "Name:" <<  "Remain:\n";
	cout << "==========================================\n";
	for (int i = 0; i < 5; i++) {
		cout << setw(30) << drinks[i].name <<  drinks[i].quanity << endl;
		total += drinks[i].price * (20 - drinks[i].quanity);
	}
	cout << endl;
	cout << "The total money collected: $" << total << endl;
}

DrinkMachine::DrinkMachine() {
	drinks[0].name = "Cola";
	drinks[0].price = 1.0;
	drinks[0].quanity = 20;
	drinks[1].name = "Root beer";
	drinks[1].price = 1.0;
	drinks[1].quanity = 20;
	drinks[2].name = "Orange soda";
	drinks[2].price = 1.0;
	drinks[2].quanity = 20;
	drinks[3].name = "Grape soda";
	drinks[3].price = 1.0;
	drinks[3].quanity = 20;
	drinks[4].name = "Bottled water";
	drinks[4].price = 1.5;
	drinks[4].quanity = 20;
}

void DrinkMachine::displayChoices() {
	cout << left;
	cout << setw(20) << "Drink Name" << setw(20)  << "Cost" << "Number in Machine\n";
	cout << "-------------------------------------------------------------\n";
	cout << showpoint << fixed << setprecision(2);
	for (int i = 0; i < 5; i++) {
		cout << setw(20) << drinks[i].name << setw(20) << drinks[i].price << drinks[i].quanity << endl;
	}
	cout << "=============================================================\n";
}

double DrinkMachine::buyDrink(double money_input, int drink_choice) {
	double money = inputMoney(money_input, drinks[drink_choice]);
	char choice;

	if (money >= drinks[drink_choice].price) {
		cout << "Do you want to make the purchase? (Y/N) ";
		cin >> choice;
		if (toupper(choice) == 'Y') {
			if (drinks[drink_choice].quanity <= 0) {
				cout << "Sold out\n";
				return money;
			}
			else {
				if (money != 0) {
					drinks[drink_choice].quanity--;
					cout << "Here is your beverage\n";
					cout << "Change: $";
					return money - drinks[drink_choice].price;
				}
				//else {
				//	cout << "Invalid amount of money inputed\n";
				//}
			}
		}
		//Return all them money back
		else return money;
	}
	else {
		return money;
	}
}
