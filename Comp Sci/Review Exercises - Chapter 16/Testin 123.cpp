#include <iostream>
using namespace std;

class IntRange {
private:
	int input;
	int lower;
	int upper;
public:
	class OutOfRange{};
	IntRange(int low, int high) {
		lower = low;
		upper = high;
	}
	int getInput() {
		cin >> input;
		if (input < lower || input > upper)
			throw OutOfRange();
		return input;
	}
};

class IntRange3 {
private:
	int input;
	int lower;
	int upper;
public:
	class HighRange {
	public:
		int value;
		HighRange(int i) : value(i) {};
	};
	class LowRange {
	public:
		int val;
		LowRange(int k) : val(k) {};
	};
	IntRange3(int low, int high) {
		lower = low;
		upper = high;
	}
	int getInput() noexcept(false) {
		cin >> input;
		if (input < lower)
			throw LowRange(input);
		if (input > upper)
			throw HighRange(input);
		return input;
	}
};

int main() {
	IntRange3 ex(5, 10);
	cout << "Enter a number from range of 5 - 10: ";
	try {
		cout << ex.getInput();
	}
	catch (...) {
		cout << "Whatever\n";
	}

}