#include <iostream>

using namespace std;

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

Point::~Point() {
	cout << "Point类析构！" << endl;
	delete[]name;	//	在类析构时，释放之前动态分配的内存
}
Point::Point(const Point& origial)
{
	X = origial.X; Y = origial.Y; name = new char[20];
	cout << "拷贝构造函数被调用" << endl;
}

Point::Point(int xx, int yy) {
	X = xx;
	Y = yy;
	name = new char[20];
	cout << "构造Point" << endl;
}



int Point::GetX() { return X; }

int Point::GetY() { return Y; }
