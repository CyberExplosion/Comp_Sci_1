/*Pseudo Code
Input:
	Disp: Number of baseball purchase
	Input baseball
	Disp: Cost of each baseball
	Input price
Processing:
	Price is equal to the number of baseball purchase times the price for each
	price *= baseball
Output: 
	Total amount spent on purchasing baseballs: "price"
end
-- Variable Used:
	int baseball
	double price
*/

#include <iostream>
using namespace std;

int done2() {
	int baseball;
	double price;
	//Input
	cout << "Number of baseballs purchased: ";
	cin >> baseball;
	cout << "Cost of each baseball ($): ";
	cin >> price;
		//Processing
		price *= baseball;
	//Output
		cout << "-----------------------------------" << endl;
	cout << "Total amount spent on purchasing baseballs ($): " << price << endl;
		return 0;
}