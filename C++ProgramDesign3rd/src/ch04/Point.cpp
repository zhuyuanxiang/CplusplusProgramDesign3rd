#include <iostream>
#include "Point.h"

using namespace std;


Point::~Point() {
	countP--;
	if (DEBUG)
		cout << "Point析构函数" << endl;
	// ToDo：下面的释放总有问题
	// delete[]name;	//	在类析构时，释放之前动态分配的内存
}
Point::Point(const Point& origial)
{
	new (this) Point();
	X = origial.X; Y = origial.Y;
	if (DEBUG)
		cout << "Point拷贝构造函数" << endl;
}

Point& Point::operator=(const Point& original)
{
	Point newPoint = Point();
	newPoint.X = original.X; newPoint.Y = original.Y;
	if (DEBUG)
		cout << "Point赋值函数" << endl;
	return newPoint;
}

Point::Point()
{
	X = Y = 0;
	countP++;
	name = new char[20];
	if (DEBUG)
		cout << "Point无参构造函数" << endl;
}

Point::Point(float xx, float yy) {
	new (this) Point();
	X = xx;
	Y = yy;
	if (DEBUG)
		cout << "Point有参构造函数" << endl;
}

int Point::countP = 0;	// 静态数据成员的定义和初始化，使用类名限定

float Point::GetX() { return X; }

float Point::GetY() { return Y; }

int Point::GetC() { return countP; }

void Point::Move(float x, float y)
{
	X += x; Y += y;
}

int Point::sGetC() {
	cout << "Object id\t=\t" << countP << endl;
	return countP;
}

const float Point::GetXY()
{
	return X * 10.0f + Y;
}

float fDist(Point& p1, Point& p2)	// 友元函数的实现
{
	double x = double(p1.X) - double(p2.X);
	double y = double(p1.Y) - double(p2.Y);
	return float(sqrt(x * x + y * y));
}

float linefit(Point l_point[], int n_point)
{
	float av_x, av_y;	// x,y 的均值
	float L_xx, L_yy, L_xy;	// 均方差
	av_x = av_y = L_xx = L_yy = L_xy = 0;
	for (int i = 0; i < n_point; i++) {
		av_x += l_point[i].X / n_point;
		av_y += l_point[i].Y / n_point;
	}
	for (int i = 0; i < n_point; i++) {
		L_xx += (l_point[i].X - av_x) * (l_point[i].X - av_x);
		L_yy += (l_point[i].Y - av_y) * (l_point[i].Y - av_y);
		L_xy += (l_point[i].X - av_x) * (l_point[i].Y - av_y);
	}
	cout << "This line can be fitted by y=ax+b." << endl;
	float a = L_xy / L_xx;
	float b = av_y - a * av_x;
	cout << "a=" << a << ",\t" << "b= " << b << endl;

	return float(L_xy / sqrt(L_xx * L_yy));
}
