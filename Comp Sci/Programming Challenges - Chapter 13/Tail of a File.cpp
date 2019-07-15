#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string file_name,
		input;
	ifstream fileIn;
	string test;
	char ch = '0';
	int pos_lastline = 0L;
	const int LINES = 10;
	int lines_counter = 0;
	int byte_size = 0;

	cout << "Enter the name of a text file: ";
	getline(cin, file_name);
	fileIn.open(file_name.c_str());
	if (fileIn.fail()) {
		cout << "The file opened unsuccessfully\n";
		return 1;
	}
	while (fileIn) {
		// 10 loop meaning 10 lines gotta be found
		for (lines_counter = 0; lines_counter < LINES; lines_counter++) {
			//Get the first of the last line
			for (int j = 0; ch != '\n'; j--) {
				// Calculate the size of one input, and add that to the overall size so we can use that to measure the number of bytes away we need from the end
				byte_size = 
				fileIn.clear();
				fileIn.seekg(j, ios::end);
				fileIn.get(ch);
				test.push_back(ch);
			}
			getline(fileIn, input);
			cout << input;
		}
		if (lines_counter < LINES) {
			cout << "\nThe entire file has been displayed\n";
		}
	}
	cout << endl << endl << test << endl;

	return 0;
}