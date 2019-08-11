//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//class Date {
//private:
//	int month,
//		day,
//		year;
//	const static string month_name[];
//	bool leapYear(int);
//
//public:
//	Date() : month(1), day(1), year(2001) {};
//	Date(int t_m, int t_d, int t_y);
//	void print() {
//		cout << month << "/" << day << "/" << setfill('0') << setw(2) <<  year - 2000 << endl
//			<< setprecision(0) << month_name[month - 1] << " " << day << ", " << year << endl
//			<< day << " " << month_name[month - 1] << " " << year << endl;
//	}
//};
//
//int main() {
//	int month, day, year;
//
//	cout << "Enter month, date and year. The program will print out in formated font\n";
//	cin >> month >> day >> year;
//	Date user(month, day, year);
//	cout << endl;
//	user.print();
//
//	return 0;
//}
//
//Date::Date(int t_m, int t_d, int t_y) {
//	int max_date = 31;
//
//	if (t_m < 0 || t_m > 12 || t_d < 0 || t_d > 31 || t_y < 2000 || t_y > 2999) {
//		Date::Date();
//	}
//	else {
//		switch (t_m) {
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			max_date = 31;
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			max_date = 30;
//			break;
//		case 2:
//			if (leapYear(t_y)) {
//				max_date = 29;
//			}
//			else max_date = 28;
//		default:
//			cout << "Error in date\n";
//			break;
//		}
//		if (t_d <= max_date) {
//			day = t_d;
//			month = t_m;
//			year = t_y;
//		}
//		else {
//			Date::Date();
//		}
//	}
//}
//
////To determine whether a year is a leap year, follow these steps :
////1) If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
////2) If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
////3) If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
////4) The year is a leap year(it has 366 days).
////5) The year is not a leap year(it has 365 days).
//bool Date::leapYear(int t_year) {
//	if (t_year % 4 == 0) {
//		if (t_year % 100 == 0) {
//			if (t_year % 400 == 0) {
//				return true;
//			}
//		}
//		else return true;
//	}
//	else return false;
//}
//
//const string Date::month_name[12] = { "January","February","March","April","May","June","July","August","September","October","November", "December" };