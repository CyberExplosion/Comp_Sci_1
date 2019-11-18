//#include <iostream>
//#include <fstream>
//#include <map>
//#include <vector>
//using namespace std;
//
//int main() {
//	fstream file;
//	int numPeps;
//	int rank;
//	int numPlaces;
//	string location;
//	vector<string>placesVec;
//	map<int, string>people;
//
//	map<int, int>rankMapNumPlaces;
//	map<int, vector<string>>rankMapPlaces;
//
//
//	file.open("data.txt", ios::in);
//	if (!file.is_open()) {
//		cout << "The file is not opened.\n";
//		return 1;
//	}
//
//	//Done creating a map relating rank with name of people
//	file >> numPeps;
//	for (int i = 0; i < numPeps; i++) {
//		file >> rank;
//		file >> people[rank];
//	}
//
//	//Place want to visit
//	for (int i = 0; i < numPeps; i++) {
//		file >> rank;
//		file >> numPlaces;
//		rankMapNumPlaces[rank] = numPlaces;
//		for (int k = 0; k < numPlaces; k++) {
//			file >> location;
//			placesVec.push_back(location);
//		}
//		rankMapPlaces[rank] = placesVec;
//		placesVec.clear();
//	}
//
//	//Testing program
//	string name;
//
//	cout << "Enter the name of the person you want to check: ";
//	cin >> name;
//	rank = -1; //Default
//	for (int j = 0; j < numPeps; j++) {
//		if (people[j] == name) {
//			rank = j;
//			break;
//		}
//	}
//	if (rank == -1) {
//		cout << "There's no name like that.\n";
//		return 2;
//	}
//
//	placesVec = rankMapPlaces[rank];
//	for (auto val : placesVec) {
//		cout << val << "  ";
//	}
//	cout << endl;
//}