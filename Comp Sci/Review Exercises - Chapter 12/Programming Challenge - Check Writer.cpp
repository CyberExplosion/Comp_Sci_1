//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//
//int main() {
//	string date,
//		name;
//	double amount;
//
//	string whole_number,
//		decimal_number,
//		str_money;
//
//	cout << "Enter the date: ";
//	cin >> date;
//	cin.ignore(100, '\n'); cin.clear(); cin.sync();
//	cout << "Enter the payee's name: ";
//	getline(cin, name);
//	cout << "Enter the amount for the check: ";
//	cin >> amount;
//
//	str_money = to_string(amount);
//	whole_number.assign(str_money.begin(), '.');
//	decimal_number.assign('.' + 1, str_money.end() - 1);
//
//
//	cout << showpoint << fixed << setprecision(2);
//	cout << left << setw(50) << "Date: " << date << endl;
//	cout << endl;
//	cout << right;
//	cout << "Pay to the Order of: " << setw(20) << name << "$" << amount << endl << endl;
//	return 0;
//}