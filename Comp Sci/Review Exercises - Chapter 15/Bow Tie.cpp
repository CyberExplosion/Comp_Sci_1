#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
using namespace std;

const HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);

class Shape {
protected:
	COORD pos;
	int color;

	void getPos(int& x, int& y) const {
		x = pos.X;
		y = pos.Y;
	}
	void setPos(int x, int y) {
		pos.X = x;
		pos.Y = y;
	}
public:
	Shape(int x, int y, int t_color) {
		pos.X = x;
		pos.Y = y;
		color = t_color;
	}

	virtual void move() = 0;
	virtual void draw() = 0;
	virtual ~Shape() {};
};

class Wedge : public Shape {
private:
	int moveDirX = 0,
		moveDirY = 0;
	//It's an isosceles triangle
	int length;
public:
	Wedge(int x, int y, int t_color, int t_length) : Shape(x, y, t_color), length(t_length) {};
	virtual void draw() override;
	virtual void move() override;
	void setMove(int x, int y) {
		moveDirX = x;
		moveDirY = y;
	}
	void getMove(int x, int y) const {
		x = moveDirX;
		y = moveDirY;
	}
	int getLength() {
		return length;
	}
	friend bool collide(Wedge shp1, Wedge shp2);
};

int main() {
	Wedge first(0, 0, 5, 13),
		second(60, 0, 6, 13);
	first.setMove(1, 0);
	second.setMove(-1, 0);
	while (!collide(first, second)) {
		first.move();
		second.move();
		Sleep(200);
	}
}

void Wedge::draw() {
	COORD temp = pos;
	int cur_length = length;
	SetConsoleTextAttribute(output, color);

	for (int i = 0; i < length; i++) {
		//Reset the Y position then change it accordingly
		pos.Y = temp.Y;
		pos.Y += i;
		for (int k = 0; k < cur_length; k++) {
			SetConsoleCursorPosition(output, pos);
			cout << '*';
			pos.Y++;
		}
		//So we can flip if worst case
		pos.X += moveDirX;
		cur_length -= 2;
	}
	//Reset
	pos = temp;
	SetConsoleTextAttribute(output, 7);
}

void Wedge::move() {
	//Erase the old one
	int tmp_color = color;
	color = 0;
	draw();

	//Move it over
	int posX, posY;
	getPos(posX, posY);
	posX += moveDirX;
	posY += moveDirY;
	setPos(posX, posY);
	color = tmp_color;
	draw();
}

bool collide(Wedge shp1, Wedge shp2) {
	int pos1X, pos1Y;
	int pos2X, pos2Y;
	shp1.getPos(pos1X, pos1Y);
	shp2.getPos(pos2X, pos2Y);

	//Search from the left most of the tip-Y-position, to the top of the tip
	for (int i = 0; i < shp1.getLength() + 1; i++) {
		if (pos1X + i == pos2X)
			return true;
	}
	return false;
}
