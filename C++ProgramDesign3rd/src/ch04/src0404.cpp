#include <iostream>
#include <cmath>
#include "../../include/Point.h"
#include "../../include/Line.h"

using namespace std;

void fun1_04(Point p) {
	cout << p.GetX() << endl;
}
Point fun2_04() {
	Point A(1, 2);
	cout << A.GetX() << endl;
	return A;
}

void src0404()
{
	// P109，类的组合
	cout << "--->" << "代码04-04（类的组合）：" << "<---" << endl;

	Point myp1(1, 1), myp2(4, 5);
	Line line(myp1, myp2);
	Line line2(line);
	cout << "The  length of the  line is: " << line.GetLen() << endl;
	cout << "The  length of the  line2 is: " << line2.GetLen() << endl;
}
