////Include in with challenge 13
////Include in with challenge 14
////This is kinda annyoing, not gona do it XD
//
//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//int main() {
//	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
//	//Start position for the Upper
//	COORD up = { 36,24 };
//	//Lower
//	COORD down = { 41,0 };
//	COORD left = { 75, 14 },
//		right = { 0,10 };
//	SetConsoleCursorPosition(screen, up);
//	cout << "UP";
//	SetConsoleCursorPosition(screen, down);
//	cout << "DOWN";
//	SetConsoleCursorPosition(screen, left);
//	cout << "LEFT";
//	SetConsoleCursorPosition(screen, right);
//	cout << "RIGHT";
//	Sleep(100);
//
//	//Loop 3 times
//	for (int i = 0; i < 3; i++) {
//		while (up.Y > 0 && down.Y < 24 && left.X > 0 && right.X < 75) {
//			SetConsoleCursorPosition(screen, left);
//			cout << "    ";
//			SetConsoleCursorPosition(screen, right);
//			cout << "     ";
//			SetConsoleCursorPosition(screen, up);
//			cout << "  ";
//			SetConsoleCursorPosition(screen, down);
//			cout << "    ";
//			//Gota erase the word after every loop to push in new word
//			up.Y--;
//			SetConsoleCursorPosition(screen, up);
//			cout << "UP";
//			down.Y++;
//			SetConsoleCursorPosition(screen, down);
//			cout << "DOWN";
//			left.X -= 6;
//			right.X += 6;
//			SetConsoleCursorPosition(screen, left);
//			cout << "LEFT";
//			SetConsoleCursorPosition(screen, right);
//			cout << "RIGHT";
//			Sleep(100);
//		}
//		//Disappear
//		SetConsoleCursorPosition(screen, up);
//		cout << "  ";
//		SetConsoleCursorPosition(screen, down);
//		cout << "    ";
//		SetConsoleCursorPosition(screen, left);
//		cout << "    ";
//		SetConsoleCursorPosition(screen, right);
//		cout << "     ";
//		//Reset positions
//		up = { 35,24 };
//		down = { 39,0 };
//		left = { 75, 14 };
//		right = { 0,10 };
//		SetConsoleCursorPosition(screen, up);
//		cout << "UP";
//		SetConsoleCursorPosition(screen, down);
//		cout << "DOWN";
//		SetConsoleCursorPosition(screen, left);
//		cout << "LEFT";
//		SetConsoleCursorPosition(screen, right);
//		cout << "RIGHT";
//		Sleep(100);
//	}
//	//Disappear
//	SetConsoleCursorPosition(screen, up);
//	cout << "  ";
//	SetConsoleCursorPosition(screen, down);
//	cout << "    ";
//	SetConsoleCursorPosition(screen, left);
//	cout << "    ";
//	SetConsoleCursorPosition(screen, right);
//	cout << "     ";
//
//	return 0;
//}