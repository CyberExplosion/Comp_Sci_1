//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//
//void upper(char* str) {
//	int index = 0;
//	while (str[index] != '\0') {
//		str[index] = toupper(str[index]);
//		index++;
//	}
//}
//
//void lower(char* str) {
//	int index = 0;
//	while (str[index] != '\0') {
//		str[index] = tolower(str[index]);
//		index++;
//	}
//}
//
//void flip(char* str) {
//	int i = 0;
//	while (str[i] != '\0') {
//		if (isupper(str[i])) {
//			str[i] = tolower(str[i]);
//		}
//		else if (islower(str[i])) {
//			str[i] = toupper(str[i]);
//		}
//		i++;
//	}
//}
//
//int main() {
//	string user;
//	cout << "Enter a string: ";
//	cin >> user;
//	cout << "\nUpper: ";
//	upper(user.c_str());
//	cout << user;
//	cout << "\nLower: ";
//	lower(user.c_str());
//	return 0;
//}