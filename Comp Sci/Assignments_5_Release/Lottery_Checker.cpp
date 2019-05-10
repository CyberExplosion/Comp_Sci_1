//Khoi Nguyen
//CS1, Section #0109
//Assignment #5, Problem #1
//This program is going to allow the user to select their lotto numbers. The program will then randomly generate the winning lotto numbers and check with the user numbers to see if they win anything.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;

bool NoDuplicate(int, int[], int);
void GenWinNums(int[], int);
void getLottoPicks(int[], int);
int NumberofMatches(int[], int[], int size);
void Result(int, int[], int[],int);

int main() {
/*Pseudo Code
	Input:
		User decision
		user name
		user number between 1 and 40
		check for no duplication before putting in array
		continue after 7 acceptable input entered
	Processing:
		Decision to play or not 
			\
			user name store
			call getLottoPicks()
				\
				7 lotto numbers from the user
					\
					The lotto doesn't take any duplicate number 
					-----> each number would be store in UserTicket_array[]
					|
					May want to create a function NoDuplicate() to check if the user's selection is already in the UserTicket[] array or not
						\
						User entered a duplicated number:
							Prompt to enter another number
							Looping until they enter a number that is not a duplicate
			|
			twice every week
			|
			call GenWinNums() two times
				\
				randomly generates the winning lotto number based on the rule
				store the random number in the WinningNum[] array
					\
					the random number is between 1 and 40
				|
				Do not allow this function to generates duplicate winning numbers
					\
					Reuse the NoDuplicate() function to test for this
			|
			compare UserTicket[] array and WinningArray[]
				\
				count for how many number that is equal to each other in the same position in those two arrays

	Output:
		Use NoDuplicate to test before returning the value to array
			\
			return the getLottoPicks() to UserTicket[] array
			return the GenWinNums() to WinningNums[] array
		Return the number of times two values are equal to each other in those 2 arrays
		Display the name and the rewards
*/
	const int SIZE = 7;
	int WinningNum[SIZE] = { 0,0,0,0,0,0,0 },
	UserTicket[SIZE] = { 0,0,0,0,0,0,0 }; 
	char choice;
	string name;

	do {
		cout << "LITTLETON CITY LOTTO MODEL: " << endl;
		cout << " -----------------------------" << endl;
		cout << "1) Play Lotto" << endl;
		cout << "Q) Quit Program " << endl;
		cout << "Please make a selection: " << endl;
		cin >> choice;
		if (toupper(choice) == 'Q')
			return 0;
		cout << "Please enter your name: " << endl;
		cin >> name;
		cout << endl;
		getLottoPicks(UserTicket, SIZE);
		GenWinNums(WinningNum, SIZE);
		cout << name << "'s LOTTO RESULTS" << endl;
		cout << "--------------------------------" << endl;
		cout << "WINNING TICKET NUMBERS: ";
		for (int i = 0; i < SIZE; i++) {
			cout << *(WinningNum + i) << " ";
		}
		cout << endl;
		cout << right << setw(13) << name << "'s TICKET: ";
		for (int k = 0; k < SIZE; k++) {
			cout << *(UserTicket + k) << " ";
		}
		cout << endl;
		cout << "RESULTS: " << endl;
		cout << "---------------------" << endl;
		cout << "Number Matches: " << NumberofMatches(UserTicket, WinningNum, SIZE) << endl;
		cout << "Winnings" << setw(8) << ": ";
		Result(NumberofMatches(UserTicket, WinningNum, SIZE), UserTicket, WinningNum, SIZE);
		cout << endl << endl;
		
	} while (choice == 49);

	return 0;
}

/**********************
FUNCTION NAME: getLottoPicks
INPUT: the userticket[array] and size
OUTPUT: nothing
DESCRIPTION: The function will use another function called NoDuplicate() that return true or false. If true, the function then will add the int value inputed into the corresponding array slot in the UserTicket[] array. If false, the function keeps prompting the user to enter a number that is not a duplication and inside the range of 1-40
**********************/
void getLottoPicks(int arr[], int size) {
	int user_number;

	for (int i = 0; i < size; i++) {
		cout << "Please enter number " << i+1 << ": ";
		cin >> user_number;
		
		while (user_number < 1 || user_number>40 || !NoDuplicate(user_number, arr, size)) {
			if (!NoDuplicate(user_number, arr, size)) {
				cout << "No duplicate numbers are accepted. Please enter another number: ";
				cin >> user_number;
			}
			if (user_number < 1 || user_number>40) {
				cout << "The number must be between 1 and 40. Please enter another number: ";
				cin >> user_number;
			}
		}
		cout << endl;
		*(arr + i) = user_number;
	}
	return;
}
/***********************
FUNCTION NAME: NoDuplicate
INPUT: an integer, an array, the array size
OUTPUT: a boolean value
DESCRIPTION: The function will test the integer with corresponding array to see if there is a duplication or not. The integer being inputed will be test with all the values in the array, then 
************************/
bool NoDuplicate(int test_value, int arr[], int arr_size) {
	for (int i=0; i < arr_size; i++) {
		if (test_value == *(arr + i)) {
			return false;
		}
	}
	return true;
}

/***********************
FUNCTION NAME: GenWinNums
INPUT: WinningNum[] array and its size
OUTPUT: a int value from 1-40
DESCRIPTION: The function will randomly generate a number from 1-40. The number then will be tested using the NoDuplicate() function. If the function return true, then the number will be add in its' corresponding slot in WinningNum[] array. If false, another number will be randomly generated and test again using the NoDuplicate() function, looping until the function return true. 
************************/
void GenWinNums(int arr[], int size) {
	int random_num;

	srand(time(0));
	random_num = rand() % 40 + 1;

	for (int l = 0; l < size; l++) {
		while (!NoDuplicate(random_num, arr, size)) {
			random_num = rand() % 40 + 1;
		}
		
		*(arr + l) = random_num;
	}
	return;
}


/*****************************
FUNCTION NAME: NumberofMatches
INPUT: the User array, the winning array, and their size
OUTPUT: integer, the number of matches 2 array have
DESCRIPTION: The function runs through both array and count every time a value inside the user array have a match with another value in the computer array
******************************/
int NumberofMatches(int array_user[], int array_com[], int size) {
	int matches = 0;
	
	for (int b = 0; b < size; b++) {
		if (*(array_user + b) == *(array_com + b)) {
			matches++;
		}
	}

	return matches;
}

/******************************
FUNCTION NAME: Result
INPUT: The number of matches from the NumberofMatches() function, the user array, the winning array and their size
OUTPUT: nothing
DESCRIPTION: The function takes in the number of matches the user get and from that display their reward.
******************************/
void Result(int matches, int user[], int com[], int size) {
	switch (NumberofMatches(user, com, size)) {
	case 7:
		cout << "JACKPOT!!! - $1 MILLION";
		break;
	case 6:
		cout << "GREAT! - $100,000";
		break;
	case 5:
		cout << "LUCKY YOU! - $5,000";
		break;
	case 4:
		cout << "NOT BAD - $100";
		break;
	case 3:
		cout << "FREE TICKET";
		break;
	default:
		cout << "SORRY NOTHING";
	}
}