//#include <iostream>
//using namespace std;
//
//class NumDays {
//private:
//	int hours = 0;
//	double days = 0;
//	double hours_to_day = 8.0;
//	void convertHourstoDays();
//public:
//	NumDays(int t_hour) : hours{ t_hour } {}
//	void setHours(int t_setHour) {
//		hours = t_setHour;
//	}
//	int getHours() { return hours; }
//	double getDays() {
//		convertHourstoDays();
//		return days;
//	}
//	// Operator
//	// The plus and minus and other binary operator (operators that require Lvalue and Rvalue to work) need to declared outside the class. As in stand-alone function. If you declare them as "member-function" aka "without friend", they will be compile with the thinking in mind that the left value will not be convert to object
//	// Ex: operator+(int) ==> a.operator+(int b) ==> a + b {but b got converted to an object through the default convert operator in compiler} 
//	// Same as operator[](int) ==> array.operator[](b) ==> a[b] {b is an object}
//	// However, this will build up unforeseen circumstance in the future, like for example:
//	// 2 + a ==> 2.operator+(a) ==> this will not works since 2 is not an object and thus cannot use the overload operator belong to an object
//	// However, if we write it this way: a + 2 ==> a.operator+(2) ==> This will work since 2 is converted using the conversion constructor from the compiler
//	// This create inconsistency and thus should be avoid
//	
//	/**********
//	Declare binary overload function as "free", aka friend, aka not belong to any class. So that we can make it treat is as a stand alone function and not a class member function, thus allow us to call the function even if the "caller" is not an object
//	**********/
//
//	//They declare as friend to be able to use the variable inside this class
//	friend int operator+(NumDays, NumDays);
//	friend int operator-(NumDays, NumDays);
//	NumDays operator++();
//	NumDays operator--();
//	NumDays operator++(int);
//	NumDays operator--(int);
//};
//
//int main() {
//	NumDays emp1(7);
//	emp1++;
//	cout << emp1.getDays();
//	return 0;
//}
//
//int operator+(NumDays t_left_time, NumDays t_right_time ) {
//	return t_left_time.hours + t_right_time.hours;
//}
//
//int operator-(NumDays t_left, NumDays t_right) {
//	return t_left.hours - t_right.hours;
//}
//
//void NumDays::convertHourstoDays() {
//	days = hours / hours_to_day;
//}
//
//NumDays NumDays::operator++() {
//	hours++;
//	return *this;
//}
//
//NumDays NumDays::operator--() {
//	hours--;
//	return *this;
//}
//
//NumDays NumDays::operator++(int) {
//	NumDays temp = *this;
//	hours++;
//	return temp;
//}
//
//NumDays NumDays::operator--(int) {
//	NumDays temp = *this;
//	hours--;
//	return temp;
//}