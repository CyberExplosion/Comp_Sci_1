//#include <iostream>
//#include <string>
//using namespace std;
//
//class Pstring : public string{
//private:
//	string name;
//public:
//	bool isPalindrome();
//	Pstring(const string& t_name) : string(t_name) {
//		name = t_name;
//	}
//};
//
//int main() {
//	string user_string;
//	cout << "Enter the string\n";
//	cin >> user_string;
//	Pstring stri(user_string);
//	cout << endl;
//	cout << stri.isPalindrome();
//
//	return 0;
//}
//
//bool Pstring::isPalindrome() {
//	string reversed = name;
//	for (int i = 0; i < name.size(); i++) {
//		reversed[i] = name[(name.size() - 1) - i];
//	}
//	if (name == reversed) {
//		return true;
//	}
//	else return false;
//}
