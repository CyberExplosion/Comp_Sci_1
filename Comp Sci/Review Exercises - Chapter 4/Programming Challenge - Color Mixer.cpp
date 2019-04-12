#include <iostream>
#include <string>
using namespace std;

int main_done12c() {
	string input1,
		input2;

	cout << "Enter the name of 2 primary color: ";
	cin >> input1 >> input2;
	cout << endl;

	if (input1 == "red"&&input2 == "blue") {
		cout << "When you mix red and blue, you get purple.\n";
	}
	else if (input1 == "red"&&input2 == "yellow") {
		cout << "When you mix red and yellow, you get orange.\n";
	}
	else if (input1 == "blue"&&input2 == "yellow") {
		cout << "When you mix blue and yellow, you get green.\n";
	} 
	else cout << "Error. User input invalid\n";

	return 0;
}