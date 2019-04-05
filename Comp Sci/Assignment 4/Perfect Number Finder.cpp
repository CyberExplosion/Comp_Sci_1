//Khoi Nguyen
//CS1, Section #0109
//Assignment #4, Problem #1
//Summary: A program that asks the user for input for two integer values. The program then print out a message when a perfect number is found between those two value.

#include <iostream>
using namespace std;

int main() {
	/*Pseudo Code
	Input:
		prompt user to enter 2 integer
		check if the user enter 2 integer or char, double, etc -> Function check data type
	Processing:
		Range of finding is between those 2 integer --> increment the first integer for every time the perfect number finding loop complete *until* it reaches the 2nd integer

		Perfect number: -> Function
			\
			sum of all proper divisor is equal to the number itself
				\
				proper divisor = number / (given number minus 1 until it reach 1) with no remainder
					\
					all lower number till 1 = (Number - 1) nth times till it equal to 1
					|
					no remainder = (choose number) modulus(%) for each lower number to see if they equal to 0
						\
						****
						loop (given number keep minus 1 until it reach 1){
							if (given number % (lower number) == 0)
								--- that means the lower number is a proper division of the given number ---
									then add that lower number to the *sum of proper division number*
						} 
						****
				After the loop end, we got the total sum of the proper division number
			/
			if the sum of proper division == to the given number -> it's a perfect number

		******************	--->>> DETERMINE IF ONE NUMBER IS A FACTOR OF ANOTHER OR NOT
		FUNCTION NAME: AFactor 
		INPUT: 2 int
		OUTPUT: boolean value
		DESCRIPTION: The Function will determine if the second number is the factor of the first number
		******************
		boolean AFactor(int 1, int 2):
		 -- int 1 is the ceiling value, int 2 is decrementing by 1 --
			\
			if (int 1 % int 2 == 0) -> int 2 is a factor of int 1 -> true
			else -> int 2 is not a factor of int 1 -> false
		
		return boolean

		******************
		FUNCTION NAME: Function_Result
		INPUT: int start_value, int end_value
		OUTPUT: display the result of other function
		DESCRIPTION: The function will display all the perfect numbers founded inside that range. And display the prompt if there are no perfect number inside the range
		******************

		******************
		FUNCTION NAME: 

	*/


	return 0;
}