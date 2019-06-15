#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Numbers {
private:
	// Variables
	unsigned int m_number;
	// Static
	static string m_less_than20[];
	static string m_hundred,
		thousand;
	static string base_10_bigger_than20[];
	// Functions
public:
	// Initialization list
	Numbers(unsigned int num) : m_number{ num } {}
	void print();
	// Operator that change the array to something else easier to use
	string& operator[](const int&);
};

// Static variables can only initialize outside the class
string Numbers::m_less_than20[]= { "zero","one","two","three", "four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen" };
string Numbers::m_hundred = "hundred";
string Numbers::thousand = "thousand";
string Numbers::base_10_bigger_than20[]={ "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };

// Function Implementation

/*********************
DESCTIPTION: Change the array operator to represent the array into something easier to use. Cause "twenty" starts in the string array at position 0
**********************/
string& Numbers::operator[](const int& bigger_than_20) {
	switch (bigger_than_20) {
	case 20:
		return base_10_bigger_than20[0];
		break;
	case 30:
		return base_10_bigger_than20[1];
		break;
	case 40:
		return base_10_bigger_than20[2];
		break;
	case 50:
		return base_10_bigger_than20[3];
		break;
	case 60:
		return base_10_bigger_than20[4];
		break;
	case 70:
		return base_10_bigger_than20[5];
		break;
	case 80:
		return base_10_bigger_than20[6];
		break;
	case 90:
		return base_10_bigger_than20[7];
		break;
	default:
		break;
	}
}

void Numbers::print() {
	// Store the index position for the array of m_less_than20 and the base_10_bigger_than20 array
	int index = 0;
	// Fill the digit array with corresponding number
	if (m_number > 999) {
		// Test for each number that goes from 10,000 - 1000
		for (int i = 10000; i > 0; i -= 1000) {
			// So if the number being tested bigger than the one the number running through
			if (m_number >= i) {
				// If the number is found, divide it by 1000 to get the original index for the array.
				// Ex: 2738 > 2000 ==> 2000/1000 = 2
				// So the index would be 2, corresponding to "two"
				index = i / 1000;
				cout << m_less_than20[index] << " ";
				// After getting the thousandths, minus the original number to test the hundredth, then the twen-tieths and the single digit 
				m_number -= i;
				break;
			}
		}
		// After translating the number of the thousandths, add the word "hundred" to output
		cout << "thousand ";
	}
	if (m_number > 99) {
		for (int k = 1000; k > 0; k -= 100) {
			if (m_number >= k) {
				index = k / 100;
				cout << m_less_than20[index] << " ";
				m_number -= k;
				break;
			}
		}
		cout << "hundred ";
	}
	if (m_number >= 20) {
		for (int n = 100; n > 20; n -= 10) {
			if (m_number >= n) {
				cout << base_10_bigger_than20->operator[](n) << " "; // Try using just [n] next time
				m_number -= n;
				break;
			}
		}
		if (m_number > 0) {
			for (int b = 0; b < 20; b++) {
				if (m_number == b) {
					cout << m_less_than20[b] << " \n";
					break;
				}
			}
		}
	}
	else if (m_number > 0) {
		for (int b = 0; b < 20; b++) {
			if (m_number == b) {
				cout << "and " <<  m_less_than20[b] << " \n";
				break;
			}
		}
	}
}

int main_donech1() {
	Numbers num1(8203);
	num1.print();
	return 0;
}