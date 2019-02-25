#include <iostream>
using namespace std;

int main() {
	const int SIZE = 81;
	char sentence[SIZE];

	cout << "Enter a sentence: ";
	cin.getline(sentence, SIZE);
	cout << "You entered " << sentence << endl;

	return 0;
}