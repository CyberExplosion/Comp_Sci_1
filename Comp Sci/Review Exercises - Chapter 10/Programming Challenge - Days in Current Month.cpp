//#include <iostream>
//#include <ctime>
//using namespace std;
//
//bool leapYearOrNot(int year) {
//	if (year % 100 == 0) {
//		if (year % 400 == 0) {
//			return true;
//		}
//		else return false;
//	}
//	else {
//		if (year % 4 == 0) {
//			return true;
//		}
//		else return false;
//	}
//}
//
//int main() {
//	/***************/
//	//tm is a structure that holds calendar times and date, months and second and all the stuff
//	//Because it's a structure, we use it by create an object
//	tm pCalendarTime;
//	//time_t is a data type. Called "time type", this variable needs to work with data that involves with time
//	time_t long_time;
//	//The function will return the time into the argument passed in, the time is from midnight January 1, 1970. The time being taken will be under 64bit form
//	_time64(&long_time);
//	//The function converts the "time_t" value into an "tm" structure and fix the timezone difference between places, it also calculate for times different from 1970 to give accurate. The function will convert the time_t data from the right argument into an tm object on the left side. Both has to be passed by reference.
//	_localtime64_s(&pCalendarTime, &long_time);
//	/*******************************************/
//	int user_month,
//		user_years;
//	int input_month,
//		input_year;
//	string month[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
//	int days_in_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	do {
//		cout << "Enter month and year: ";
//		cin >> user_month >> user_years;
//		if (user_month != 0 && user_years != 0) {
//			input_month = user_month;
//			input_year = user_years;
//		}
//		switch (user_month) {
//		case 0:
//			cout << "The current month, " << month[pCalendarTime.tm_mon] << " " << pCalendarTime.tm_year + 1900 << ", has " << days_in_month[pCalendarTime.tm_mon] << " days.\n";
//			break;
//		case 1:
//			cout << days_in_month[0] << " days\n";
//			break;
//		case 2:
//			if (leapYearOrNot(user_years)) {
//				cout << "29 days.\n";
//			}
//			else {
//				cout << days_in_month[1] << " days\n";
//			}
//			break;
//		case 3:
//			cout << days_in_month[2] << " days\n";
//			break;
//		case 4:
//			cout << days_in_month[3] << " days\n";
//			break;
//		case 5:
//			cout << days_in_month[4] << " days\n";
//			break;
//		case 6:
//			cout << days_in_month[5] << " days\n";
//			break;
//		case 7:
//			cout << days_in_month[6] << " days\n";
//			break;
//		case 8:
//			cout << days_in_month[7] << " days\n";
//			break;
//		case 9:
//			cout << days_in_month[8] << " days\n";
//			break;
//		case 10:
//			cout << days_in_month[9] << " days\n";
//			break;
//		case 11:
//			cout << days_in_month[10] << " days\n";
//			break;
//		case 12:
//			cout << days_in_month[11] << " days\n";
//			break;
//		default:
//			break;
//		}
//	} while (user_month != 0 || user_years != 0);
//
//	return 0;
//}