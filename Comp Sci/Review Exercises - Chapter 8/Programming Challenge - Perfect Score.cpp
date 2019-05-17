#include <iostream>
#include <vector>
using namespace std;

int countPerfect(vector<int>);

int main_done1() {
	int user_input;
	vector<int> vec_array(5);

	for (int i = 0; i < vec_array.size(); i++) {
		do {
			cout << "Enter value number " << i + 1 << ": ";
			cin >> user_input;
			if (user_input < 0 || user_input > 100) {
				cout << "Enter wrong value, please try again\n";
			}
			else vec_array[i] = user_input;
		} while (user_input < 0 || user_input > 100);
	}

	cout << "The amount of perfect scores entered are: " << countPerfect(vec_array) << endl;

	return 0;
}

int countPerfect(vector<int> vec_array) {
	int perfect_amount{ 0 };
	for (int val : vec_array) {
		if (val == 100) {
			perfect_amount++;
		}
	}
	return perfect_amount;
}