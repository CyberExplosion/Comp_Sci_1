//#include <iostream>
//#include <string>
//using namespace std;
//
//class CharConverter {
//public:
//	string input;
//	string uppercase();
//	string properWords();
//};
//
//int main() {
//	CharConverter user;
//
//	cout << "Enter a string: ";
//	getline(cin, user.input);
//	//cout << user.uppercase() << endl;
//	cout << user.properWords() << endl;
//
//	return 0;
//}
//
//string CharConverter::uppercase() {
//	for (int i = 0; i < input.size(); i++) {
//		input[i] = toupper(input[i]);
//	}
//	return input;
//}
//
//string CharConverter::properWords() { 
//	bool word_read = false;
//	for (int i = 0; i < input.size(); i++) {
//		if (isalnum(input[i]) && !(word_read)) {
//			word_read = true;
//			input[i] = toupper(input[i]);
//		}
//		if (isspace(input[i])) {
//			word_read = false;
//		}
//	}
//	return input;
//}
