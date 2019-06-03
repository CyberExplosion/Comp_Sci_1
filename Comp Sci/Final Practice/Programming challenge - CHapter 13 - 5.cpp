#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	fstream userFile;
	ofstream outputFile;
	string file_name,
		user_string;
	string test_string;
	int num_string_appear = 0;

	cout << "Enter the name of the file you want to search the string for: ";
	getline(cin, file_name);
	//outputFile.open("okboi.txt");
	userFile.open(file_name.c_str(), ios::out | ios::in | ios::app);
	if (outputFile.fail()) {
		cout << "Open file failed!\n";
		exit(1);
	}
	cout << "Please enter the name of the string you want to find inside the file: ";
	getline(cin, user_string);
	/*cin.ignore(1,'\n'); cin.clear(); cin.sync();*/
	while (!userFile.eof()) {
		getline(userFile, test_string);
		if (test_string.compare(user_string) == 0) {
			num_string_appear++;
		}
	}
	cout << "The number of times the string you specified appear are: " << num_string_appear << " times\n";
	return 0;
}