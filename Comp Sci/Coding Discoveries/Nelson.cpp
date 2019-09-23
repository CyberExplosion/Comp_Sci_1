#include <iostream>
using namespace std;

int FindMode(int size, int* ptrArray) {

	int track = *(ptrArray);
	int x = 0;
	int modecount = 1;
	//int modenum = -1;

	for (int i = 0; i < size; i++) {

		if (track == *(ptrArray + i))
			i++;

		else {
			if (i > modecount)
				modenum = track;
			modecount = i;

		}
		track = *(ptrArray + x);
		i = 0;
		x--;
	}
	return modenum;
}

int main() {

	return 0;
}


