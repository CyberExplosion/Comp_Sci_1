//Khoi Nguyen
//CS 1, Section #0109
//Assignment #1
//A program that shows the user the invoice of customers purchases after they enter their purchase information

#include <iostream>
#include <iomanip>
using namespace std;

int main_done5() {
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

	cout << "How many oranges would you like to purchase?\n";
	cin >> orange_amount;
	cout << "How many apples would you like to purchase?\n";
	cin >> apple_amount;
	cout << "How many bananas would you like to purchase?\n";
	cin >> banana_amount;
	cout << endl;

	total_orange = orange_amount * ORANGE_PRICE;
	total_apple = apple_amount * APPLE_PRICE;
	total_banana = banana_amount * BANANA_PRICE;
	total = total_apple + total_orange + total_banana;

	cout << "BOB'S FRUITS GROCERY INVOICE\n"
		<< "----------------------------\n"
		<< showpoint << fixed << setprecision(2)
		<< apple_amount << " Apples @ " << APPLE_PRICE << " each  = " << "$ " << total_apple << endl
		<< orange_amount << " Oranges@ " << ORANGE_PRICE << " each  = " << "$ " << total_orange << endl
		<< banana_amount << " Bananas@ " << BANANA_PRICE << " each  = " << "$ " << total_banana << endl
		<< "----------------------------\n"
		<< setw(27) << "TOTAL = $ " << total << endl;

	return 0;
}