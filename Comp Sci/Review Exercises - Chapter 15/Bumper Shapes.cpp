#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <Windows.h>
using namespace std;

const HANDLE outHandle = GetStdHandle(STD_OUTPUT_HANDLE);

class Shape {
protected:
	virtual void draw() const = 0;
	virtual void move() = 0;
};

class Rectangular : public Shape {
private:
	int width, 
		height;
public:
	virtual void draw() const override {

	}
};

int main() {

}