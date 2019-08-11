//#include <iostream>
//#include <algorithm>
//#include <fstream>
//#include <vector>
//using namespace std;
//
//struct People {
//	string name;
//	int age;
//};
//
//class LessThanAlpha {
//public:
//	bool operator()(People x, People y) {
//		return x.name < y.name;
//	}
//};
//
//class LessThanNum {
//public:
//	bool operator()(People x, People y){
//			return x.age < y.age;
//		} 
//};
//
//void printAlphabetOrder(vector<People>);
//void printNumAscendOrder(vector<People>);
//
//int main() {
//	fstream file("cocks and balls torture.txt", ios::in | ios::out);
//	People user;
//	vector<People> pep_list(0);
//	int choice;
//
//	if (file.fail()) {
//		cout << "Cannot open the file.\n";
//		return 1;
//	}
//	if (file.eof()) {
//		cout << "The file is empty.\n";
//		return 2;
//	}
////Fill the vector with data from file
//	while (!file.eof()) {
//		file >> user.name;
//		file >> user.age;
//		pep_list.push_back(user);
//	}
//	//Print out the vector in the order by name
//	cout << "Menu:\n";
//
//	do {
//		cout << "1) Sort and display the list in Ascending Order by Name\n"
//			<< "2) Sort and display the list in Ascending Order by Age\n"
//			<< "3) Exit the program\n";
//		cout << "Choice: ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			printAlphabetOrder(pep_list);
//			break;
//		case 2:
//			printNumAscendOrder(pep_list);
//			break;
//		case 3:
//			cout << "The program now will exit\n";
//			break;
//		default:
//			cout << "Please enter the correct choice\n";
//		}
//	} while (choice != 1 && choice != 2 && choice != 3);
//
//	return 0;
//}
//
//void printAlphabetOrder(vector<People> list) {
//	//Order by Alphabetic using bubble sort
//	sort(list.begin(), list.end(), LessThanAlpha());
//	//Print it out
//	for (People val : list) {
//		cout << val.name << " " << val.age << endl;
//	}
//}
//
//void printNumAscendOrder(vector<People> vec) {
//	//Oder by number of age
//	sort(vec.begin(), vec.end(), LessThanNum());
//	//Print it out
//	for (People val : vec) {
//		cout << val.name << " " << val.age << endl;
//	}
//}