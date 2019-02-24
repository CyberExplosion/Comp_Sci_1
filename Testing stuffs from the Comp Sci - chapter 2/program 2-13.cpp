#include <iostream>
using namespace std;

//This program demonstrates that characters are actually stored internally bu their ASCII integer value

int main_done13() {
	char letter;
	letter = 65; //65 is the ASCII code for the character A
	cout << letter;
	letter = 10; //10 is the ASCII code for the linefeed character, it's for creating newline in C++ == /n & endl;
	cout << letter;
	letter = 66; //66 is the ASCII code for the character B
	cout << letter << endl;
	return 0;
}