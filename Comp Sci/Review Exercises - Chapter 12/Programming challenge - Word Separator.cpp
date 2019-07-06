//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string original,
//		modified;
//	bool capital_letter = false,
//		first_word = false;
//	cout << "Enter the string with the first word being capitalized: ";
//	cin >> original;
//	modified = original;
//	for (int i = 1; i < modified.size(); i++) {
//		if (isupper(modified[i])) {
//			first_word = true;
//		}
//		if (first_word && isupper(modified[i])) {
//			modified[i] = tolower(modified[i]);
//			modified.insert(i, " ");
//		}
//	}
//	cout << "The modified string: " << modified << endl;
//	return 0;
//}