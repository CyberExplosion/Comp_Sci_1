//#include <iostream>
//#include <ctime>
//#include <string>
//using namespace std;
//
//int main() {
//	string user_name;
//	int years_of_birth;
//
//	tm CalendarTime;
//	time_t long_time;
//	_time64(&long_time);
//	_localtime64_s(&CalendarTime, &long_time);
//
//	cout << "What is your name: ";
//	getline(cin, user_name);
//	cout << "Enter your year's of birth: ";
//	cin >> years_of_birth;
//
//	cout << "Hello " << user_name << ", you are " << (CalendarTime.tm_year + 1900) - years_of_birth << " years old.\n";
//	
//	return 0;
//}