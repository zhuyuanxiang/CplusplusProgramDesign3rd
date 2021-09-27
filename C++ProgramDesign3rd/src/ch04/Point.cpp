#include <iostream>
#include "Point.h"

using namespace std;

Point::~Point() {
	countP--;
	cout << "Point析构函数" << endl;
	// ToDo：下面的释放总有问题
	// delete[]name;	//	在类析构时，释放之前动态分配的内存
}
Point::Point(const Point& origial)
{
	X = origial.X; Y = origial.Y; countP++; name = new char[20];
	cout << "Point拷贝构造函数" << endl;
}

Point::Point()
{
	X = Y = 0;
	countP++;
	name = new char[20];
	cout << "Point默认构造函数" << endl;
}

Point::Point(int xx, int yy) {
	X = xx;
	Y = yy;
	countP++;
	name = new char[20];
	cout << "Point赋值构造函数" << endl;
}

int Point::countP = 0;	// 静态数据成员的定义和初始化，使用类名限定

int Point::GetX() { return X; }

int Point::GetY() { return Y; }

int Point::GetC() { return countP; }

void Point::Move(int x, int y)
{
	X += x; Y += y;
}

int Point::sGetC() { return countP; }

const int Point::GetXY()
{
	return X * 10 + Y;
}

float fDist(Point& p1, Point& p2)	// 友元函数的实现
{
	double x = double(p1.X) - double(p2.X);
	double y = double(p1.Y) - double(p2.Y);
	return float(sqrt(x * x + y * y));
}
