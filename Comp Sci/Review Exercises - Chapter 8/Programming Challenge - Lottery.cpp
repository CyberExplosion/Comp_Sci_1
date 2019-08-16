//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//int main() {
//	vector<int> winningDigits(5);
//	vector<int> player(5);
//	int count = 0;
//
//	srand(time(0));
//	for (int i = 0; i < winningDigits.size();i++) {
//		winningDigits[i] = rand() % 9 + 1;
//	}
//
//	for (int k = 0; k < player.size(); k++) {
//		cout << "Enter the digit for the number " << k+1 << " slot between 1 and 9: ";
//		cin >> player[k];
//	}
//
//	for (int j = 0; j < winningDigits.size(); j++) {
//		if (winningDigits[j] == player[j]) {
//			count++;
//		}
//	}
//
//	for (int m = 0; m < winningDigits.size(); m++) {
//		cout << winningDigits[m] << " ";
//	}
//	cout << endl;
//	for (int n = 0; n < player.size(); n++) {
//		cout << player[n] << " ";
//	}
//	cout << endl;
//	cout << "The number of matches you got are: " << count << endl;
//
//	return 0;
//}