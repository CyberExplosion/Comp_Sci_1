#include <iostream>
#include <cmath>
using namespace std;

int main_notgoingtodoit() {
	/*Pseudo Code
	Index	Rows	hash	rows-hash	hash-row	want	row+want	7-2*row		|7-2*row|
	1		0		1		-1			1			1		1			7			7
	2		1		3		-2			2			2		3			5			5
	3		2		5		-3			3			3		5			3			3
	4		3		7		-4			4			4		7			1			1
	5		4		5		-1			1			3		7			-1			1
	6		5		3		2			-2			2		7			-3			3
	7		6		1		5			-5			1		7			-5			5
	*/
	for (int rows = 0; rows < 7; rows++) {
		for (int hash = 0; hash < abs(((2*rows)+1)); hash++) {
			cout << "#";
		}
		cout << endl;
	}
	return 0;
}