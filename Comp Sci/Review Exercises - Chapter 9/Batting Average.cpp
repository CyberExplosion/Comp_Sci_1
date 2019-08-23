//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class BaseballPlayer {
//private:
//	string name;
//	double batting_avg;
//public:
//	BaseballPlayer() :name("empty"), batting_avg(0.0) {};
//	BaseballPlayer(string n, double b) : name(n), batting_avg(b) {};
//	void setName(string name) {
//		this->name = name;
//	}
//	void setBatAvg(double batting_avg) {
//		this->batting_avg = batting_avg;
//	}
//	string getName() {
//		return name;
//	}
//	double getBatAvg() {
//		return batting_avg;
//	}
//};
//
//void sortSelection(vector<BaseballPlayer>& list) {
//	//Ascending Order
//	for (int i = 0; i < list.size() - 1; i++) {
//		for (int k = i + 1; k < list.size(); k++) {
//			if (list[i].getBatAvg() > list[k].getBatAvg()) {
//				swap(list[i], list[k]);
//			}
//		}
//	}
//}
//
//void displayClassVector(const vector<BaseballPlayer>& list) {
//	cout << "Name \t\t Bat Average\n";
//	cout << "-----------------------\n";
//	for (BaseballPlayer val : list) {
//		cout << val.getName() << "\t\t" << val.getBatAvg() << endl;
//	}
//}
//
//void inputData(vector<BaseballPlayer>& list) {
//	int count = 0;
//	string name;
//	double avg;
//
//	for (BaseballPlayer& val : list) {
//		count++;
//		cout << "Enter player number " << count << " name: ";
//		getline(cin, name);
//		val.setName(name);
//		cout << "Enter the player batting average: ";
//		cin >> avg;
//		cin.ignore(100, '\n'); cin.clear(); cin.sync();
//		val.setBatAvg(avg);
//		cout << "---------------------------------\n";
//	}
//	cout << "======================================\n";
//}
//
//int main() {
//	vector<BaseballPlayer> list(5);
//
//	inputData(list);
//	sortSelection(list);
//	displayClassVector(list);
//
//	return 0;
//}