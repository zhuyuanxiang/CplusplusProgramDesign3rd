#include <iostream>
#include <cmath>
#include <Point.h>

using namespace std;


void src0506()
{
	// P137，使用友元函数计算两点间的距离
	cout << "--->" << "代码05-06（使用友元函数计算两点间的距离）" << "<---" << endl;

	Point A(1, 1), B(4, 5);
	cout << "The distance is: " << fDist(A, B) << endl;

}
