//#include <iostream>
//#include <vector>
//using namespace std;
//
//void sortSelection(vector<int>& num) {
//	//Sort selection
//	for (int i = 0; i < num.size() - 1; i++) {
//		for (int k = i + 1; k < num.size(); k++) {
//			if (num[i] > num[k]) {
//				swap(num[i], num[k]);
//			}
//		}
//	}
//}
//
//int searchLinear(const vector<int>& num, int search) {
//	int count = 0;
//	for (int i = 0; i < num.size(); i++) {
//		count++;
//		if (num[i] == search) {
//			cout << "The total number of comparison made in Linear search: " << count << endl;
//			return i;
//		}
//	}
//	//No number here
//	return -1;
//}
//
//int searchBinary(const vector<int>& num, int search) {
//	int count = 0;
//	int first = 0,
//		last = num.size() - 1;
//
//	//Search
//	while (first <= last) {
//		count++;
//		int middle = (first + last) / 2;
//		if (num[middle] == search) {
//			cout << "The total number of comparison made in Binary search: " << count << endl;
//			return middle;
//		}
//		if (num[middle] < search) {
//			first = middle + 1;
//		}
//		if (num[middle] > search) {
//			last = middle - 1;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	vector<int>num = { 10,20,30,11,21,23,15,64,78,21,21,87,94,12,12,65,94,87,51,21 };
//
//	sortSelection(num);
//	cout << "The position at (Linear Search): " << searchLinear(num, 94) << endl;
//	cout << "The position at (Binary Search): " << searchBinary(num, 94) << endl;
//
//	return 0;
//}