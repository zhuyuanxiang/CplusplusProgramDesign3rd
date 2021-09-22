#include <iostream>
using namespace std;

class Point {
public:
	Point(int xx = 0, int yy = 0) {
		X = xx;
		Y = yy;
		list = new char[20];
		cout << "构造Point" << endl;
	}	// 构造函数
	Point(const Point&);									// 拷贝构造函数
	~Point();	// 析构函数
	int GetX() { return X; }
	int GetY() { return Y; }
private:
	int X, Y;
	char* list;
};

Point::~Point() {
	cout << "Point类析构！" << endl;
	delete[]list;	//	在类析构时，释放之前动态分配的内存
}
Point::Point(const Point& origial)
{
	X = origial.X; Y = origial.Y; list = new char[20];
	cout << "拷贝构造函数被调用" << endl;
}

void fun1(Point p) {
	cout << p.GetX() << endl;
}
Point fun2() {
	Point A(1, 2);
	cout << A.GetX() << endl;
	return A;
}

void src0402()
{
	// P103，Point类（拷贝构造函数的调用方式）
	cout << "--->" << "代码04-02（拷贝构造函数的调用方式）：" << "<---" << endl;
	Point A(4, 5);
	cout << "1. 基于拷贝构造函数使用A初始化B" << endl;
	Point B(A);
	cout << B.GetX() << endl;
	cout << "2. 函数的形参是类的对象，调用函数时，需要复制一个对象" << endl;
	fun1(B);
	cout << "3. 函数的返回值是类的对象，函数返回时，需要复制一个对象" << endl;
	Point C = fun2();
	cout << C.GetX() << endl;
	cout << "拷贝构造与析构案例结束。" << endl;
}
