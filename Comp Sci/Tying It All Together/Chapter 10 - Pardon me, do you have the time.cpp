//#include <iostream>
//#include <ctime>
//#include <string>
//using namespace std;
//
//int main() {
//	time_t epSeconds;	//Seconds since epoch
//	tm* pCalendarTime = nullptr;	//Pointer to calendar time
//	//Array of weekday names
//	string wDay[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
//	string month[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
//
//	epSeconds = time(NULL);
//	pCalendarTime = localtime(&epSeconds);	//Convert to local time
//	//Print day of month and day of week
//	cout << "Today is " << wDay[pCalendarTime->tm_wday]
//		<< " " << month[pCalendarTime->tm_mon]
//		<< " " << pCalendarTime->tm_mday
//		<< ", " << 1900 + pCalendarTime->tm_year << endl;
//}