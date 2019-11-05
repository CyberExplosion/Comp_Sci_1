//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//template <typename T>
//T accum(vector<T> v) {
//	//Initialize
//	T accumulator = T();
//	for (T value : v) {
//		accumulator += value;
//	}
//	return accumulator;
//}
//
//int main() {
//	vector<int>num(0);
//	vector<string>name(0);
//	int input;
//	string in;
//
//	cout << "Enter 3 integers: ";
//	for (int i = 0; i < 3; i++) {
//		cin >> input;
//		num.push_back(input);
//	}
//	cout << "\nThe sum is: " << accum(num) << endl;
//	cin.clear(); cin.ignore(100, '\n'); cin.sync();
//	cout << "Enter 3 strings: ";
//	for (int k = 0; k < 3; k++) {
//		getline(cin, in);
//		name.push_back(in);
//	}
//	cout << "\nThe concatenate of strings is: " << accum(name) << endl;
//}