#include <iostream>
using namespace std;

int main_done2() {
	float percent = 58.0 / 100,
		sales = 8.6e6,
		total;
	
	total = percent * sales;
	cout << "Total ammount is: " << total << endl;
	return 0;
}