#include <iostream>
using namespace std;

int main_done1() {
	char ascii;
	int count = 0;


	for (int i = 32; i <= 127; i++) {
		ascii = i;
		cout << ascii << " ";
		if (i % 16 == 0) {
			cout << endl;
		}
	}
	
	cout << endl;

	return 0;
}