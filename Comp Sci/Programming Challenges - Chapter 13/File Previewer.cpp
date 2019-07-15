//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//	string file_name;
//	ifstream fileIn;
//	string input;
//
//	cout << "Enter the name of a text file you want to display: ";
//	getline(cin, file_name);
//	fileIn.open(file_name.c_str());
//	if (fileIn.fail()) {
//		cout << "The file is not founded\n";
//		return 1;
//	}
//	else {
//		const int LINE = 10;
//		int count = 0;
//
//		while (!fileIn.eof()) {
//			getline(fileIn, input);
//			cout << input << endl;
//			count++;
//		}
//		if (count < LINE) {
//			cout << endl;
//			cout << "The entire file has been displayed\n";
//		}
//	}
//
//	return 0;
//}