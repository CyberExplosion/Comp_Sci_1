#include <iostream>
#include <vector>
using namespace std;

int main_done31c() {
	//Define array_vector_type as vector<int>
	typedef vector<int> array_vector_type;

	array_vector_type array1(25,10),
		array2(0);

	for (int val : array1) {
		array2.push_back(val);
	}

	for (int output_array : array1) {
		cout << output_array << endl;
	}
	cout << "Next is array 2\n";
	for (int output_2 : array2) {
		cout << output_2 << endl;
	}

	return 0;
}