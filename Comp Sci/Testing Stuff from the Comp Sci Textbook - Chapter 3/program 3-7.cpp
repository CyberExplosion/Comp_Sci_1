// This program uses a type cast to avoid an integer division

/* Integer division happen when an interger divide by another integer, for example: 5/7, This will be bad because in the expression both 5 and 7 are integer and thus would not be promote to double-type value. Result in the decimal part being "truncate" because the return value is force to be in integer-data type
*/
#include <iostream>
using namespace std;

int main_done7() {
	int books,
		months;
	double books_per_month;

	cout << "How many books do you plan to read? ";
	cin >> books;
	cout << "How many months will it take you to read them? ";
	cin >> months;

	books_per_month = static_cast<double>(books) / months;
	// static_cast<data_type>(value) allow us to promote or demote a value into another data type.
	// In this case, if we don't promote one value in the expression, the resuult would be, for example: 30/7 = 4. Which is completely wrong
	// With one value in the expression changes to double, it will also promote the other value into double when evaluate and result in a double value, which gives us 30/7=4.28571 which is the correct answer
	cout << "That is " << books_per_month << " books per month. \n";
	return 0;
}