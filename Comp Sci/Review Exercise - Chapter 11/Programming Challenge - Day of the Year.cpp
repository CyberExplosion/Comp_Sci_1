/*
Comment out for better version in Challenge 3
*/



//#include <iostream>
//#include <string>
//using namespace std;
//
//class DayofYear {
//private:
//	// User's Declare type, make it look more natural
//	enum m_month { January, February, March, April, May, June, July, August, September, October, November, December };
//	int m_day;
//	static const int days_in_month[];
//	static const string m_month_name[];
//	//Function
//	void calcDaysInMonth(const int&);
//public:
//	DayofYear(int t_day) : m_day{ t_day } {}
//	void print();
//};
//
//const int DayofYear::days_in_month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//const string DayofYear::m_month_name[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
//
///**************************
//DESCRIPTION: This function utilize switch "fall-through" to calculate the amount of day that should show up to represent a month
//**************************/
//void DayofYear::calcDaysInMonth(const int& t_previous_month) {
//	switch (t_previous_month) {
//		// By not doing break after each condition, the function allows the number of days inputed to minus the sum of days of all months that came before.
//		// Ex: 33 days, the function would take in argument "previous month". 33 days certainly exceed 31 days for January and thus fall to the January's case
//		// ==> 33 - 31 = 2 days left, the 2 days then would represent the date in February, which is the current month.
//		// Ex2: 365 days. 365 days is the last day of the year and thus lands on December 31.
//		// "Previous Month" of December is November, that means the function falls to November's case ==> 365 - 30 = 335
//		// However, the "fall-through" keep the function to iterate all other statement in lower cases as well once it step in one case
//		// ==> 365 - 31 - 30 -31 - 31 -30 -31 -30 31 -28 -31 = 31.
//		// From that 31 became the new "m_day". Which then get print out as the date for December
//	case December:
//		cout << "December is not a selectable option of this function\n";
//		break;
//		//m_day -= days_in_month[December];
//	case November:
//		m_day -= days_in_month[November];
//	case October:
//		m_day -= days_in_month[October];
//	case September:
//		m_day -= days_in_month[September];
//	case August:
//		m_day -= days_in_month[August];
//	case July:
//		m_day -= days_in_month[July];
//	case June:
//		m_day -= days_in_month[June];
//	case May:
//		m_day -= days_in_month[May];
//	case April:
//		m_day -= days_in_month[April];
//	case March:
//		m_day -= days_in_month[March];
//	case February:
//		m_day -= days_in_month[February];
//	case January:
//		m_day -= days_in_month[January];
//	default:
//		return;
//	}
//}
//
///*****************************
//DESCRIPTION: This function test "m_day" to figure out the month its' supposed to land. Then feed that to the calcDayInMonth function to calculate the corresponding date for that month
//*****************************/
//void DayofYear::print() {
//	// accumulate day represents the total day one need to be lower to be considered a day in such month
//	int accumulate_day = 0;
//	// the loop will go through January to December, increasing the accumulate_day by increment it with the number of days there are in a month
//	// Ex: month is March. accumulate_day = days in January + days in February + days in March
//	// ==> accumulate_day = 31 + 30 + 31 = 92
//	for (int i = January; i < December + 1; i++) {
//		accumulate_day += days_in_month[i];
//		// Once the accumulate day bigger or equal to "m_day" it means that we are in the correct month
//		// Ex2: m_day = 72
//		// accumulate = 31 -- 2nd loop --> accumulate = 59 -- 3rd loop --> accumulate = 90
//		// 72 < 90 ==> we land in the right month on the 3rd loop ==> March must be the month we in, and February is the previous month
//		if (m_day <= accumulate_day) {
//			// (i-1) represent the "Previous Month" necessary for function calcDaysInMonth to works
//			calcDaysInMonth(i-1);
//			cout << m_month_name[i] << " " << m_day << endl;
//			break;
//		}
//	}
//}
//
//int main_done2ch() {
//	DayofYear day(72);
//	day.print();
//	return 0;
//}