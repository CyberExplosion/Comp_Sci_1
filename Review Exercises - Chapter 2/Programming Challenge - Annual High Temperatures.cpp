#include <iostream>
using namespace std;

int main_done19() {
	int temp_newyork = 85,
		temp_denver = 88,
		temp_phoenix = 106;
	float rise = 2.0 / 100;

	cout << "New high temp of New York: " << temp_newyork + (temp_newyork*rise) << " C\n";
	cout << "New high temp of Denver: " << temp_denver + (temp_denver*rise) << " C\n";
	cout << "New high temp of Phoenix: " << temp_phoenix + (temp_phoenix*rise) << " C\n";
	return 0;
}