#include <iostream>
using namespace std;

int main_done12() {
	int cookie_bag = 30,
		serving = 10,
		cookie_ate,
		cookie_in_1_serving;

	double amount_each_serving = 240.0,
		calorie_consume;

	cout << "How many cookies you ate: ";
	cin >> cookie_ate;
	
	cookie_in_1_serving = cookie_bag / serving;
	calorie_consume = cookie_ate * (amount_each_serving*cookie_in_1_serving);

	cout << "Total calorie consumed: " << calorie_consume << endl;

	return 0;
}