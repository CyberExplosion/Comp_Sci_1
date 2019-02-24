#include <iostream>
using namespace std;

int main_done9() {
	/*Processing:
		cost a piece = 14.95
		35 percent profit = 1.35
		profit = price - cost 
	--> 1.35*cost = price - cost
	--> price = cost + 1.35*cost
	*/
	float cost = 14.95,
		profit = 1.35,
		price;

//	cost += profit * cost;	Why float doesn't allow +=?????
	price = cost + (profit * cost);
	cout << "The price company should sale at is: $" << price << ".\n";
	return 0;
}