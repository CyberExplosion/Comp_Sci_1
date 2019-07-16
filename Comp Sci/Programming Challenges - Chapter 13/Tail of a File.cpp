// I gave up, will try to solve again in the future


//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//int main() {
//	//A string data type has a byte size of 28
//	string file_name,
//		input = "";
//	ifstream fileIn;
//	string test;
//	char ch = '0';
//	int pos_lastline = 0L;
//	const int LINES = 10;
//	int lines_counter = 0;
//	const int STRING_BYTE_SIZE = 28;
//
//	cout << "Enter the name of a text file: ";
//	getline(cin, file_name);
//	fileIn.open(file_name.c_str());
//	if (fileIn.fail()) {
//		cout << "The file opened unsuccessfully\n";
//		return 1;
//	}
//	//while (fileIn) {
//		// 10 loop meaning 10 lines gotta be found
//		for (lines_counter = 0; lines_counter < LINES; lines_counter++) {
//			//Get the first of the last line
//			for (int j = 0; ch != '\n'; j--) {
//				// Calculate the size of one input, and add that to the overall size so we can use that to measure the number of bytes away we need from the end
//				fileIn.clear();
//				fileIn.seekg(j, ios::end);
//				fileIn.get(ch);
//				test.push_back(ch);
//				cout << "Running";
//			}
//			if (ch == '\n') {
//				fileIn.seekg(-1, ios::cur);
//			}
//			getline(fileIn, input);
//			cout << input << endl;
//		}
//		if (lines_counter < LINES) {
//			cout << "\nThe entire file has been displayed\n";
//		}
//	//}
//	cout << endl << endl << test << endl;
//
//	cout << sizeof(input) << endl;
//	return 0;
//}