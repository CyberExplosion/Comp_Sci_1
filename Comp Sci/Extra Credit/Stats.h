#ifndef STATS_H
#define STATS_H

using namespace std;

class Stats {
private:
	double value[12];
	double totalRain();
	double averageRain();
	double largest();
	double smallest();

public:
	Stats();
	void setValue(int, double);
	void getValue();
	double getValue(int);
	double getTotal();
	double getAvg();
	double getLargest();
	double getSmallest();
};
// Constructor
Stats::Stats() {
	for (int i = 0; i < 12; i++) {
		value[i] = 0;
	}
}

//Private
double Stats::totalRain() {
	double total = 0.0;
	for (int i = 0; i < 12; i++) {
		total += value[i];
	}
	return total;
}
double Stats::averageRain() {
	return totalRain() / 12.0;
}
double Stats::largest() {
	double largest = -9999;
	for (int i = 0; i < 12; i++) {
		if (value[i] > largest || largest == -9999) {
			largest = value[i];
		}
	}
	return largest;
}
double Stats::smallest() {
	double smallest = -9999;
	for (int i = 0; i < 12; i++) {
		if (value[i] < smallest || smallest == -9999) {
			smallest = value[i];
		}
	}
	return smallest;
}

//Mutators
void Stats::setValue(int position, double set_value) {
	if (set_value < 0) {
		value[position] = 0;
	}
	else {
		value[position] = set_value;
	}
}

//Accessors
void Stats::getValue() {
	for (int i = 0; i < 12; i++) {
		cout << value[i] << " ";
	}
}
double Stats::getValue(int pos) {
	return value[pos];
}
double Stats::getTotal() {
	return totalRain();
}
double Stats::getAvg() {
	return averageRain();
}
double Stats::getLargest() {
	return largest();
}
double Stats::getSmallest() {
	return smallest();
}

#endif // !STATS_H