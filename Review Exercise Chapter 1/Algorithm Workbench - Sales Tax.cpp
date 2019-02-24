/*
High-level Pseudo Code:
	Ask retail price of the item being purschased
	Ask the sales tax rate
	Calculate the total price
	Display the sales tax for purschase and total of the sale
Detailed Pseudo Code:
	Input:
		Disp: Retail price of the item
		Input: price
		Disp: Sales tax rate
		Input: tax << Disp: %
	Processing:
		tax = (tax/100) * price
		price += tax
	Output: 
		Sales Tax: "tax"
		Total of the sale: "price"
end
-- Variable used: double price, tax;
*/

#include <iostream>
using namespace std;

int done3() {
	double price, tax;
	//Input
	cout << "Retail price of the item: ";
	cin >> price;
	cout << "Sale tax rate (%): ";
	cin >> tax;
		//Processing
		tax *= price / 100;
		price += tax;
		cout << endl;
	//Output
		cout << "Sale tax: " << tax << endl;
		cout << "Total of the sale: " << price << endl;
return 0;
}