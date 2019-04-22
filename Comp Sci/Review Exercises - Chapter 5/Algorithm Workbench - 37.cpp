#include <iostream>
#include <fstream>
using namespace std;

int main_done37() {
	ofstream output_file;
	output_file.open("numbers.txt");

	for (int i = 0; i < 50; i++) {
		output_file << i + 1 << endl;
	}

	output_file.close();

	return 0;
}