#pragma once
#if !defined(_POINT_H)
#define _POINT_H
#endif

class Point {
public:
	Point();	// 无参构造函数
	Point(float xx, float yy);	// 有参构造函数
	Point(const Point& original);// 拷贝构造函数
	Point& operator=(const Point& original); // 等号重载，赋值函数
	~Point();// 析构函数
	const float GetXY();
	float GetX();
	float GetY();
	friend float fDist(Point& a, Point& b);	// 友元函数的声明
	friend float linefit(Point l_point[], int n_point);
	int GetC();
	static int countP;
	static int sGetC();
	void Move(float x, float y);
private:
	float X, Y;
	char* name;
};

float fDist(Point& a, Point& b);	// 这个声明似乎不是必须的，为什么？
float linefit(Point l_point[], int n_point);
extern const bool DEBUG;
