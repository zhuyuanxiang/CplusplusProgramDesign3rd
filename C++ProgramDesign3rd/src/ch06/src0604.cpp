#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

void src0604() {
	// P164，使用Point进行点的线性拟合
	cout << "--->" << "代码06-04（使用Point进行点的线性拟合）" << "<---" << endl;

	Point l_p[10] = { Point(6,10),Point(14,20),Point(25,30),Point(33,40),Point(46,50),Point(54,60),Point(67,70),Point(75,80),Point(84,90),Point(100,100) };
	float r = linefit(l_p, 10);
	cout << "Line correlation r=" << r << endl;
}
