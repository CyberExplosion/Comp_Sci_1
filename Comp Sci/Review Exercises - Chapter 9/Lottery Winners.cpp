////Add challenge 3
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool linearSearch(const vector<int>& winning_list, const vector<int>& player_list) {
//	for (int p_val : player_list) {
//		for (int w_val : winning_list) {
//			if (p_val == w_val) {
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//bool binarySearch(const vector<int>& winning_list, const vector<int>& player_list) {
//
//	vector<int> winning = winning_list;
//	//Sort first, selection sort
//	for (int i = 0; i < winning.size() - 1; i++) {
//		//Starting at i = 0
//		for (int k = i + 1; k < winning.size(); k++) {
//			if (winning[k] < winning[i]) {
//				swap(winning[k], winning[i]);
//			}
//		}
//	}
//	//first = first index, last = last index, middle = middle index
//	//Binary search for an array
//	for (int val : player_list) {
//		int first = 0, last = winning.size() - 1;
//		while (first <= last) {
//			int middle = (first + last) / 2;
//			if (val == winning[middle]) {
//				return true;
//			}
//			if (val < winning[middle]) {
//				last = middle - 1;
//			}
//			if (val > winning[middle]) {
//				first = middle + 1;
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//	vector<int>winning = { 13579,26791,26792,33445,55555,62483,77777,79422,85647,93121 };
//	vector<int>player = { 13555,26791,11255,03215,12358,12345,22365,15789,54689,93121 };
//	if (binarySearch(winning, player)) {
//		cout << "You have at least a winning number\n";
//	}
//	else cout << "Sorry, you have no winning number, better luck next time\n";
//
//	return 0;
//}