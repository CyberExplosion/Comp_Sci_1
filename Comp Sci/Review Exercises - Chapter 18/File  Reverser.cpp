#include <iostream>
#include <fstream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string name;
	stack<char>stk;

	cout << "Enter the name of the input file: ";
	getline(cin, name);

	fstream inFile(name.c_str(), ios::in),
		outFile("output.txt", ios::out);

	if (!inFile.is_open()) {
		cout << "Error in opening input file\n";
	}

	while (!inFile.eof()) {
		//It seems like -1 is the terminating code for window txt file
		if (inFile.peek() == -1) {
			inFile.get();
			continue;
		}
		stk.push(inFile.get());
	}
	while (!stk.empty()) {
		outFile << stk.top();
		stk.pop();
	}

	inFile.close();
	outFile.close();
}