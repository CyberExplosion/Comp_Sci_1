//#include <iostream>
//#include <list>
//#include <Windows.h>
//using namespace std;
//
//const HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
//
//class ImageMap : list<COORD> {
//public:
//	//Add an array of coordinates to the image map
//	void add(COORD coordArray[]);
//	//Convenience method for adding an array of coordinates
//	void add(short* coordAsShorts);
//	//Display a given character at a specified position
//	void displayAt(char ch, int col, int row);
//	//Display an asterisk at a given position
//	void displayAt(int col, int row) {
//		displayAt('*', col, row);
//	}
//	//Erase whatever character is at a given position
//	void eraseAt(int col, int row) {
//		displayAt(' ', col, row);
//	}
//};
//
////Adds an array of coordinates to the image map
//void ImageMap::add(COORD coordArray[]) {
//	for (int k = 0; coordArray[k].X != -1; k++) {
//		push_back(coordArray[k]);
//	}
//}
//
////Allows an array of shorts to be converted to an array of COORD. That simplifies the initialization process for an image
//void ImageMap::add(short* coordAsShorts) {
//	COORD* pCoord = reinterpret_cast<COORD*>(coordAsShorts);
//	add(pCoord);
//}
//
////Shows an image at a given position. The image is drawn using the character ch
//void ImageMap::displayAt(char ch, int col, int row){
//	list<COORD>::iterator iter = this->begin();
//	for (; iter != this->end(); iter++) {
//		COORD currentPos;
//		currentPos.Y = row + iter->Y;
//		currentPos.X = col + iter->X;
//		SetConsoleCursorPosition(console, currentPos);
//		cout << ch << endl;
//	}
//}
//
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//int main() {
//	//Figure 1 - a snapshot of a person running
//	ImageMap figure1;
//
//	//Set up the coordinates for the various body parts of the person in the first running position
//	short int lowerLeg1[] = { 1,10,2,10,3,10,-1,-1 };
//	short int thigh1[] = { 4,9,5,8,6,7,7,6,-1,-1 };
//	short int thigh2[] = { 6,7,7,8,8,9,-1,-1 };
//	short int lowerLeg2[] = { 8,10,8,11,-1,-1 };
//	short int torso[] = { 8,5,9,4,10,3,11,2,-1,-1 };
//	short int upperArms[] = { 7,2,8,3,9,4,10,5,11,6,-1,-1 };
//	short int foreArm1[] = { 12,5,13,4,-1,-1 };
//	short int foreArm2[] = { 6,3,5,4,-1,-1 };
//	short int* figure1AllParts[] = { lowerLeg1, lowerLeg2, thigh1, thigh2, torso, upperArms, foreArm1, foreArm2, 0 };
//
//	//Add the coordinates that make up the various body parts to the image map for the first running position
//	int k = 0;
//	for (int k = 0; figure1AllParts[k] != 0; k++) {
//		figure1.add(figure1AllParts[k]);
//	}
//
//	//Figure 2 - a snapshot of the person in a different running animation
//	ImageMap figure2;
//	short int p2LowerLeg1[] = { 1,11,2,10,3,9,-1,-1 };
//	short int p2thigh1[] = { 3,9,3,8,3,7,-1,-1 };
//	short int p2thigh2[] = { 4,7,5,7,6,7,-1,-1 };
//	short int p2LowerLeg2[] = { 6,8,6,9,1,-1 };
//	short int p2torso[] = { 3,6,3,5,3,4,3,3,3,2,3,1,-1,-1 };
//	short int p2UpperArms[] = { 1,3,2,3,4,3,5,3,-1,-1 };
//	short int p2foreArm1[] = { 1,4,1,5,-1,-1 };
//	short int p2foreArm2[] = { 5,2,5,1,-1,-1 };
//	short int* figure2AllParts[] = { p2LowerLeg1,p2thigh1, p2thigh2, p2LowerLeg2, p2torso, p2UpperArms, p2foreArm1, p2foreArm2, 0 };
//
//	for (int k = 0; figure2AllParts[k] != 0; k++) {
//		figure2.add(figure2AllParts[k]);
//	}
//
//	//Figure 3 - a snapshot of a person in yet another running position
//	ImageMap figure3;
//	short int p3torso[] = { 4,7,4,6,4,5,4,4,4,3,4,2,4,1,-1,-1 };
//	short int p3Thigh1[] = { 5,8,6,9,-1,-1 };
//	short int p3Thigh2[] = { 3,8,2,9,-1,-1 };
//	short int p3LowerLeg1[] = { 6,10,6,11,-1,-1 };
//	short int p3LowerLeg2[] = { 1,8,0,7,-1,-1 };
//	short int p3UpperArm1[] = { 3,4,2,5,-1,-1 };
//	short int p3UpperArm2[] = { 5,4,6,5,-1,-1 };
//	short int p3ForeArm1[] = { 3,6,4,7,-1,-1 };
//	short int p3ForeArm2[] = { 7,4,8,3,-1,-1 };
//	short int* figure3AllParts[] = { p3torso, p3Thigh1, p3Thigh2, p3LowerLeg1, p3LowerLeg2, p3UpperArm1, p3UpperArm2, p3ForeArm1, p3ForeArm2, 0 };
//	for (int k = 0; figure3AllParts[k] != 0; k++) {
//		figure3.add(figure3AllParts[k]);
//	}
//
//	//Ask Windows to clear the screen
//	system("cls");
//	//Form an array of all three figures
//	ImageMap* sequence[3] = { &figure1, &figure2, &figure3 };
//
//	//Animate to create the appearance of running across the screen
//	k = 0;
//	int pos = 0;
//	while (pos <= 60) {
//		//Show the current image at the current position
//		sequence[k]->displayAt(pos, 3);
//		Sleep(400);
//
//		//Erase the curernt image
//		sequence[k]->eraseAt(pos, 3);
//		//Move to the next image in the rotation and next position
//		k = (k + 1) % 3;
//		pos = pos + 8;
//	}
//	sequence[k]->displayAt(pos, 3);
//}