#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void inOut(ofstream&);

int main_done1() {
	string fname = "list.dat";
	ofstream outFile;
	outFile.open(fname.c_str());
	if (outFile.fail()) {
		cout << "The output file was not successfully opened." << endl;
		exit(1);
	}
	inOut(outFile);
	return 0;
}

void inOut(ofstream& fileOut) {
	const int NUMLINES = 5;
	string line;
	int count;
	cout << "Please enter five lines of text: " << endl;
	for (count = 0; count < NUMLINES; count++) {
		getline(cin, line);
		fileOut << line << endl;
	}
	cout << "The file has been successfully written." << endl;
	return;
}