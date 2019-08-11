//#include <iostream>
//#include <iomanip>
//#include <Windows.h>
//using namespace std;
//
//struct MonthlyBudget {
//	double housing,
//		utilities,
//		household_expenses,
//		transportation,
//		food,
//		medical,
//		insurance,
//		entertainment,
//		clothing,
//		miscellaneous;
//	//Default budget
//	MonthlyBudget() {
//		housing = 500;
//		utilities = 150;
//		household_expenses = 65;
//		transportation = 50;
//		food = 250;
//		medical = 30;
//		insurance = 100;
//		entertainment = 150;
//		clothing = 75;
//		miscellaneous = 50;
//	}
//}budget;
//
////The function will place the cursor onto the screen with respected rows and columns
//void placeCursor(HANDLE screen, int col, int row) {
//	//COORD is a defined C++ structure that holds a pair of X and Y coordinates
//	COORD position;
//	position.Y = row;
//	position.X = col;
//	SetConsoleCursorPosition(screen, position);
//}
//
////Creating the menu and place for user to put in info
//void displayPrompts(HANDLE screen) {
//	placeCursor(screen, 0, 0);
//	cout << "********************************** Data Entry Form *******************************\n";
//	cout << showpoint << fixed << setprecision(2);
//	cout << left;
//	cout << endl << endl << endl;
//	cout << setw(25) << "Housing " << budget.housing << endl;
//	//placeCursor(screen, 4, 1);
//	cout << setw(25) << "Utilities " << budget.utilities << endl;
//	//placeCursor(screen, 5, 1);
//	cout << setw(25) << "Household expenses " << budget.household_expenses << endl;
//	//placeCursor(screen, 6, 1);
//	cout << setw(25) << "Transportation " << budget.transportation << endl;
//	//placeCursor(screen, 7, 1);
//	cout << setw(25) << "Food " << budget.food << endl;
//	//placeCursor(screen, 8, 1);
//	cout << setw(25) << "Medical " << budget.medical << endl;
//	//placeCursor(screen, 9, 1);
//	cout << setw(25) << "Insurance " << budget.insurance << endl;
//	cout << setw(25) << "Entertainment " << budget.entertainment << endl;
//	cout << setw(25) << "Clothing " << budget.clothing << endl;
//	cout << setw(25) << "Miscellaneous " << budget.miscellaneous << endl;
//}
//
////This allow the user to input the info in the correct and ordered categories
//void getUserInput(HANDLE screen, MonthlyBudget& input) {
//	placeCursor(screen, 40, 4);
//	cin >> input.housing;
//	placeCursor(screen, 40, 5);
//	cin >> input.utilities;
//	placeCursor(screen, 40, 6);
//	cin >> input.household_expenses;
//	placeCursor(screen, 40, 7);
//	cin >> input.transportation;
//	placeCursor(screen, 40, 8);
//	cin >> input.transportation;
//	placeCursor(screen, 40, 9);
//	cin >> input.food;
//	placeCursor(screen, 40, 10);
//	cin >> input.medical;
//	placeCursor(screen, 40, 11);
//	cin >> input.insurance;
//	placeCursor(screen, 40, 12);
//	cin >> input.entertainment;
//	placeCursor(screen, 40, 13);
//	cin >> input.clothing;
//	placeCursor(screen, 40, 14);
//	cin >> input.miscellaneous;
//}
//
//void amountOverorUnder(HANDLE screen, MonthlyBudget& actual) {
//	placeCursor(screen, 50, 3);
//	cout << "Money left after budgeting";
//	placeCursor(screen, 50, 4);
//	cout << budget.housing - actual.housing;
//	placeCursor(screen, 50, 5);
//	cout << budget.utilities - actual.utilities;
//	placeCursor(screen, 50, 6);
//	cout << budget.household_expenses - actual.household_expenses;
//	placeCursor(screen, 50, 7);
//	cout << budget.transportation - actual.transportation;
//	placeCursor(screen, 50, 8);
//	cout << budget.food - actual.food;
//	placeCursor(screen, 50, 9);
//	cout << budget.medical - actual.medical;
//	placeCursor(screen, 50, 10);
//	cout << budget.insurance - actual.insurance;
//	placeCursor(screen, 50, 11);
//	cout << budget.entertainment - actual.entertainment;
//	placeCursor(screen, 50, 12);
//	cout << budget.clothing - actual.clothing;
//	placeCursor(screen, 50, 13);
//	cout << budget.miscellaneous - actual.miscellaneous;
//}
//
//int main() {
//	//Get the handle to standard output device (The console)
//	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
//	MonthlyBudget actual_usage;
//	displayPrompts(screen);
//	getUserInput(screen, actual_usage);
//	amountOverorUnder(screen, actual_usage);
//
//	return 0;
//}