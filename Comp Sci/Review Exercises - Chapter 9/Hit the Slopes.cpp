#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct SnowCondition {
	int date;
	double snow_inches;
};

void sortSelection(vector<SnowCondition>& list) {
	for (int i = 0; i < list.size() - 1; i++) {
		for (int k = i + 1; k < list.size(); k++) {
			if (list[i].snow_inches > list[k].snow_inches) {
				swap(list[i], list[k]);
			}
		}
	}
}

void inputMonthAndDate_setSnowCondition_displayList(vector<SnowCondition>& list) {
	string month;
	int start_date, end_date;
	
	cout << "Enter the name of the month: ";
	cin >> month;
	cout << "Enter the starting date of the seven-day period: ";
	cin >> start_date;
	cout << "Enter the ending date: ";
	cin >> end_date;
	if (end_date - start_date + 1 != 7) {
		cout << "The starting date and ending date don't add up to a week\n";
	}
	else {
		int date = start_date;
		for (SnowCondition& val : list) {
			val.date = date;
			cout << "Enter the base snow depth for date " << val.date << ": ";
			cin >> val.snow_inches;
			date++;
		}
		sortSelection(list);
		cout << "=========================================\n";
		cout << "Snow Report " << month << " " << start_date << " - " << end_date << endl;
		cout << left; 
		cout << setw(10) << "Date" << "Base\n";
		cout << showpoint << fixed << setprecision(1);
		for (SnowCondition val : list) {
			cout << setw(8) << val.date << val.snow_inches << endl;
		}
	}
}


int main() {
	vector<SnowCondition> list(7);

	inputMonthAndDate_setSnowCondition_displayList(list);

	return 0;
}