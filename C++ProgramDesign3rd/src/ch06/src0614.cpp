#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

void src0614() {
	// P184，通过指针访问类的静态数据成员
	cout << "--->" << "代码06-14（函数指针实例）" << "<---" << endl;

	int* count = &Point::countP;
	Point A(4, 5);
	cout << "A.GetX()\t=\t" << (A.GetX()) << endl;
	cout << "Object id\t=\t" << *count << endl;

	Point B(A);
	cout << "B.GetX()\t=\t" << B.GetX() << endl;
	cout << "Object id\t=\t" << *count << endl;
}
