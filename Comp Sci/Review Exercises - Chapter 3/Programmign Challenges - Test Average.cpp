#include <iostream>
#include <iomanip>
using namespace std;

int main_done6() {
	double test_score_1,
		test_score_2,
		test_score_3,
		test_score_4,
		test_score_5,
		average;

	cout << "Enter 1 - 5 test scores, separated each with a white space: ";
	cin >> test_score_1 >> test_score_2 >> test_score_3 >> test_score_4 >> test_score_5;
	cout << endl;

	average = (test_score_1 + test_score_2 + test_score_3 + test_score_4 + test_score_5) / 5;

	cout << showpoint << fixed << setprecision(1);
	cout << "The average test score is: " << average << endl;

	return 0;
}