//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//int main() {
//	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD pos = { 40,3 };	//Set position
//	SetConsoleCursorPosition(screen, pos);
//	cout << "0" << endl;
////	Sleep(500);
//
//	//Watch the yoyo go down & back up 3 times
//	for (int tossIt = 1; tossIt <= 3; tossIt++) {
//		//Yoyo unwind
//		while (pos.Y <= 20) {
//			//Move the cursor down 1 position and then pause
//			SetConsoleCursorPosition(screen, pos);
//			cout << '|' << endl;
//			pos.Y++;
//			SetConsoleCursorPosition(screen, pos);
//			cout << "0" << endl;
//			Sleep(100);
//		}
//
//		//Yoyo winds back up
//		while (pos.Y > 3) {
//			//Erase character at current position
//			//Move yoyo up one position, then pause
//			SetConsoleCursorPosition(screen, pos);
//			cout << " " << endl;
//			pos.Y--;
//			SetConsoleCursorPosition(screen, pos);
//			cout << "0" << endl;
//			Sleep(100);
//		}
//	}
//}