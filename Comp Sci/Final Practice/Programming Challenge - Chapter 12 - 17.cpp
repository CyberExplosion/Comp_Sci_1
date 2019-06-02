// Epic fail, I'm so sick of working with string
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main_Givenup17ch10() {
	fstream workingFile;
	string fileName = "spelling.txt";
	string input;
	workingFile.open(fileName.c_str(), ios::in | ios::out);
	if (workingFile.fail()) {
		cout << "It's failed\n";
	}
	while (!workingFile.eof()) {
		workingFile >> input;
	}
	// Creating the array for position in which "ie" or "ei" is found
	int* ie_pos = new int[input.size()];
	for (int j = 0; j < input.size(); j++) {
		ie_pos[j] = -1;
	}
	for (int i = 0; i < input.size() - 1; i++) {
		bool word_flag = false,
			possible_i_and_e = false;
		if (isspace(input[i])) {
			word_flag = false;
			continue;
		}
		if (isalnum(input[i]) && !word_flag) {
			word_flag = true;
			if (!possible_i_and_e) {
				possible_i_and_e = true;
			}
		}
		if (possible_i_and_e) {
			if ((input[i] == 'i' && input[i + 1] == 'e') || (input[i] == 'e' && input[i + 1] == 'i')) {
				while (isalnum(input[i]) && (!isspace(input[i + 1]))) {
					cout << input[i] << input[i+1];
					i++;
				}
			}
			possible_i_and_e = false;
		}
	}


	delete[]ie_pos;
	ie_pos = nullptr;
	return 0;
}