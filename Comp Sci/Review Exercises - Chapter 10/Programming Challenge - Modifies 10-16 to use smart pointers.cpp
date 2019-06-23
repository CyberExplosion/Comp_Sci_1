#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Squares {
private:
	int length;
	unique_ptr<int[]>sq;
public:
	Squares(int len) {
		length = len;
		sq = make_unique<int[]>(length);
		for (int k = 0; k < length; k++) {
			sq[k] = (k + 1) * (k + 1);
		}
		cout << "Construct an object of size " << length << endl;
	}
	void print() {
		for (int k = 0; k < length; k++) {
			cout << sq[k] << " ";
			cout << endl;
		}
	}
	~Squares() {
		sq.reset();
		cout << "Destroy object of size " << length << endl;
	}
};

void outputSquares(Squares* sqPtr) {
	cout << "The list of squares is: ";
	sqPtr->print();
}

int main() {
	unique_ptr<Squares> sqPtr = make_unique<Squares>(3);
	outputSquares(sqPtr.get());
	return 0;
}