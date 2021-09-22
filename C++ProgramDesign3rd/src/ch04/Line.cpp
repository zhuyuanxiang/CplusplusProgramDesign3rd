#include "../../include/Point.h"
#include <iostream>
using namespace std;

class Line {
public:
	Line(Point xp1, Point xp2);
	Line(const Line&);
	double GetLen();
private:
	Point p1, p2;
	double len;
};

Line::Line(Point xp1, Point xp2) :p1(xp1), p2(xp2)
{
	cout << "调用 Line 构造函数" << endl;
	double x = double(p1.GetX()) - double(p2.GetX());
	double y = double(p1.GetY()) - double(p2.GetY());
	len = sqrt(x * x + y * y);
}

Line::Line(const Line& L) :p1(L.p1), p2(L.p2)
{
	cout << "调用 Line 的拷贝构造函数" << endl;
	len = L.len;
}

double Line::GetLen()
{
	return len;
}
