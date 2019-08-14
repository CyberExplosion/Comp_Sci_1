////Added Challenge 17
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//
//class Coin {
//private:
//	string side_up;
//public:
//	Coin() {
//		toss();
//	}
//	void toss();
//	string getSideUp() {
//		return side_up;
//	}
//};
//
//int main() {
//	//Coin coin;
//	Coin quarter,
//		dime,
//		nickel;
//	//int heads_count = 0,
//	//	tails_count = 0;
//	double starting_balance = 0;
//	int rounds = 0;
//
//	//cout << "The original side that facing up is: " << coin.getSideUp() << endl;
//
//	//cout << "Tossing...\n";
//	//for (int i = 0; i < 20; i++) {
//	//	Sleep(500);
//	//	coin.toss();
//	//	cout << "The side that facing up is: " << coin.getSideUp() << endl;
//	//	if (coin.getSideUp() == "heads") {
//	//		heads_count++;
//	//	}
//	//	else tails_count++;
//	//}
//	//cout << "The number of times heads is facing up: " << heads_count << endl
//	//	<< "The number of times tails is facing up: " << tails_count << endl;
//	cout << "Game Start: \n"
//		<< "Your starting balance is: " << starting_balance << endl;
//	do {
//		rounds++;
//		cout << endl;
//		cout << "Round " << rounds << ": " << endl;
//		cout << "Quarter's side:  ";
//		Sleep(500);
//		quarter.toss();
//		cout << quarter.getSideUp() << endl;
//		cout << "Dime's side: ";
//		Sleep(500);
//		dime.toss();
//		cout << dime.getSideUp() << endl;
//		cout << "Nickel's side: ";
//		Sleep(500);
//		nickel.toss();
//		cout << dime.getSideUp() << endl;
//		if (quarter.getSideUp() == "heads") {
//			starting_balance += 0.25;
//		}
//		if (dime.getSideUp() == "heads") {
//			starting_balance += 0.1;
//		}
//		if (nickel.getSideUp() == "heads") {
//			starting_balance += 0.05;
//		}
//		cout << "The balance now is: " << starting_balance << endl;
//	} while (starting_balance < 1.00);
//
//	if (starting_balance == 1.00) {
//		cout << "You win the game\n";
//	}
//	else {
//		cout << "You lose the game\n";
//	}
//
//	return 0;
//}
//
//void Coin::toss() {
//	srand(time(0));
//	int num = rand();
//	if (num % 2 == 0) {
//		side_up = "heads";
//	}
//	else side_up = "tails";
//}
