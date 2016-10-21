#include "MyPoint.h"


MyPoint::MyPoint(Point ^ point, int number)
{
	this->number = number;
	this->point = point;
}

MyPoint::MyPoint(int x, int y)
{
	this->point = gcnew Point(x, y);
	this->number = -1;
}

MyPoint::MyPoint(int x, int y, int number)
{
	this->point = gcnew Point(x, y);
	this->number = number;
}

void MyPoint::draw(Bitmap ^ bm)
{
	Graphics^ im = Graphics::FromImage(bm);

	if (number != 0) {
		im->FillEllipse(Brushes::Red, point->X - 5, point->Y - 5, 10, 10);
		im->DrawString(number.ToString(), gcnew Font("Bold", 7), Brushes::Black, point->X - 19, point->Y - 6);

		im->DrawEllipse(Pens::Red, point->X - 7, point->Y - 7, 14, 14);
	}
	else {
		im->FillEllipse(Brushes::Blue, point->X - 5, point->Y -5, 10, 10);
		im->DrawEllipse(Pens::Blue, point->X - 7, point->Y - 7, 14, 14);
	}

}
