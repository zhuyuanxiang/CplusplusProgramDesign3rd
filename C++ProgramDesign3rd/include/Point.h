#pragma once
class Point {
public:
	Point(int xx = 0, int yy = 0);
	Point(const Point& original);// 拷贝构造函数
	~Point();// 析构函数
	int GetX();
	int GetY();
	int GetC();
	static int sGetC();
	const int GetXY();
	friend float fDist(Point& a, Point& b);	// 友元函数的声明
private:
	int X, Y;
	char* name;
	static int countP;
};

float fDist(Point& a, Point& b);	// 这个声明似乎不是必须的，为什么？
