//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//
//class Fishing {
//private:
//	int total_pts = 0;
//	int die_sides;
//	const string CATCHES[6] = { "a huge fish", "an old shoe", "a little fish", "a star fish", "a treasure chest", "a piranha" };
//	const int PTS[6] = { 100,10,50,70,150,-50 };
//	void toss();
//public:
//	Fishing() {
//		die_sides = 0;
//	}
//	void play();
//	int total_points() {
//		return total_pts;
//	}
//};
//
//int main() {
//	char choice;
//	int rounds = 0;
//	Fishing p1;
//
//	cout << "Welcome the game of fishing\n"
//		<< "Where you will use a dice to determine what fish you catch. It's totally luck based, so there is no need for any skills or previous experience with fishing to win this game\n";
//
//	do {
//		cout << endl;
//		rounds++;
//		cout << "Rounds " << rounds << ": \n";
//		cout << "Dice Throw: ";
//		Sleep(1000);
//		cout << "You got: ";
//		p1.play();
//		cout << endl << "Do you want to play another round or end the game and get your current points?\n"
//		<< "(Y/N): ";
//		cin >> choice;
//	} while (toupper(choice)=='Y');
//
//	cout << endl << "------------------------------------\n";
//	cout << "Your total score is: " << p1.total_points() << endl;
//	if (p1.total_points() <= 100) {
//		cout << "You still need more training\n";
//	}
//	else {
//		if (p1.total_points() <= 500) {
//			cout << "You're pretty good\n";
//		}
//		else {
//			if (p1.total_points() <= 1000) {
//				cout << "You're outstanding\n";
//			}
//			else {
//				cout << "You're a legendary fisherman, your feats will be remembered till the end of time\n";
//			}
//		}
//	}
//
//
//	return 0;
//}
//
//void Fishing::toss() {
//	srand(time(0));
//	die_sides = rand() % 6;
//}
//
//void Fishing::play() {
//	toss();
//	cout << CATCHES[die_sides];
//	total_pts += PTS[die_sides];
//}
