//Khoi Nguyen
//CS1, section #0109
//Assignment #5, Problem #2
//Write a program that can be used by a small theater to sell tickets for performances.
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/*//global variables
const int row = 15;
const int cols = 20;

//Variables
char table[row][cols];
*/

//function prototype
void showseats(char numbers[][20], int ROWS, int COLS);
bool Menu(char[][20],int, int);
void readPrice(int[], int);
double Receipt(char[][20], int[], int, int);
void chooseSeats(char[][20], int, int, int*);

int main() {
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
	const int ROWS = 15,
		COLS = 20;
	char seat_chart[ROWS][COLS];
	int rowprice[ROWS];
	bool buyer_decision;
	int ticket_counter = 0;

	//Fills back the * in everything
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			seat_chart[i][j] = '*';
		}
	}
	do {
		//Introduction
		cout << "* Seats available" << endl;
		cout << "# Reserved seats" << endl;
		cout << "Seats:";

		for (int i = 0; i < 20; ++i) {
			cout << right << setw(3) << i;
		}
		cout << endl;
		showseats(seat_chart, ROWS, COLS);
		buyer_decision = Menu(seat_chart, ROWS, COLS);
		if (buyer_decision == false) {
			break;
		}
		readPrice(rowprice, ROWS);
		chooseSeats(seat_chart, ROWS, COLS, &ticket_counter);
	} while (buyer_decision == true);
	
	cout << endl;
	cout << "UPDATED SEATING CHART AND SALES INFO: " << endl << endl;
	cout << "Seats:";

	for (int i = 0; i < 20; ++i) {
		cout << right << setw(3) << i;
	}
	cout << endl;

	showseats(seat_chart, ROWS, COLS);
	
	cout << endl;
	cout << "TOTAL TICKET SOLD: " << ticket_counter << endl;
	cout << "TOTAL REVENUE: $ " << showpoint << fixed << setprecision(2) << Receipt(seat_chart, rowprice, ROWS, COLS);
	cout << endl;
	return 0;
}
void showseats(char numbers[][20], int ROWS,int COLS) {
	//Displays table
	for (int k = 0; k < ROWS; k++) {
		cout << "Row " << right << setw(2) << k;
		for (int l = 0; l < COLS; l++) {
			cout << right << setw(3) << numbers[k][l];
		}
		cout << endl;
	}
	cout << endl;

}
bool Menu(char seat_array[][20],int rows,int cols) {
	//Variable
	int choice,
		result = false;

	do {
		//Show the user the menu
		cout << "Menu:" << endl;
		cout << "1) Buy Ticket " << endl;
		cout << "2) Total sale and exit" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 1)
			result = true;
		if (choice == 2)
			result = false;
		if (choice != 1 && choice != 2) {
			cout << "Invalid choice" << endl;
			cout << endl;
			cout << "* Seats available" << endl;
			cout << "# Reserved seats" << endl;
			cout << "Seats:";

			for (int i = 0; i < 20; ++i) {
				cout << right << setw(3) << i;
			}
			cout << endl;
			showseats(seat_array, rows, cols);
			cout << endl;
		}

	} while (choice != 1 && choice != 2);
	return result;
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
			*(row_price + i) = price;
		}
	}
	return;
}

/***************************
FUNCTION NAME: Receipt
INPUT: value from the array show_seat[] array, value from the row_price[] array, number of rows, number of columns, value from choose_seat()
OUTPUT: total revenue
DESCRIPTION: The function will take in the number of times the function choose_seats() loops to see how many tickets were bought. The program then will take in the array show_seats[] to check for the number of taken seats on each individual row. Then it use the number of tickets bought for each rows showing in the seat chart to put in a new array total_row[15] that stores the number of tickets bought for each rows. Then it will use the value in total_row[15] with the value from row_price[] array together and compute the total revenue
****************************/
double Receipt(char seat_chart[][20], int each_row_price[], int rows, int columns) {
	int total_row[15];
	double	total_revenue = 0;

	//Populate the array
	for (int p = 0; p < 15; p++) {
		total_row[p] = 0;
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (seat_chart[i][j] == '#') {
				// Increment the value by 1 if there is a ticket of that row bought
				total_row[i]++;
			}
		}
	}

	for (int k = 0; k < rows; k++) {
		total_revenue += total_row[k] * each_row_price[k];
	}

	return total_revenue;
}

/****************************
FUNCTION NAME: chooseSeat
INPUT: seat_chart[] array, its size and the ticket counter pass as reference
OUTPUT: nothing
DESCRIPTION: The function replaces the * with # sign to represents the seats that are taken. The function ask for the user row and column, then change the sign using those value in the seat_chart[] array. If the seats were taken, the function loops back to let the user choose another seats that are available. After succeeding choosing the seat, the function increase the counter by 1 to represents the number of tickets bought
*****************************/
void chooseSeats(char seat_table[][20], int rows, int cols, int *ticket_counters) {
	int user_row,
		user_seat;

	cout << endl;
	cout << "Enter row: ";
	cin >> user_row;
	cout << "Enter seat: ";
	cin >> user_seat;

	if (seat_table[user_row][user_seat] == '#') {
		cout << "Invalid seat choice\n\n";
		return;
	}

	seat_table[user_row][user_seat] = '#';

	*ticket_counters+=1;
	return;
}
