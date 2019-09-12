//#include <iostream>
//#include <vector>
//using namespace std;
//
//void ascendingSortBubble(vector<int>& num) {
//	bool swap_flag = false;
//	do {
//		swap_flag = false;
//		for (int i = 0; i < num.size() - 1; i++) {
//			if (num[i] > num[i + 1]) {
//				swap_flag = true;
//				swap(num[i], num[i + 1]);
//				//Display the array content
//				for (int val : num) {
//					cout << val << " ";
//				}
//				cout << "\n-------------------------------\n";
//			}
//		}
//	} while (swap_flag == true);
//	cout << "========================================\n";
//}
//
//void ascendingSelectionSort(vector<int>& num) {
//	for (int i = 0; i < num.size() - 1; i++) {
//		for (int k = i + 1; k < num.size(); k++) {
//			if (num[i] > num[k]) {
//				swap(num[i], num[k]);
//			}
//		}
//		//Display the content
//		for (int val : num) {
//			cout << val << " ";
//		}
//		cout << "\n----------------------------------\n";
//	}
//	cout << "==========================================\n";
//}
//
//int main() {
//	vector<int>num1 = { 56,12,30,45,68,79,10,56 };
//	vector<int>num2 = { 56,12,30,45,68,79,10,56 };
//
//	for (int val : num1) {
//		cout << val << " ";
//	}
//	cout << "\n---------------------------------\n";
//	ascendingSortBubble(num1);
//	cout << "Selection sort: \n";
//	for (int val : num2) {
//		cout << val << " ";
//	}
//	cout << "\n------------------------------------\n";
//	ascendingSelectionSort(num2);
//
//	return 0;
//}