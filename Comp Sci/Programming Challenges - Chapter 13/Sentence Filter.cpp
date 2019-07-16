#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string file_name1,
		file_name2;
	ifstream inFile;
	ofstream outFile;
	string line;

	cout << "Enter the name of the file for inputing: ";
	getline(cin, file_name1);
	cout << "Enter the name of the file for outputting: ";
	getline(cin, file_name2);

	inFile.open(file_name1.c_str());
	outFile.open(file_name2.c_str());

	if (inFile.fail()) {
		cout << "The file for inputing failed to open\n";
		return 1;
	}
	if (outFile.fail()) {
		cout << "The file for outputting failed to open\n";
		return 1;
	}

	while (!inFile.eof()) {
		getline(inFile, line, '.');
		for (int i = 1; i < line.size(); i++) {
			line[i] = tolower(line[i]);
		}
		for (int i = 0; i < line.size(); i++) {
			if (isalpha(line[i])) {
				line[i] = toupper(line[i]);
				break;
			}
			else continue;
		}
		//Put the line.size() > 0 before the other condition or else thing will crash, the size condition needs to be satisfy first
		if ( line.size() > 0 && line[line.length()-1] != '.') {
			line.push_back('.');
		}
		outFile << line;
	}

	return 0;
}