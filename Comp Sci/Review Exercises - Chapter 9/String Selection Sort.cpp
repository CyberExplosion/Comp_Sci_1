////Added Challenges 7
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//void sortSelection(string name[], int size) {
//	for (int i = 0; i < size - 1; i++) {
//		for (int k = i + 1; k < size; k++) {
//			if (name[i] > name[k]) {
//				swap(name[i], name[k]);
//			}
//		}
//	}
//}
//
//int searchBinary(string name[], int size, string search) {
//	//Consider the array has been sorted
//	int first = 0,
//		last = size - 1;
//	while (first <= last) {
//		int middle = (last + first) / 2;
//		if (search == name[middle]) {
//			return middle;
//		}
//		if (search < name[middle]) {
//			last = middle - 1;
//		}
//		if (search > name[middle]) {
//			first = middle + 1;
//		}
//	}
//	//If no result found
//	return -1;
//}
//
//int main() {
//	const int SIZE = 5;
//	string name[SIZE] = { "Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim","Sanchez, Manny" };
//
//	sortSelection(name, SIZE);
//
//	for (string& val : name) {
//		cout << val << endl;
//	}
//
//	cout << "The location of the name is: " << searchBinary(name, SIZE, "Sanchez, Manny") << endl;
//
//	return 0;
//}