#include <iostream>
#include <string>
using namespace std;

int main() {
	string customer_name;
	char package;
	int minute_used;
	double total_cost_A,
		total_cost_B,
		total_cost_C;

	const double PACKAGE_A_COST = 39.99,
		PACKAGE_B_COST = 59.99,
		PACKAGE_C_COST = 69.99,
		PACKAGE_A_MINUTES = 450,
		PACKAGE_B_MINUTES = 900;

	const double ADDTIONAL_COST_PER_MINUTE_PACKAGE_A = 0.45,
		ADDTIONAL_COST_PER_MINUTE_PACKAGE_B = 0.40;

	cout << "Enter customer name: ";
	getline(cin, customer_name);
	cout << "Which package the customer has purchased: ";
	cin >> package;
	cout << "Enter the number of minutes used: ";
	cin >> minute_used;

		total_cost_A = (minute_used > PACKAGE_A_MINUTES) ? (PACKAGE_A_COST + ((minute_used - PACKAGE_A_MINUTES)*ADDTIONAL_COST_PER_MINUTE_PACKAGE_A)) : (PACKAGE_A_COST);
		total_cost_B = (minute_used > PACKAGE_B_MINUTES) ? (PACKAGE_B_COST + ((minute_used - PACKAGE_B_MINUTES)*ADDTIONAL_COST_PER_MINUTE_PACKAGE_B)) : (PACKAGE_B_COST);
		total_cost_C = PACKAGE_C_COST;

	switch (package) {
	case 'a':
	case 'A':
		cout << "Dear " << customer_name << ", the amount of due this month is: $" << total_cost_A << endl;
		if (total_cost_A > total_cost_B) {
			cout << "You could save $" << total_cost_A - total_cost_B << " for next month if you purchase package B\n";
		}
		if (total_cost_A > total_cost_C && total_cost_A > total_cost_B)
			cout << "or even better";
		if (total_cost_A > total_cost_C) {
			cout << " you could save $" << total_cost_A - total_cost_C << " with unlimited minutes usage with no extra cost by purchasing package C\n";
		}
		break;
	case 'b':
	case 'B':
		cout << "Dear " << customer_name << ", the amount of due this month is: $" << total_cost_B << endl;
		if (total_cost_B > total_cost_C) {
			cout << "You could save $" << total_cost_B - total_cost_C << " with unlimited minutes usage with no extra cost by purchasing package C\n";
		}
		break;
	case 'c':
	case 'C':
		cout << "Dear " << customer_name << ", the amount of due this month is: $" << total_cost_C << endl;
	}


	return 0;
}