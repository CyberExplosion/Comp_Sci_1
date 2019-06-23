//#include <iostream>
//#include <string>
//using namespace std;
//// Modified for problem 4
//struct Person {
//	string name;
//	int age;
//};
//
//void sortArrayofPointers(Person* pArr[], int size) {
//	bool swap_flag = true;
//	do {
//		swap_flag = false;
//		for (int i = 0; i < size - 1; i++) {
//			if ((*(pArr + i))->age < (*(pArr + i + 1))->age ) {
//				swap(*(pArr + i), *(pArr + i + 1));
//				swap_flag = true;
//			}
//		}
//	} while (swap_flag == true);
//}
//
//int main() {
//	Person data[3];
//	Person* pData[3];
//	for (int k = 0; k < 3; k++) {
//		cout << "Enter name of person " << k + 1 << ": ";
//		getline(cin, (data + k)->name);
//		do {
//			cout << "Enter the age of " << (data + k)->name << ": ";
//			cin >> (data + k)->age;
//			if ((data + k)->age < 0) {
//				cout << "Please enter a positive number for age\n";
//			}
//			cin.ignore(100, '\n'); cin.clear(); cin.sync();
//		} while ((data + k)->age < 0);
//	}
//	for (int i = 0; i < 3; i++) {
//		pData[i] = &data[i];
//	}
//	sortArrayofPointers(pData, 3);
//	for (Person* val : pData) {
//		cout << val->name << ": " << val->age << endl;
//	}
//
//	return 0;
//}