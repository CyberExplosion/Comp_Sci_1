#include <iostream>
#include <vector>
using namespace std;

int main_done5() {
	int input,
		least = -1,
		greatest = -1,
		total = 0;
	double average;
	vector<vector<int>> monkey(3, vector<int>(7));

	for (int i = 0; i < monkey.size(); i++) {
		for (int k = 0; k < monkey[i].size(); k++) {
			cout << "Enter the amount of food for monkey number " << i + 1 << " on day number " << k + 1 << ": ";
			cin >> input;
			monkey[i][k] = input;
			if (input < least || least == -1) {
				least = input;
			}
			if (input > greatest) {
				greatest = input;
			}
			total += input;
			cout << endl;
		}
	}

	average = total / (monkey.size() * monkey[0].size()) * 1.0;
	cout << "The average amount of food eaten per day by the whole family of monkeys are: " << average << endl;
	cout << "The least amount of food eaten during the week by any one monkey: " << least << endl;
	cout << "The greatest amount of food eaten during the week by anyone monkey: " << greatest << endl;

	return 0;
}