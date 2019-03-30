//Khoi Nguyen
//CS1, Section #0109
//Assignment #3, Problem 3
//Looking for problem in the programs given. All problems found will be commented. Re-wrote code included to show what I would add, remove, or rearrange them. Flip the comment block to test my re-written code.

#include <iostream>
using namespace std;
/*
int main_done3() {
	int numCount, total;
	double average;

	cout << "How many numbers do you want to average?"; // Add a space after ?, more aesthetically pleasing
	cin >> numCount;

	for (int count = 0; count < numCount; count++) {
		int num;
		cout << "Enter a number:";
		cin >> num;
		total += num; //total have to be initialized before "num" can be added to "total" itself
		count++; // double "count++" here, we already have one in the for(). This will make the loop do only half the iteration intended
	}
	average = total / numCount; //Although "average" is double, both "total" and "numCount" are integer. Hence, the value evaluate will be integer and could potentially be inaccurate. Suggest casting either "total" or "numCount" to double so the whole equation can level up to double

	cout << "The average is << average << endl"; // The quotation should end after the "is ". Also add a space after "is", make it nicer to look
	return 0;
}
*/

/*
Example Code

int main() {
	int numCount, total=0;
	double average;

	cout << "How many numbers do you want to average? ";
	cin >> numCount;

	for (int count = 0; count < numCount; count++) {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		total += num;
	}
	average = static_cast<double>(total) / numCount;

	cout << "The average is " << average << endl;
	return 0;
}
*/