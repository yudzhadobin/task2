#pragma once

using namespace System::Drawing;

ref class MyPoint
{
	Point^ point;
	int number;

public:
	MyPoint(Point^ point, int number);

	MyPoint(int x, int y, int number);

	MyPoint(int x, int y);

	void draw(Bitmap^ bm);

	int getX() {
		return point->X;
	}

	int getY() {
		return point->Y;
	}

	int getNumber() {
		return number;
	}

	bool isExtra() {
		return number == 0;
	}

};

