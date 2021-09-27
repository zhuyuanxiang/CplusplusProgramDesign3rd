#pragma once
#if !defined(_POINT_H)
#define _POINT_H
#endif

class Point {
public:
	Point();
	Point(int xx, int yy);
	Point(const Point& original);// 拷贝构造函数
	~Point();// 析构函数
	int GetX();
	int GetY();
	int GetC();
	void Move(int x, int y);
	static int sGetC();
	const int GetXY();
	friend float fDist(Point& a, Point& b);	// 友元函数的声明
private:
	int X, Y;
	char* name;
	static int countP;
};

float fDist(Point& a, Point& b);	// 这个声明似乎不是必须的，为什么？
