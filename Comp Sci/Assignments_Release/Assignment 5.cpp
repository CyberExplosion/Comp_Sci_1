//Khoi Nguyen
//CS 1, Section #0109
//Assignment #1
//A program that shows the user the invoice of customers purchases after they enter their purchase information

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	/*Pseudo Code
	Input:
		Number of oranges purchase
		Number of apples purchase
		Number of bananas purchase
	Processing:
		orange price = 0.90
		apples price = 0.65
		bananas price = .70
		total price = (orange price * orange number) + (apples price * apples number) + (bananas price * bananas number)
	Output:
		Like example invoice
end
	*/
	int orange_amount,
		apple_amount,
		banana_amount;
	const double ORANGE_PRICE = .90,
		APPLE_PRICE = .65,
		BANANA_PRICE = .70;
	double total = 0,
		total_orange,
		total_apple,
		total_banana;

	cout << "Welcome to Bob's Fruits Grocery\n\n";
	cout << "How many apples would you like to purchase?\n";
	cin >> apple_amount;
	cout << endl;
	cout << "How many bananas would you like to purchase?\n";
	cin >> banana_amount;
	cout << endl;
	cout << "How many oranges would you like to purchase?\n";
	cin >> orange_amount;
	cout << endl;

	total_orange = orange_amount * ORANGE_PRICE;
	total_apple = apple_amount * APPLE_PRICE;
	total_banana = banana_amount * BANANA_PRICE;
	total = total_apple + total_orange + total_banana;

	cout << "Bob's Fruits Grocery Invoice\n"
		<< "----------------------------\n"
		<< showpoint << fixed << setprecision(2);
	cout << setw(4) << apple_amount << " Apples" << setw(5) << "@ " << APPLE_PRICE << " each" << setw(4) << "=" << " $ " << setw(7) << total_apple << endl
		<< setw(4) << banana_amount << " Bananas" << setw(4) << "@ " << BANANA_PRICE << " each" << setw(4) << "=" << " $ " << setw(7) << total_banana << endl
		<< setw(4) << orange_amount << " Oranges" << setw(4) << "@ " << ORANGE_PRICE << " each" << setw(4) << "=" << " $ " << setw(7) << total_orange << endl
		<< setw(48) << "-----------------" << endl
		<< setw(32) << "TOTAL = $ " << setw(7) << total << endl;

	return 0;
}