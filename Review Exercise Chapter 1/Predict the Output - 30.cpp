#include <iostream>
using namespace std;

int done5() {
	int x = 0, y = 5;
	x += 1;
	y += 1;
	y += x;
	return y;
}