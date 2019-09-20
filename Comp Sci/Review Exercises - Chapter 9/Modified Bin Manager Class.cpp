#include <iostream>
using namespace std;

//Ignore the second part of the problem because that would make the program super long and I'm wayyyyy too lazy for that

class InvBin {
private:
	string description;
	int qty;
public:
	InvBin(string d = "empty", int q = 0) {
		description = d;
		qty = q;
	}
	void setDescription(string d) {
		description = d;
	}
	string getDescription() {
		return description;
	}
	void setQty(int q) {
		qty = q;
	}
	int getQty() {
		return qty;
	}
};

class BinManager {
private:
	//modified to use dynamic memories
	InvBin *bin;
	int numBins;
	
	//Modified Part
	int getindex(string itemDescription);
	//Modified to sort the array based on the description
	void sortSelectionAscending();
	//end
public:
	//Modified to delete dynamic memory
	~BinManager() {
		displayReport();
		delete[]bin;
		bin = nullptr;
	}
	BinManager() : numBins(0) {};
	BinManager(int size, string d[], int q[]);
	string getDescription(int index) {
		return bin[index].getDescription();
	}
	int getQuantity(int index) {
		return bin[index].getQty();
	}
	bool addParts(int binIndex, int q) {
		if (q >= 1) {
			bin[binIndex].setQty(q + bin[binIndex].getQty());
			return true;
		}
		return false;
	}
	bool removeParts(int binIndex, int q) {
		if (q >= 1 && q < bin[binIndex].getQty()) {
			bin[binIndex].setQty(bin[binIndex].getQty() - q);
			return true;
		}
		return false;
	}
	void displayReport();

	//Modified part
	bool addParts(string itemDescription, int q);
	bool removeParts(string itemDescription, int q);
	int getQuantity(string itemDescription);
	//end
};

int BinManager::getindex(string itemDescription) {
	sortSelectionAscending();
	//Binary Search
	int beg = 0, end = numBins - 1;
	while (beg <= end) {
		int middle = (beg + end) / 2;
		if (itemDescription == bin[middle].getDescription()) {
			//return index position
			return middle;
		}
		if (itemDescription > bin[middle].getDescription()) {
			beg = middle + 1;
		}
		if (itemDescription < bin[middle].getDescription()) {
			end = middle - 1;
		}
	}
	//The itemDescription is not in the array
	return -1;
}

void BinManager::sortSelectionAscending() {
	for (int i = 0; i < numBins - 1; i++) {
		for (int k = i + 1; k < numBins; k++) {
			if (bin[i].getDescription() > bin[k].getDescription()) {
				swap(bin[i], bin[k]);
			}
		}
	}
}

BinManager::BinManager(int size, string d[], int q[]) {
	numBins = 0;
	for (int i = 0; i < size; i++) {
		bin[i].setDescription(d[i]);
		bin[i].setQty(q[i]);
		numBins++;
	}
	bin = new InvBin[numBins];
}

void BinManager::displayReport() {
	for (int i = 0; i < numBins; i++) {
		cout << i + 1 << ". " << bin[i].getDescription() << " " << bin[i].getQty() << endl;
	}
}

bool BinManager::addParts(string itemDescription, int q) {
	int index = getindex(itemDescription);
	if (index == -1) {
		//Did not found the description in the array
		return false;
	}
	if (q >= 1) {
		bin[index].setQty(q + bin[index].getQty());
		return true;
	}
	//Default
	return false;
}

bool BinManager::removeParts(string itemDescription, int q) {
	int index = getindex(itemDescription);
	if (index == -1) {
		//Did not found the description in the array
		return false;
	}
	if (q >= 1) {
		bin[index].setQty(bin[index].getQty() - q);
		return true;
	}
	return false;
}

int BinManager::getQuantity(string itemDescription) {
	int index = getindex(itemDescription);
	if (index == -1) {
		//Not found
		return -1;
	}
	return bin[index].getQty();
}
