#include <iostream>
#include <Point.h>
using namespace std;

void src0507()
{
	// P140，常引用做形参
	cout << "--->" << "代码05-07（常引用做形参）" << "<---" << endl;

	// ToDo: 常引用的案例不合理
	void display(const Point & p);
	void display(Point & p);
	Point A(4, 5);
	display(A);
	display(A);

}

void display(const Point& p) {
	cout << "p=" << p.sGetC() << endl;
}

void display(Point& p) {
	cout << "p=" << p.GetX() << endl;
}
