#include <iostream>
using namespace std;

class Point {
public:
	Point(int xx = 0, int yy = 0) { X = xx; Y = yy; }	// 构造函数
	Point(Point& p);									// 拷贝构造函数
	int GetX() { return X; }
	int GetY() { return Y; }
private:
	int X, Y;
};

Point::Point(Point& p)
{
	X = p.X; Y = p.Y;
	cout << "拷贝构造函数被调用" << endl;
}

void fun1(Point p) {
	cout << p.GetX() << endl;
}
Point fun2() {
	Point A(1, 2); return A;
}

void src0402()
{
	// P103，Point类（拷贝构造函数的调用方式）
	cout << "--->" << "代码04-02（拷贝构造函数的调用方式）：" << "<---" << endl;
	Point A(4, 5);
	cout << "基于拷贝构造函数使用A初始化B" << endl;
	Point B(A);
	cout << B.GetX() << endl;
	cout << "函数的形参是类的对象，调用函数时，需要复制一个对象" << endl;
	fun1(B);
	cout << "函数的返回值是类的对象，函数返回时，需要复制一个对象" << endl;
	B = fun2();
	cout << B.GetX() << endl;
}
