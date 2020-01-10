//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
////Function prototypes
//void displayMenu();
//int getChoice();
//void makeJackOLantern();
//
////Global constants
//const int QUIT = 6, MAX_CHOICE = 6;
//
//int main() {
//	int colorChoice;
//	//Get the handle to standard output device (The console)
//	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	do {
//		SetConsoleTextAttribute(screen, 7);	//Set to white on black
//		displayMenu();
//		colorChoice = getChoice();
//
//		if (colorChoice != QUIT) {
//			SetConsoleTextAttribute(screen, colorChoice + 9);
//			makeJackOLantern();
//		}
//	} while (colorChoice != QUIT);
//}
//
///****************************
//display menu
//This function displays the menu of color choices.
//****************************/
//void displayMenu() {
//	system("cls");	//Clear the screen
//	cout << "I will draw a Jack-o-lantern. What color should it be?\n\n"
//		<< "Enter 1 for Green   2 for Blue   3 for Red\n"
//		<< "      4 for Purple  5 for Yellow 6 to Quit: ";
//}
//
///*******************************
//getChoice
//This function inputs, validates, and returns
//the user's menu choice
//********************************/
//int getChoice() {
//	int choice;
//
//	cin >> choice;
//	while (choice< 1 || choice > MAX_CHOICE) {
//		cout << "\nThe only valid choices are 1-" << MAX_CHOICE
//			<< ". Please re-enter.";
//		cin >> choice;
//	}
//	return choice;
//}
//
///**********************************
//makeJackOLantern
//This function draws a Jack-o-lantern
//in whatever color the user selected.
//**********************************/
//void makeJackOLantern() {
//	cout << "\n\n";
//	cout << "                        ^    ^\n";
//	cout << "                           *  \n";
//	cout << "                        \\_____/   " << endl;
//	cout << "\n\n     Press ENTER to return to the menu.";
//	cin.get(); //Clear the previous \n out of the input buffer
//	cin.get(); //Wait for the user to press ENTER
//}