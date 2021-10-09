#pragma once
#include "Point.h"

class ArrayOfPoints {
public:
	ArrayOfPoints(int n);
	ArrayOfPoints(ArrayOfPoints& pointsArray);
	~ArrayOfPoints();
	Point& Element(int n);
private:
	Point* points;
	int numberOfPoints;
};
