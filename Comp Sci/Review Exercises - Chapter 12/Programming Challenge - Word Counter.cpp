//#include <iostream>
//#include <cctype>
//#include <string>
//using namespace std;
//
////Combined with Challenges 2
//
//int countWord(const char* c_string) {
//	int word = 0,
//		index = 0;
//	bool word_reading = false;
//	while (c_string[index] != '\0') {
//		if (isalnum(c_string[index]) && !(word_reading)) {
//			word++;
//			word_reading = true;
//		}
//		else if (isspace(c_string[index])) {
//			word_reading = false;
//		}
//		index++;
//	}
//	return word;
//}
//
//int averageLetter(const char* c_string) {
//	int letter = 0;
//	int	index = 0;
//	while (c_string[index]!='\0') {
//		if (isalnum(c_string[index])) {
//			letter++;
//		}
//		index++;
//	}
//	return letter / countWord(c_string);
//}
//
//int main() {
//	string user;
//	cout << "Input the string: ";
//	getline(cin, user);
//	cout << "The number of words in the string are: " << countWord(user.c_str()) << endl;
//	cout << "The average letters in each word in the string is: " << averageLetter(user.c_str()) << endl;
//	return 0;
//}