//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//vector<string> split(string str) {
//	bool word_reading = false;
//	string word;
//	vector<string> splited;
//	for (int i = 0; i < str.size(); i++) {
//		if (isspace(str[i])) {
//			word_reading = false;
//		}
//		if (isalnum(str[i]) && !(word_reading)) {
//			for (int m = i; !(isspace(str[m])) && m < str.size(); m++) {
//				word.push_back(str[m]);
//			}
//			word_reading = true;
//		}
//		if (word != "") {
//			word.push_back('\n');
//			splited.push_back(word);
//			word.clear();
//		}
//	}
//	return splited;
//}
//int main() {
//	vector<string> result;
//	string user;
//	cout << "Enter the string: ";
//	getline(cin, user);
//	result = split(user);
//	for (int i = 0; i < result.size(); i++) {
//		cout << result[i];
//	}
//	return 0;
//}