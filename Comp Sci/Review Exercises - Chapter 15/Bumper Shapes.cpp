//#include <iostream>
//#include <string>
//#include <vector>
//#include <memory>
//#include <Windows.h>
//using namespace std;
//
//const HANDLE CONSOLE = GetStdHandle(STD_OUTPUT_HANDLE);
//
//class Shape {
//protected:
//	int xPos,
//		yPos;
//public:
//	Shape(int x, int y) : xPos(x), yPos(y) {};
//	void setPos(int x, int y) {
//		xPos = x;
//		yPos = y;
//	}
//	void getPos(int& x, int& y) const{
//		x = xPos;
//		y = yPos;
//	}
//	virtual ~Shape() {};
//	virtual void draw() const = 0;
//	virtual void move() = 0;
//};
//
//class Rectangular : public Shape {
//private:
//	int width, 
//		height;
//	int color;
//	int movX,
//		movY;
//public:
//	Rectangular(COORD startPos, int width, int height, int color);
//	void setMoveDir(int x, int y) {
//		movX = x;
//		movY = y;
//	}
//	void getMoveDir(int& x, int& y) const {
//		x = movX;
//		y = movY;
//	}
//	void flipDir() {
//		movX *= -1;
//		movY *= -1;
//	}
//	int getWidth() const {
//		return width;
//	}
//	virtual void draw() const override;
//	virtual void move() override;
//};
//
//bool collision(Rectangular rec, Rectangular rec2) {
//	int x1, y1;
//	int x2, y2;
//	rec.getPos(x1, y1);
//	rec2.getPos(x2, y2);
//	for (int i = 0; i < rec.getWidth(); i++) {
//			if (x1 + i == x2)
//				return true;
//	}
//	return false;
//}
//
//int main() {
//	//Vector that stores the info
//	COORD startPos,
//		startPos2;
//	startPos.X = 0;
//	startPos.Y = 10;
//	startPos2.X = 64;
//	startPos2.Y = 10;
//	Rectangular rec(startPos, 6, 3, 5),
//		rec2(startPos2, 6, 3, 6);
//
//	int curPosX,
//		curPosY;
//	int curPosX_2,
//		curPosY_2;
//	rec.setMoveDir(1, 0);
//	rec2.setMoveDir(-1, 0);
//	int i = 0;
//	while(true){
//		rec.draw();
//		rec2.draw();
//		Sleep(30);
//
//		rec.move();
//		rec2.move();
//
//		//Collision detection
//		rec.getPos(curPosX, curPosY);
//		rec2.getPos(curPosX_2, curPosY_2);
//		if (collision(rec, rec2) || curPosX == startPos.X || curPosX_2 == startPos2.X) {
//			rec.flipDir();
//			rec2.flipDir();
//			if (curPosX + rec.getWidth() == curPosX_2)
//				i++;
//		}
//	}
//}
//
//
//Rectangular::Rectangular(COORD startPos, int width, int height, int color) : Shape(startPos.X, startPos.Y) {
//	this->width = width;
//	this->height = height;
//	this->color = color;
//}
//
//void Rectangular::draw() const {
//	//Draw at the starting position and with default color
//	int xPos, yPos;
//	COORD pos;
//
//	//Set Color and other attributes
//	SetConsoleTextAttribute(CONSOLE, color);
//	getPos(xPos, yPos);
//	pos.X = xPos;
//	pos.Y = yPos;
//
//	//Draw at that location
//	for (int i = 0; i < height; i++) {
//		SetConsoleCursorPosition(CONSOLE, pos);
//		for (int k = 0; k < width; k++) {
//			cout << "*";
//		}
//		cout << endl;
//		pos.Y++;
//	}
//	//Restore normal text attribute
//	SetConsoleTextAttribute(CONSOLE, 7);
//}
//
//void Rectangular::move() {
//	int tempColor = color;
//	//Erase the current position
//	color = 0;
//	draw();
//
//	//Draw at the new position
//	int dirX, dirY;
//	getMoveDir(dirX, dirY);
//	//Put the direction moving
//	xPos += dirX;
//	yPos += dirY;
//
//	color = tempColor;
//	draw();
//}
