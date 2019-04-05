//Khoi Nguyen
//CS1, Section #0109
//Assignment #3, Problem 2
//A program with loop that lets the user enter a series of integers. The program ends when the user enter -9999. After all the numbers have been entered, as well as the average of all the numbers entered.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	/*Pseudo Code
	Input:
		A series of integers
		( -9999 to end the series) -- a loop
		initial largest = -9999
		initial smallest = -9999
		initial average = 0.0
	Processing:
		
	
		while(input != -9999){ -- Loop here so that the user can enter value
			input entered
				|
				Input check if =-9999. If yes -> skip all. If no -> continue
				|
			biggest
				\
				if(input > biggest || biggest == -9999)
					\
					biggest = input;	//(biggest == -9999) -- This way the first value the user input will always end up as the default biggest. Any following input then will be compare using the first condition (input > biggest)
			
			smallest
				|
				if (input < smallest || smallest == -9999)
					\
					smallest = input;	//(smallest == -9999) -- This way the first value enter will always be the smallest value. That means the first value enter will be both the largest and smallest value. The following input, however, will be checked using the first condition (input < smallest)

				number counter +1 each loop
				sum += input user of each loop
			}

	Output:
		display the largest
		the smallest
		average of all number enter
	*/
	int input = 0,
		smallest = -9999,
		biggest = -9999,
		sum = 0,
		count = 0;

	double average = 0;


	//Loop that makes sure the first value will always be assigned as biggest and smallest
		while (input != -9999) {
			cout << "Enter a number or -9999 to exit: ";
			cin >> input;
			if (input != -9999) {
				if (input > biggest || biggest == -9999) { // The 2nd condition allow the first input to always be biggest.
					biggest = input;
				}
				if (input < smallest || smallest == -9999) { // The 2nd condition allow the first input to always be smallest.
					smallest = input;
				}
				count++;
				sum += input;
			}
		}

		if (biggest != -9999 && smallest != -9999) {
			average = static_cast<double>(sum) / count;
		}

	cout << endl;
	cout << showpoint << fixed << setprecision(2);
	cout << "The smallest number in the set is " << smallest << endl << endl
		<< "The largest number in the set is " << biggest << endl << endl
		<< "The average of the " << count << " numbers in the set is " << average << endl;

	return 0;
}