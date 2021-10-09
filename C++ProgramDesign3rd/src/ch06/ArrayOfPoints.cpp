#include <iostream>
#include <iomanip>
#include "Point.h"
#include "ArrayOfPoints.h"

using namespace std;

ArrayOfPoints::ArrayOfPoints(int n)
{
	numberOfPoints = n;
	points = new Point[n];
}
ArrayOfPoints::ArrayOfPoints(ArrayOfPoints& pointsArray)
{
	numberOfPoints = pointsArray.numberOfPoints;
	points = new Point[numberOfPoints];
	for (int i = 0; i < numberOfPoints; i++)
		points[i].Move(pointsArray.Element(i).GetX(), pointsArray.Element(i).GetY());
}
ArrayOfPoints::~ArrayOfPoints()
{
	cout << "Deleting..." << endl;
	numberOfPoints = 0;
	delete[] points;
}
Point& ArrayOfPoints::Element(int n) { return points[n]; }
