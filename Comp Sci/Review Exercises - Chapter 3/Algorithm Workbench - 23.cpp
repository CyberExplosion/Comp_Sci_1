#include <iostream>
using namespace std;

int main_done23() {
	/*Pseudo Code
	Input:
		3 bowling scores in order
	Processing:
		average = sum of 3 scores / 3;
			\
			sum of 3 scores = scores 1 + scores 2 + scores 3
	Output:
		average
end
	*/

	int score1,
		score2,
		score3;
	double average;

	cout << "Enter the scores of 3 games separated with a white space: ";
	cin >> score1 >> score2 >> score3;

	average = (score1 + score2 + score3) / 3.0;

	cout << "The average out of total of 3 games is: " << average << endl;

	return 0;
}