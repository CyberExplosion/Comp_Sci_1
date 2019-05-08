// Khoi Nguyen



#include <iostream>
using namespace std;

bool NoDuplicate(int, int[], int);
int GenWinNums();

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
	return 0;
}

/**********************
FUNCTION NAME: getLottoPicks
INPUT: a int value from 1-40
OUTPUT: an integer
DESCRIPTION: The function will use another function called NoDuplicate() that return true or false. If true, the function then will add the int value inputed into the corresponding array slot in the UserTicket[] array. If false, the function keeps prompting the user to enter a number that is not a duplication and inside the range of 1-40
**********************/

/***********************
FUNCTION NAME: NoDuplicate
INPUT: an integer, an array, the array size
OUTPUT: a boolean value
DESCRIPTION: The function will test the integer with corresponding array to see if there is a duplication or not. The integer being inputed will be test with all the values in the array, then 
************************/
bool NoDuplicate(int test_value, int arr[], int arr_size) {
	for (int i; i < arr_size; i++) {
		if (test_value == *(arr + i)) {
			return false;
		}
	}
	return true;
}

/***********************
FUNCTION NAME: GenWinNums
INPUT: nothing
OUTPUT: a int value from 1-40
DESCRIPTION: The function will randomly generate a number from 1-40. The number then will be tested using the NoDuplicate() function. If the function return true, then the number will be add in its' corresponding slot in WinningNum[] array. If false, another number will be randomly generated and test again using the NoDuplicate() function, looping until the function return true. 
************************/
int GenWinNums() {
	
}

