#include <iostream>
using namespace std;

int main() {
	char ascii;

	for (int line = 0; line < 16; line++) {
		for (int i = 'a'; i <= 'z'; i++) {
			ascii = i;
			cout << i << " ";
			cout << ascii;
		}
		cout << endl;
	}

	return 0;
}