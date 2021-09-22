#pragma once
class Point {
public:
	Point(int xx = 0, int yy = 0);
	Point(const Point& original);// 拷贝构造函数
	~Point();// 析构函数
	int GetX();
	int GetY();
private:
	int X, Y;
	char* name;
};
