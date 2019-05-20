#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main_done4() {
	struct Salsa {
		vector<string> type {"milk", "medium", "sweet", "hot", "zesty"};
		vector<int> jars;
		int input;
	};

	Salsa salsa;

	for (string name : salsa.type) {
		cout << "Enter the number of jars sold for salsa " << name << " type: ";
		cin >> salsa.input;
		//Need fixes
		//salsa.type->push_back(salsa.input);
	}

	return 0;
}