#include <iostream>
using namespace std;

int main_done29() {
	double commission_rate = 0.0;
	
	int sales;

	cout << "Enter the sales: ";
	cin >> sales;

	commission_rate = sales < 10000 ? 0.1:commission_rate;
	commission_rate = sales >= 10000 && sales <= 150000 ? 0.15 : commission_rate;
	commission_rate = sales > 15000 ? 0.2 : commission_rate;

	cout << "The commission rate is: " << commission_rate << endl;

	return 0;
}