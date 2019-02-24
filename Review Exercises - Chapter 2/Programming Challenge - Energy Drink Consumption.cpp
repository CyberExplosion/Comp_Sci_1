#include <iostream>
using namespace std;

int main_done16() {
	int customers = 16500;
	float percent = 15.0 / 100,
		percent_citrus = 52.0 / 100;

	cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week: " << customers * percent << endl;
	cout << "The approximate number of customers in the survey who purchase citrus flavored energy drinks: " << percent_citrus * (percent*customers) << endl;
	return 0;
}