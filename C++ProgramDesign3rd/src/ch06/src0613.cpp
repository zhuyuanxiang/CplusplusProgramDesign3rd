#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

void src0613() {
	// P184，访问对象的公有成员函数的不同方式
	cout << "--->" << "代码06-13（访问对象的公有成员函数的不同方式）" << "<---" << endl;

	Point A(4, 5);
	cout << "A.GetX()\t=\t" << (A.GetX()) << endl;

	Point* p1 = &A;	// 声明对象指针
	cout << "p1->GetX()\t=\t" << (p1->GetX()) << endl;

	float(Point:: * p_GetX)() = &Point::GetX;// 声明成员函数指针并初始化
	cout << "(A.*p_GetX)()\t=\t" << (A.*p_GetX)() << endl;
}
