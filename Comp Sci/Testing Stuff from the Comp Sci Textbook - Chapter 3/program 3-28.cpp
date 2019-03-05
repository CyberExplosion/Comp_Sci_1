#include <iostream>
using namespace std;

int main_done28() {
	const int SIZE = 81;
	char sentence[SIZE];

	cout << "Enter a sentence: ";
	cin.getline(sentence, SIZE);
	cout << "You entered " << sentence << endl;

	return 0;
}