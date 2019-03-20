#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main_done10() {
	string movie_name;
	
	int adult_ticket,
		child_ticket;

	double revenue_earn,
		distributor_earn;
	
	const double ADULT_PRICE = 10.0,
		CHILD_PRICE = 6.0,
		REVENUE_PERCENT = 80.0 / 100,
		DISTRIBUTOR_PERCENT = 20.0 / 100;

	cout << "Enter the name of the movie: ";
	getline(cin,movie_name);
	cout << "Enter the number of adult tickets sold: ";
	cin >> adult_ticket;
	cout << "Enter the number of child tickets sold: ";
	cin >> child_ticket;

	revenue_earn = REVENUE_PERCENT * ((adult_ticket*ADULT_PRICE) + (child_ticket * CHILD_PRICE));
	distributor_earn = DISTRIBUTOR_PERCENT * ((adult_ticket*ADULT_PRICE) + (child_ticket * CHILD_PRICE));

	cout << showpoint << fixed << setprecision(2)
		<< "Movie Name: " << setw(26) << "\"" << movie_name << "\"" << endl
		<< "Adult Tickets Sold: " << setw(20) << adult_ticket << endl
		<< "Child Tickets Sold: " << setw(20) << child_ticket << endl
		<< "Gross Box Office Revenue: " << setw(13)<< "$ " << revenue_earn + distributor_earn << endl
		<< "Amount Paid to Distributor: " << setw(12) << "-$  " << distributor_earn << endl
		<< "Net Box Office Revenue: " << setw(15) << "$ " << revenue_earn << endl;

	return 0;
}