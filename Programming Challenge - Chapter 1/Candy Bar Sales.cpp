/*Pseudo Code
Input:
	Disp: Number of candy bars sold
	Input: candy
	Disp: Price for each bar
	Input: price
Processing:
	price = price*candy
Output:
	Disp: Total amount earned "price"
end
-- Variable Used: 
	int candy;
	double price;
*/

#include <iostream>
using namespace std;

int done1() {
	int candy;
	double price;
	//Input
	cout << "Number of candy bars sold: ";
	cin >> candy;
	cout << "Price for each bar ($): ";
	cin >> price;
		//Processing
		price *= candy;
	//Output
	cout << "------------------------------" << endl;
	cout << "Total amount earned: " << price << endl;
	return 0;
}