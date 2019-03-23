#include <iostream>
using namespace std;

int main() {
	/*Pseudo Code
	Input:
		shares purchase = 100
		price per share = 45.50
		broker commission = 2 percent x (total money paid for stock)
		sold price per share = 47.92
		broker commission 1 = 2 percent x (total money received)
	Processing:
		money for buying stock = shares purchase x price per share 
		commission paid = 2.0/100 x money paid for stock
		money sold = sold per share * shares purchase
		commission paid 2 = 2.0/100 x money sold
		profit = money sold - money bought - commission paid 1 - commission paid 2
	Output:
		money Joe paid for stock
		commission Joe paid broker when he bought stock
		money Joe sold the stock
		commission Joe paid broker when he sold stock
		amount of profit or loss Joe had after selling his stock and paying both broker commission
	*/
	const int SHARE_PURSCHASE = 100;

	const double PRICE_PURSCHASE_PER_SHARE = 45.50,
		PRICE_SOLD_PER_PERSHARE = 47.92;

	double broker_commission_buy,
		broker_commission_sold,
		money_paid_stock,
		money_sold_stock,
		profit;

	money_paid_stock = SHARE_PURSCHASE * PRICE_PURSCHASE_PER_SHARE;
	broker_commission_buy = (2.0 / 100)*money_paid_stock;
	money_sold_stock = PRICE_SOLD_PER_PERSHARE * SHARE_PURSCHASE;
	broker_commission_sold = (2.0 / 100)*money_sold_stock;
	profit = money_sold_stock - money_paid_stock - broker_commission_buy - broker_commission_sold;

	cout << "Amount Joe paid for the stock: " << money_paid_stock << endl
		<< "Amount of commission Joe paid for broker when he bought the stock: " << broker_commission_buy << endl
		<< "Amount Joe sold the stock for: " << money_sold_stock << endl
		<< "Amount of commission Joe paid his broker when he sold the stock: " << broker_commission_sold << endl
		<< "Amount of profit or loss Joe had after selling his stock and paying both broker commissions: " << profit << endl;

	return 0;
}