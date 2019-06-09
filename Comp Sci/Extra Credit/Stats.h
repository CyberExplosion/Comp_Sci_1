#ifndef STATS_H
#define STATS_H

// Need this for "cout" to works
using namespace std;

/**************************
CLASS NAME: Stats
ATTRIBUTES: A double array of size 12
DESCRIPTION: Objects of the class can change their array value using setValue(). Display the value of array using getValue(), the total of every value in array using getTotal(), the average of value in the array using getAvg(), the largest value in array using getLargeest(), the smallest value in the array using getSmallest().
**************************/
class Stats {
private:
	double value[12];
	// Private functions that do things in private :3
	double totalRain();
	double averageRain();
	double largest();
	double smallest();

public:
	// Constructor
	Stats();
	// Mutator Functions
	void setValue(int, double);
	// Two getValue functions, one take no argument that displays the whole array. One takes an integer argument as position of the array only display the value inside such position
	//Accessors
/***********************
FUCNTION NAME: getValue
INPUT: none
OUTPUT: none
DESCIPTION: Print out the whole array
***********************/
	void getValue() {
		for (int i = 0; i < 12; i++) {
			cout << value[i] << " ";
		}
	}
/***********************
FUNCTION NAME: getValue
INPUT: an integer as position in the array
OUTPUT: a double as a value inside the array
DESCRIPTION: The function uses the integer as position inside the array to return the value inside occupies that position
***********************/
	double getValue(int pos) {
		return value[pos];
	}
	double getTotal() {
		return totalRain();
	}
	double getAvg() {
		return averageRain();
	}
	double getLargest() {
		return largest();
	}
	double getSmallest() {
		return smallest();
	}
};
// Constructor
/******************
DESCRIPTION: Set all value inside the array of 12 into 0
******************/
Stats::Stats() {
	for (int i = 0; i < 12; i++) {
		value[i] = 0;
	}
}

//Private
/**************************
FUNCTION NAME: totalRain
INPUT: None
OUTPUT: a double value
DESCRIPTION: The function sum up all the value in the array and return it
**************************/
double Stats::totalRain() {
	double total = 0.0;
	for (int i = 0; i < 12; i++) {
		total += value[i];
	}
	return total;
}
/************************
FUNCTION NAME: averageRain
INPUT: None
OUTPUT: a double value
DESCRIPTION: The function uses the value return in totalRain() and divide that by 12 (total rain/12 months), thus getting the average
************************/
double Stats::averageRain() {
	return totalRain() / 12.0;
}
/*************************
FUNCTION NAME: largest
INPUT: None
OUTPUT: a double value
DESCRIPTION: The functions creates a double value and assumes the first value in the array as largest. The function then compare each subsequent value to find the largest one.
*************************/
double Stats::largest() {
	double largest = -9999;
	for (int i = 0; i < 12; i++) {
		if (value[i] > largest || largest == -9999) {
			largest = value[i];
		}
	}
	return largest;
}
/*************************
FUNCTION NAME: smallest
INPUT: None
OUTPUT: a double value
DESCRIPTION: The functions creates a double value and assumes the first value in the array as smallest. The function then compare each subsequent value to find the smallest one.
**************************/
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
/************************
FUNCTION NAME: setValue
INPUT: an integer as array position, a double as value that should be in the aforementioned array position
OUTPUT: none
DESCRIPTION: The function use the double value and set it as the value in the array position provided. If the double value entered is smaller or equal to 0, the value in array will be set to 0 instead.
************************/
void Stats::setValue(int position, double set_value) {
	if (set_value < 0) {
		value[position] = 0;
	}
	else {
		value[position] = set_value;
	}
}

#endif // !STATS_H