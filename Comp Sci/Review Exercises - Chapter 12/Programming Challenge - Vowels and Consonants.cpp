//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int countVowels(const char* str) {
//	int index = 0,
//		count = 0;
//	while (str[index] != '\0') {
//		if (str[index] == 'a' || str[index] == 'o' || str[index] == 'u' || str[index] == 'e' || str[index] == 'i') {
//			count++;
//		}
//		index++;
//	}
//	return count;
//}
//
//int countConsonants(const char* str) {
//	int count = 0;
//	while (str[count] != '\0') {
//		count++;
//	}
//	return count - countVowels(str);
//}
//
//int main() {
//	string user;
//	char choice;
//	cout << "Enter a string: ";
//	getline(cin, user);
//	do {
//		cout << "Menu: " << endl;
//		cout << setw(2) << "A) Count the number of vowels in the string\n"
//			<< setw(2) << "B) Count the number of consonants in the string\n"
//			<< setw(2) << "C) Count both the vowels and consonants in the string\n"
//			<< setw(2) << "D) Enter another string\n"
//			<< setw(2) << "E) Exit the program\n";
//		cin >> choice;
//		cin.ignore(100, '\n'); cin.clear(); cin.sync();
//		switch (toupper(choice)) {
//		case 'A':
//			cout << "The number of vowels in the string are: " << countVowels(user.c_str()) << endl;
//			break;
//		case 'B':
//			cout << "The number of consonants in the string are: " << countConsonants(user.c_str()) << endl;
//			break;
//		case 'C':
//			cout << "Both the vowels and consonants in the string are: " << countVowels(user.c_str()) << " and " << countConsonants(user.c_str()) << endl;
//			break;
//		case 'D':
//			cout << "Enter a different string: ";
//			getline(cin, user);
//			break;
//		case 'E':
//			cout << "Program will now exit\n";
//			break;
//		default:
//			cout << "Please enter the correct options\n";
//			break;
//		}
//	} while (toupper(choice) != 'E');
//
//	return 0;
//}