#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream input_file;
	input_file.open("numbers.txt");

	int number;

	for (int i = 0; i < 50; i++) {
		input_file >> number;
		cout << number << endl;
	}

	return 0;
}