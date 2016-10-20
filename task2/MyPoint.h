#pragma once

using namespace System::Drawing;

ref class MyPoint
{
	Point^ point;
	int number;

public:
	MyPoint(Point^ point, int number);

	void draw(Bitmap^ bm);

	int getX() {
		return point->X;
	}

	int getY() {
		return point->Y;
	}


};

