//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class WidgetCalc {
//private:
//	const int HOURS_PER_SHIFT = 8;
//	const int NUM_SHIFTS = 2;
//	const int PRODUCE_PER_HOUR = 10;
//	int num_widget_ordered;
//	double daysNeed();
//public:
//	WidgetCalc(int);
//};
//
//int main() {
//	int num_wid;
//	
//	cout << "Enter the number of widgets you wants: ";
//	cin >> num_wid;
//	WidgetCalc user(num_wid);
//
//	return 0;
//}
//
//double WidgetCalc::daysNeed() {
//	int hours_per_day = HOURS_PER_SHIFT * NUM_SHIFTS;
//
//	return (double)num_widget_ordered / (PRODUCE_PER_HOUR * hours_per_day);
//}
//
////Define the number of widgets ordered, cannot be negative or 0, return the number of days it takes to produce
//WidgetCalc::WidgetCalc(int num_ordered) {
//	if (num_ordered <= 0) {
//		cout << "Wrong value\n";
//	}
//	else {
//		num_widget_ordered = num_ordered;
//		cout << showpoint << fixed << setprecision(2);
//		cout << "The number of days need for the widgets to be procured: " << daysNeed() << endl;
//	}
//}
