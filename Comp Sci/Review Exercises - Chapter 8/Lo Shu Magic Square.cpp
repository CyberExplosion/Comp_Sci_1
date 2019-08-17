//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool isMagicSquare(const vector<vector<int>> square3_by3) {
//	//Using the first row
//	int intended_num = square3_by3[0][0] + square3_by3[0][1] + square3_by3[0][2];
//
//	if (square3_by3.size() * square3_by3[0].size() != 9) {
//		cout << "Only allows a square of 3 x 3 size\n";
//		return false;
//	}
//	else {
//		for (int i = 0; i < square3_by3.size(); i++) {
//			//Row
//			if (square3_by3[i][0] + square3_by3[i][1] + square3_by3[i][2] != intended_num) {
//				return false;
//			}
//			//Column
//			if (square3_by3[0][i] + square3_by3[1][i] + square3_by3[2][i] != intended_num) {
//				return false;
//			}
//		}
//		//Diagonal - 1
//		if (square3_by3[0][0] + square3_by3[1][1] + square3_by3[2][2] != intended_num) {
//			return false;
//		}
//		//Diagonal - 2
//		if (square3_by3[0][2] + square3_by3[1][1] + square3_by3[2][0] != intended_num) {
//			return false;
//		}
//		//Finally
//		return true;
//	}
//}
//
//int main() {
//	vector<vector<int>> square = { {4,9,2},{3,5,7},{8,1,6} };
//
//	cout << "1 for true and 0 for false: " << isMagicSquare(square) << endl;
//
//	return 0;
//}