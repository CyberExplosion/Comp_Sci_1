//#include <iostream>
//using namespace std;
//
//class InvBin {
//private:
//	string description;
//	int qty;
//public:
//	InvBin(string d = "empty", int q = 0) {
//		description = d;
//		qty = q;
//	}
//	void setDescription(string d) {
//		description = d;
//	}
//	string getDescription() {
//		return description;
//	}
//	void setQty(int q) {
//		qty = q;
//	}
//	int getQty() {
//		return qty;
//	}
//};
//
//class BinManager {
//private:
//	InvBin bin[30];
//	int numBins;
//public:
//	~BinManager() {
//		displayReport();
//	}
//	BinManager() : numBins(0) {};
//	BinManager(int size, string d[], int q[]);
//	string getDescription(int index) {
//		return bin[index].getDescription();
//	}
//	int getQuantity(int index) {
//		return bin[index].getQty();
//	}
//	bool addParts(int binIndex, int q) {
//		if (q >= 1) {
//			bin[binIndex].setQty(q + bin[binIndex].getQty());
//			return true;
//		}
//		return false;
//	}
//	bool removeParts(int binIndex, int q) {
//		if (q >= 1 && q < bin[binIndex].getQty()) {
//			bin[binIndex].setQty(bin[binIndex].getQty() - q);
//			return true;
//		}
//		return false;
//	}
//	void displayReport();
//};
//
//int main() {
//	string descriptions[9] = { "regular pliers", "n. nose pliers", "screwdriver", "p. head screw driver", "wrench-large", "wrench-small", "drill", "cordless drill", "hand saw" };
//	int quantity[9] = { 25,5,25,6,7,18,51,16,12 };
//	int choice,
//		qty;
//	BinManager bins(9, descriptions, quantity);
//
//	bins.displayReport();
//	cout << endl;
//	cout << "Menu\n";
//	cout << "1. Add an item to a bin\n"
//		<< "2. Remove an item from a bin\n"
//		<< "3. Display report of all bins\n"
//		<< "Any other buttons to quit\n";
//	
//	do {
//		cout << "Enter your choice: ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "Choose the bin number you want to add items to: ";
//			cin >> choice;
//			cout << "Enter the number of items you want to add to that bin: ";
//			cin >> qty;
//			if (choice >= 1 && choice <= 9) {
//				bins.addParts((choice - 1), qty);
//			}
//			break;
//		case 2:
//			cout << "Choose the bin number you want to remove items from: ";
//			cin >> choice;
//			cout << "Enter the number of items you want to remove from that bin: ";
//			cin >> qty;
//			if (choice > 1 && choice <= 9) {
//				bins.removeParts((choice - 1), qty);
//			}
//			break;
//		case 3:
//			bins.displayReport();
//			break;
//		default:
//			break;
//		}
//		cout << endl;
//	} while (choice == 1 || choice == 2 || choice == 3);
//
//	return 0;
//}
//
//BinManager::BinManager(int size, string d[], int q[]) {
//	numBins = 0;
//	for (int i = 0; i < size; i++) {
//		bin[i].setDescription(d[i]);
//		bin[i].setQty(q[i]);
//		numBins++;
//	}
//}
//
//void BinManager::displayReport() {
//	for (int i = 0; i < numBins; i++) {
//		cout << i + 1 << ". " << bin[i].getDescription() << " " << bin[i].getQty() << endl;
//	}
//}
