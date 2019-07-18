//#include <iostream>
//#include <string>
//#include <fstream>
//#include <vector>
//using namespace std;
//
//int main() {
//	const int SIZE = 128;
//	vector<char> arr_characters(SIZE);
//	//Initialize with 128 value of 0
//	vector<int> arr_char_count(SIZE);
//	ifstream inFile;
//	string file_name;
//	string line;
//
//	cout << "Enter the file name: ";
//	getline(cin, file_name);
//	inFile.open(file_name.c_str());
//
//	if (inFile.fail()) {
//		cout << "The file failed to open\n";
//		return 1;
//	}
//	//Fill the character array
//	for (int i = 0; i < SIZE; i++) {
//		arr_characters[i] = 'A' + i;
//	}
//
//	while (!inFile.eof()) {
//		getline(inFile, line);
//		for (char val : line) {
//			for (int i = 0; i < SIZE; i++) {
//				if (val == arr_characters[i]) {
//					arr_char_count[i]++;
//				}
//			}
//		}
//	}
//	cout << "Numbers of times letters appear: \n";
//	for (int k = 0; k < SIZE; k++) {
//		cout << arr_characters[k] << ": " << arr_char_count[k] << endl;
//	}
//
//	inFile.close();
//	return 0;
//}