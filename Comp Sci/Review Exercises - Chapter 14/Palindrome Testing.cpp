//#include <iostream>
//#include <string>
//using namespace std;
//
//bool isPalindrome(string str, int lower, int upper) {
//	if (str[lower] == str[upper]) {
//		if (lower == upper) {
//			return true;
//		}
//		else {
//			if (isPalindrome(str, lower + 1, upper - 1)) {
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//	string user;
//
//	while (true) {
//		cout << "Enter a string using ENTER key for termination: ";
//		getline(cin, user);
//		if (user.size() == 0) {
//			break;
//		}
//		if (isPalindrome(user, 0, user.size() - 1)) {
//			cout << "It's a Palindrome\n";
//		}
//		else {
//			cout << "It's not a Palindrome\n";
//		}
//	}
//
//	return 0;
//}