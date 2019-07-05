//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string password;
//	bool lower_flag = false,
//		upper_flag = false,
//		digit_flag = false;
//	bool requirement_met;
//	do {
//		//Reset the flag
//		requirement_met = true;
//		cout << "Enter your password: ";
//		getline(cin, password);
//		if (password.size() < 6) {
//			cout << "Your password needs to be at least six characters long\n";
//			requirement_met = false;
//		}
//		for (char val : password) {
//			if (isupper(val)) {
//				upper_flag = true;
//			}
//			if (islower(val)) {
//				lower_flag = true;
//			}
//			if (isdigit(val)) {
//				digit_flag = true;
//			}
//		}
//		if ((!lower_flag) || (!upper_flag)) {
//			cout << "Your password needs to have at least one lowercase letter and one uppercase letter\n";
//			requirement_met = false;
//		}
//		if (!digit_flag) {
//			cout << "Your password needs to have at least one digit\n";
//			requirement_met = false;
//		}
//	} while (!requirement_met);
//
//	return 0;
//}