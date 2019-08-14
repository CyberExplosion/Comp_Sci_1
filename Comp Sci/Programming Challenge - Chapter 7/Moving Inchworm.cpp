//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//void clearing(HANDLE, COORD, COORD, COORD);
//void firstMove(HANDLE, COORD, COORD),
//secondMove(HANDLE, COORD, COORD);
//
//int main() {
//	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD antenna = { 8,0 },
//		head = { 8,1 },
//		body = { 0,2 };
//
//	do {
//		//Default
//		SetConsoleCursorPosition(screen, antenna);
//		cout << "\\/";
//		SetConsoleCursorPosition(screen, head);
//		cout << "00";
//		SetConsoleCursorPosition(screen, body);
//		cout << "~000000000";
//		Sleep(100);
//
//		//Stationary - first state
//		firstMove(screen, head, body);
//		Sleep(100);
//		secondMove(screen, head, body);
//		Sleep(100);
//		//Moving - second state
//		clearing(screen, antenna, head, body);
//		antenna.X++;
//		head.X++;
//		body.X++;
//		//Default reset
//		SetConsoleCursorPosition(screen, antenna);
//		cout << "\\/";
//		SetConsoleCursorPosition(screen, head);
//		cout << "00";
//		SetConsoleCursorPosition(screen, body);
//		cout << "~000000000";
//		firstMove(screen, head, body);
//		Sleep(100);
//		clearing(screen, antenna, head, body);
//		if (antenna.X == 90) {
//			antenna = { 8,0 };
//			head = { 8,1 };
//			body = { 0,2 };
//		}
//	} while (antenna.X <= 90);
//
//
//	return 0;
//}
//
//void clearing(HANDLE scr, COORD antenna, COORD head, COORD body) {
//	SetConsoleCursorPosition(scr, antenna);
//	cout << "   ";
//	head.X -= 4;
//	SetConsoleCursorPosition(scr, head);
//	cout << "       ";
//	SetConsoleCursorPosition(scr, body);
//	cout << "           ";
//}
//
//void firstMove(HANDLE screen, COORD head, COORD body) {
//	body.X += 5;
//	SetConsoleCursorPosition(screen, body);
//	cout << " ";
//	head.X -= 3;
//	SetConsoleCursorPosition(screen, head);
//	cout << "0  00";
//}
//
//void secondMove(HANDLE screen, COORD head, COORD body) {
//	body.X += 4;
//	SetConsoleCursorPosition(screen, body);
//	cout << "   ";
//	head.X -= 4;
//	SetConsoleCursorPosition(screen, head);
//	cout << "000 00";
//}
