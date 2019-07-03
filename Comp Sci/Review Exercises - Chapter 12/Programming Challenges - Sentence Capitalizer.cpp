#include <iostream>
#include <cctype>
using namespace std;

string captializeLetter(const char* str) {
	string modified(str);
	int index = 0;
	bool punctuation_flag = true;
	bool word_counting = false;
	while (modified[index] != '\0') {
		if (isalnum(modified[index]) && punctuation_flag && !(word_counting)) {
			modified[index] = toupper(modified[index]);
			word_counting = true;
			punctuation_flag = false;
		}
		else if (ispunct(modified[index]) && modified[index] != ',') {
			punctuation_flag = true;
		}
		else if (isspace(modified[index])) {
			word_counting = false;
		}
		index++;
	}
	return modified;
}

int main() {
	string user;
	user = "hello. my name is Joe. what is your name?";
	cout << captializeLetter(user.c_str()) << endl;
	return 0;
}