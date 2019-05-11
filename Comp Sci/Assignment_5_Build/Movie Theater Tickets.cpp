#include <iostream>
#include <fstream>
using namespace std;

void readPrice(int[], int);

int main_done2() {
/*Pseudo Code
Input:
	prices.txt
	user choice
	user seat number
Processing:
	Function Show_seats()
		\
		Display the seat charts
			\
			Initialize all to empty seats
	|
	Function readPrice()
		\
		use the value in prices.txt
			\
			put the value in the array "price[]"
	|
	Function Receipt()
		\
		display tickets sold and total revenue
			|
			ticket sold
				\
				count how many time the program loop, that many loop is equal to the amount of ticket they bought
			|
			total revenue
				\
				create an array called "total_row[15]" that hold 15 slots because there are 15 rows
					\
					each slot in the array will store the number of tickets sold for 1 row. Example: tickets sold for row 1 ---> total_row[0]=4
					That means 4 tickets were sold for row 1.
				|
				use the value in that array times with the corresponding price of each row in the array "price[]" created from function readPrice()
	
	Overall Structure:
		{Want to buy?}	----------------------------
			|										|
			Yes										|
			|										|
>-------[Choosing seats]							|
Yes			|										|
|	[Update the seat chart and Display]				No
|			|										|
^-------{Want to buy again?}						|
			|										|
			No										|
			|										|
	[Display the ticket sold and the revenue]	<----
			|
			end
*/
	return 0;
}

/*************************
FUNCTION NAME: readPrice
INPUT: an array and its' size
OUTPUT: Nothing
DESCRIPTION: The function read in the file "prices.txt" and input each value in that file into the array
**************************/
void readPrice(int row_price[], int size) {
	ifstream inputFile;
	inputFile.open("prices.txt");
	int price;

	if (inputFile) {
		for (int i = 0; i < size; i++) {
			inputFile >> price;
			*(row_price) = price;
		}
	}
	return;
}