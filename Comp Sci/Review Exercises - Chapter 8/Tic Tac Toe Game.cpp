//#include <iostream>
//#include <vector>
//using namespace std;
//
//class TicTacToe {
//private:
//	//board 3x3
//	//The required syntax for in-place initialization of data members does not allow the () initialization syntax common with non-members
//	vector<vector<char>>board = vector<vector<char>>(3, vector<char>(3,'*'));
//
//	char player1,
//		player2;
//	bool checkWinner(char);
//	bool tableFull();
//public:
//	TicTacToe() :player1('X'), player2('O') {};
//	void displayBoard();
//	bool player1Play(int, int);
//	bool player2Play(int, int);
//	bool result(char);
//	bool isTableFull() {
//		return tableFull();
//	}
//};
//
//int main() {
//	TicTacToe game1;
//	int row, cols;
//	bool loop_flag = false;
//
//	cout << "WELCOME TO THE GAME OF TIC-TAC-TOE\n";
//	cout << "------------------------------------\n";
//	cout << "Player 1 will use 'X' as their mark\n"
//		<< "Player 2 will use 'O' as their mark\n";
//	cout << endl;
//
//	do {
//		game1.displayBoard();
//		cout << "--------------------------------------------\n";
//		cout << "PLAYER 1 TURN \n";
//		do {
//			loop_flag = false;
//			cout << "Enter the row: ";
//			cin >> row;
//			cout << "Enter the column: ";
//			cin >> cols;
//			if (!game1.player1Play(row, cols)) {
//				loop_flag = true;
//				cout << "The number is invalid, please try again\n";
//			}
//		} while (loop_flag == true);
//		//break right here
//		if (game1.result('X')) {
//			break;
//		}
//		cout << "==========================================\n";
//		game1.displayBoard();
//		cout << "------------------------------------------\n";
//		cout << "PLAYER 2 TURN \n";
//		do {
//			loop_flag = false;
//			cout << "Enter the row: ";
//			cin >> row;
//			cout << "Enter the column: ";
//			cin >> cols;
//			if (!game1.player2Play(row, cols)) {
//				loop_flag = true;
//				cout << "The number is invalid, please try again\n";
//			}
//		} while (loop_flag == true);
//		cout << "===========================================\n";
//	} while (!game1.result('X') || !game1.result('O'));
//
//	cout << endl;
//	cout << "Final Board: \n";
//	game1.displayBoard();
//	cout << "=============================================\n";
//	if (game1.isTableFull()) {
//		cout << "The game ended with a tie\n";
//	}
//	else {
//		if (game1.result('X') && !game1.isTableFull()) {
//			cout << "PLAYER 1 WON THE GAME!!!\n";
//		}
//		else {
//			if (game1.result('O') && !game1.isTableFull()) {
//				cout << "PLAYER 2 WON THE GAME!!!\n";
//			}
//		}
//	}
//
//	return 0;
//}
//
//bool TicTacToe::checkWinner(char player_symbol) {
//	//Player win case
//	for (int i = 0; i < 3; i++) {
//		//Row
//		if (board[i][0] == player_symbol && board[i][1] == player_symbol && board[i][2] == player_symbol) {
//			return true;
//		}
//		//Column
//		if (board[0][i] == player_symbol && board[1][i] == player_symbol && board[2][i] == player_symbol) {
//			return true;
//		}
//	}
//	//Diagonal
//	if (board[0][0] == player_symbol && board[1][1] == player_symbol && board[2][2] == player_symbol) {
//		return true;
//	}
//	if (board[0][2] == player_symbol && board[1][1] == player_symbol && board[2][0] == player_symbol) {
//		return true;
//	}
//	//Other case
//	return false;
//}
//
//bool TicTacToe::tableFull() {
//	for (char ch : board[0]) {
//		if (ch == '*') {
//			return false;
//		}
//	}
//	for (char ch : board[1]) {
//		if (ch == '*') {
//			return false;
//		}
//	}
//	for (char ch : board[2]) {
//		if (ch == '*') {
//			return false;
//		}
//	}
//	//It's full
//	return true;
//}
//
//void TicTacToe::displayBoard() {
//	cout << "  0  1  2\n";
//	for (int i = 0; i < board.size(); i++) {
//		cout << i << " ";
//		for (int k = 0; k < board[0].size(); k++) {
//			cout << board[i][k] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//bool TicTacToe::player1Play(int row, int cols) {
//	if ((row > 2 || row < 0 ) || (cols > 2 || cols < 0)) {
//		return false;
//	}
//	if (board[row][cols] == '*') {
//		board[row][cols] = 'X';
//		return true;
//	}
//	//Already taken
//	else return false;
//}
//
//bool TicTacToe::player2Play(int rows, int cols) {
//	if ((rows > 2 || rows < 0) || (cols > 2 || cols < 0)) {
//		return false;
//	}
//	if (board[rows][cols] == '*') {
//		board[rows][cols] = 'O';
//		return true;
//	}
//	else return false;
//}
//
//bool TicTacToe::result(char symbol) {
//	if (checkWinner(symbol)) {
//		//cout << "PLAYER WITH " << symbol << " WON THE GAME!!!\n";
//		return true;
//	}
//	if (tableFull()) {
//		return true;
//	}
//	return false;
//}
