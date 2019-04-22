#include <iostream>
using namespace std;

int main_done29() {

	for (int i = 0; i <= 1000; i += 10) {
		cout << i;
		cout << (i != 1000 ? ", " : "\n");
	}

	return 0;
}