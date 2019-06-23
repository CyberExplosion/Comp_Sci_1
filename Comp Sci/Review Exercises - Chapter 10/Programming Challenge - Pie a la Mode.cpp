//#include <iostream>
//#include <vector>
//using namespace std;
//
//int findMode(vector<int> arr, int size) {
//	int mode = 0;
//	int lower_num_appear = 0;
//	int num_appear;
//	for (int val : arr) {
//		num_appear = 0;
//		for (int i = 0; i < arr.size(); i++) {
//			if (val == arr[i]) {
//				num_appear++;
//			}
//		}
//		if (lower_num_appear < num_appear || lower_num_appear == 0) {
//			mode = val;
//			lower_num_appear = num_appear;
//		}
//	}
//
//	return mode;
//}
//
//int main() {
//	const int NUM_PEP = 10;
//	vector<int>num_pie(NUM_PEP, 0);
//	for (int i = 0; i < NUM_PEP; i++) {
//		cout << "Enter the number of pies person " << i + 1 << " eat: ";
//		cin >> num_pie[i];
//	}
//	cout << "The mode of the pies pieces is: " << findMode(num_pie, NUM_PEP) << endl;
//
//	return 0;
//}