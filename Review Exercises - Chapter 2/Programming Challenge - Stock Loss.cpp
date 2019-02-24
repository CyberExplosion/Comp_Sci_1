#include <iostream>
using namespace std;

int main_done15() {
	float stock_price = 35.00,
		sell_price = 31.15;
	int shares = 750;

	cout << "The total amount paid for the stock: $" << stock_price * shares << endl;
	cout << "The total amount received from selling the stock: $" << sell_price * shares << endl;
	cout << "The total amount of money she lost: $" << (stock_price*shares) - (sell_price*shares) << endl;
	return 0;
}