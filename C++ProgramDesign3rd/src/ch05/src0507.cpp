#include <iostream>
#include <Point.h>
#include "..\..\include\ch05.h"
using namespace std;

void src0507()
{
	// P140，常引用做形参
	cout << "--->" << "代码05-07（常引用做形参）" << "<---" << endl;

	// const 可以用于重载函数，常量定义的函数必须用常量访问
	displayClasses();

	displayDoubles();
}

void displayDoubles()
{
	cout << "***display double*** " << endl;
	void displayDouble(double& d);
	void displayDouble(const double& d);
	double a = 15;
	const double b = 20;
	displayDouble(a);
	displayDouble(b);
}

void displayClasses()
{
	cout << "***display object***" << endl;
	void display(Point & p);
	Point A(4, 5);
	display(A);

	void display(const Point & p);
	const Point B(1, 1);
	display(B);
}

void display(const Point& p) {
	cout << "const p=" << p.sGetC() << endl;
	//p = Point(3, 4);	// p不能修改
	cout << "const p=" << p.sGetC() << endl;
}

void display(Point& p) {
	cout << "p=" << p.GetX() << endl;
	p = Point(3, 4);
	cout << "p=" << p.GetX() << endl;
}

void displayDouble(const double& d) {
	cout << "const d=" << d << endl;
	//d = d * 2;	// d不能修改
	cout << "const d=" << d << endl;
}


void displayDouble(double& d) {
	cout << "d=" << d << endl;
	d = d * 2;
	cout << "d=" << d << endl;
}
