#include <iostream>
using namespace std;

int main_done20() {
	double base_payrate = 18.25, //base pay rate
		overtime_payrate = 27.38, //overtime pay rate
		regular_hours = 40.0, //regular hours worked
		overtime_hours = 10, //overtime hours worked
		regular_wages,
		overtime_wages,
		total_wages;
	//Calculate regualar wages
	regular_wages = base_payrate * regular_hours;
	//Calculate overtime wages
	overtime_wages = overtime_payrate * overtime_hours;
	//Calculate total wages
	total_wages = regular_wages + overtime_wages;
	//Display total wages
	cout << "Wages for this week are $" << total_wages << endl;
	return 0;
}