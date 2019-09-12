//#include <iostream>
//#include <vector>
//using namespace std;
//
//int sortBubble(vector<int>& num) {
//	int count = 0;
//	bool swap_flag = false;
//	do {
//		swap_flag = false;
//		for (int i = 0; i < num.size() - 1; i++) {
//			if (num[i] > num[i + 1]) {
//				swap_flag = true;
//				swap(num[i], num[i + 1]);
//				count++;
//			}
//		}
//	} while (swap_flag == true);
//	return count;
//}
//
//int sortSelection(vector<int>& num) {
//	int count = 0;
//
//	for (int i = 0; i < num.size() - 1; i++) {
//		for (int k = i + 1; k < num.size(); k++) {
//			if (num[i] > num[k]) {
//				swap(num[i], num[k]);
//				count++;
//			}
//		}
//	}
//	return count;
//}
//
//int main() {
//	vector<int>num1 = { 10,11,22,33,10,12,45,78,94,12,66,45,12,15,68,46,17,13,89,51 };
//	vector<int>num2 = { 10,11,22,33,10,12,45,78,94,12,66,45,12,15,68,46,17,13,89,51 };
//
//	cout << "The number of swap Bubble made: " << sortBubble(num1) << endl;
//	cout << "The number of swap Selection made: " << sortSelection(num2) << endl;
//
//	return 0;
//}