//Khoi Nguyen
//CS 1, Section #0109
//Assignment #1
//A C++ program that shows the user the ASCII code equivalent of the character user input
#include <iostream>
using namespace std;

int main() {
	/*Pseudo Code
	Input:
		random character
	Processing:
		assign input character to a int type
	Output:
		Shows the value int
end
	*/
	char input;
	int ASCII_value;

	cout << "Please enter a character: ";
	cin >> input;

	ASCII_value = static_cast<int>(input);

	cout << "The ASCII Code for the character " << input << " is " << ASCII_value << endl;

	return 0;
}