//#include <iostream>
//#include <string>
//#include <vector>
//#include <memory>
//#include <Windows.h>
//using namespace std;
//
//const HANDLE outHandle = GetStdHandle(STD_OUTPUT_HANDLE);
//
////A shape has a direction and is able to move in that direction.
////The move is a virtual member function
//
//class Shape {
//private:
//	int dCol, dRow;	//Direction of motion
//public:
//	void setDirection(int drow, int dcol) {
//		dRow = drow;
//		dCol = dcol;
//	}
//	void getDirection(int& drow, int& dcol) const {
//		drow = dRow;
//		dcol = dCol;
//	}
//	virtual void move() = 0;
//};
//
////A SimpleShape is drawn at a given position in a specified color
//class SimpleShape : public Shape {
//private:
//	int color;
//	int rowPos, colPos;
//public:
//	virtual void draw() const = 0;
//	void getPosition(int& row, int& col) const {
//		row = rowPos;
//		col = colPos;
//	}
//	void setPosition(int row, int col) {
//		rowPos = row;
//		colPos = col;
//	}
//	void setColor(int c) {
//		color = c;
//	}
//	int getColor() const {
//		return color;
//	}
//	virtual void move() override;
//};
//
////A Box is a rectangular type of shape
//class Box : public SimpleShape {
//private:
//	int width, height;
//public:
//	virtual void draw() const override;
//	Box(int rowPos, int colPos, int width, int height);
//};
//
////A Tent is an isosceles triangle whose horizontal base has a given length and whose height is half the length of the base. The position of the triangle is the left endpoint of the base
//class Tent : public SimpleShape {
//private:
//	int length;
//public:
//	virtual void draw() const override;
//	Tent(int baseRowPos, int baseColPos, int length);
//};
//
////A ComplexShape is made up of simpler shapes. It is represented as a vector of pointers to the simpler shapes that make it up
//class ComplexShape : public Shape {
//private:
//	vector<shared_ptr<Shape>>shapes;
//public:
//	ComplexShape(const vector<shared_ptr<Shape>>& shapeCollection);
//	virtual void move() override;
//};
//
//
///////////////////////////////////////////////////////////////////////
//
////Now is content of cpp
//
///************************************
//Moves a simple shape one step by erasing the shape as its current position, changing its position, and then redrawing the shape at its new position.
//************************************/
//void SimpleShape::move() {
//	int dRow, dCol;	//Direction of motion
//	int savedColor = color;
//	color = 0;	//Drawing in color 0 means erases the shape
//	draw();
//
//	//Compute the new position for the shape by adding a step in the proper direction to the current position
//	getPosition(dRow, dCol);
//	rowPos += dRow;
//	colPos += dCol;
//	
//	//Draw the shape at its new position in its specified color
//	color = savedColor;
//	draw();
//}
//
///******************************
//Draws a tent at its position
//*******************************/
//void Tent::draw() const {
//	int rowPos, colPos;
//	COORD pos;
//	int currentLength = length;
//
//	//Set the color attribute
//	SetConsoleTextAttribute(outHandle, getColor());
//	getPosition(rowPos, colPos);
//	pos.Y = rowPos;
//	pos.X = colPos;
//
//	//Draw the lines that form the tent beginning with the base and moving up toward the point
//	for (int r = 0; r < (length + 1) / 2; r++) {
//		SetConsoleCursorPosition(outHandle, pos);
//		for (int k = 0; k < currentLength; k++) {
//			cout << "*";
//		}
//		cout << endl;
//		pos.Y--;
//		pos.X++;
//		currentLength -= 2;
//	}
//	//Restore normal attribute
//	SetConsoleTextAttribute(outHandle, 7);
//}
//
///*****************************
//Draws a box shape
//*****************************/
//void Box::draw() const {
//	int rowPos, colPos;
//	COORD pos;
//
//	//Set the color attribute for the box
//	SetConsoleTextAttribute(outHandle, getColor());
//	getPosition(rowPos, colPos);
//	pos.X = colPos;
//	pos.Y = rowPos;
//
//	//Draws the lines that make up the box
//	for (int r = 0; r < height; r++) {
//		SetConsoleCursorPosition(outHandle, pos);
//		for (int c = 0; c < width; c++) {
//			cout << "*";
//		}
//		cout << endl;
//		pos.Y++;
//	}
//	//Restore normal text attribute
//	SetConsoleTextAttribute(outHandle, 7);
//}
//
///*****************************
//Constructor sets the color, position and dimensions for a box shape, and  draws the box at its initial position
//******************************/
//Box::Box(int rowPos, int colPos, int width, int height) {
//	setColor(4);
//	setPosition(rowPos, colPos);
//	this->width = width;
//	this->height = height;
//	draw();
//}
//
///*******************************
//Constructor sets the color for a Tent shape, sets the position of the tent as well at the length of its base and draws it at its initial position
//*******************************/
//Tent::Tent(int baseRowPos, int baseColPos, int length) {
//	setColor(2);
//	setPosition(baseRowPos, baseColPos);
//	this->length = length;
//	draw();
//}
//
///*******************************
//Constructor builds complex shape by assembling a vector of constituent shapes
//********************************/
//ComplexShape::ComplexShape(const vector<shared_ptr<Shape>>& shapeCollection) {
//	for (int k = 0; k < shapeCollection.size(); k++) {
//		auto p = shapeCollection[k];
//		shapes.push_back(p);
//	}
//}
//
///*****************************
//Moves a complex shape by moving the constituent shapes
//********************************/
//void ComplexShape::move() {
//	for (int k = 0; k < shapes.size(); k++) {
//		shapes[k]->move();
//	}
//}
//
//
/////////////////////////////////////////////////////////
//
////	MAGIC BEGIN
//
//int main() {
//	//Create a tent and a box
//	shared_ptr<Tent> tent = make_shared<Tent>(20, 10, 13);
//	shared_ptr<Box>box = make_shared<Box>(5, 10, 4, 7);
//
//	//Draw the tent and the box
//	tent->draw();
//	box->draw();
//
//	//Set direction fo motion for the two shapes
//	tent->setDirection(-1, 0);	//Tent moves straight up
//	box->setDirection(0, 1);	//Box moves to the right
//
//	//Simultaneously move the tent and the box
//	for (int k = 0; k < 12; k++) {
//		Sleep(500);
//		tent->move();
//		box->move();
//	}
//	box->move(); 
//	tent->move();
//
//	//Move the box farther to the right
//	for (int k = 0; k < 48; k++) {
//		Sleep(500);
//		box->move();
//	}
//
//
//	//Create a complex shape composed of the tent and the box
//	vector<shared_ptr<Shape>> myShape{ tent, box };
//	shared_ptr<ComplexShape> cS = make_shared<ComplexShape>(myShape);
//
//	//Set direction for the two shapes
//	tent->setDirection(1, 0);
//	box->setDirection(0, -1);
//	//Move the complex shape: this move both the tent and the box
//	for (int k = 0; k < 12; k++) {
//		Sleep(500);
//		cS->move();
//	}
//
//	//Continue moving the box by itself
//	for (int k = 0; k < 36; k++) {
//		Sleep(500);
//		box->move();
//	}
//}