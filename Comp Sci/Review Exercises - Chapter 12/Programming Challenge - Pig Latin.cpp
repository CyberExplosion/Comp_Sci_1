//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string user,
//		word,
//		temp;
//	string modified;
//	int count = 0;
//	bool word_reading = false;
//
//	cout << "Enter the string you want to change: ";
//	getline(cin, user);
//	for (int i = 0; i < user.size(); i++) {
//		// Only enable counting word after meeting a space
//		if (isspace(user[i])) {
//			word_reading = false;
//		}
//		// Require to meet a space first before consider counting another word
//		if (isalnum(user[i]) && !(word_reading)) {
//			// Inner loop test to look for the end of a word
//			for (int m = i; !(isspace(user[m])) && m <user.size(); m++) {
//				word.push_back(user[m]);
//			}
//			word_reading = true;
//			continue;
//		}
//		// Pig-Latin-fied a word
//		if (word != "") {
//			temp = word;
//			word.erase(0,1);
//			word.push_back(temp[0]);
//			word.append("AY");
//			modified += word + " ";
//			word.clear();
//		}
//	}
//	cout << "The string after being Pig Latin-fied: ";
//	cout << modified << endl;
//
//	return 0;
//}