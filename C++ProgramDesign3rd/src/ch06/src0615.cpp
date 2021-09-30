#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

void src0615() {
	// P184，通过指针访问类的静态函数成员
	cout << "--->" << "代码06-15（通过指针访问类的静态函数成员）" << "<---" << endl;

	int (*gc)() = Point::sGetC;

	Point A(4, 5);
	cout << "A.GetX()\t=\t" << (A.GetX()) << endl;
	gc();

	Point B(A);
	cout << "B.GetX()\t=\t" << B.GetX() << endl;
	gc();
}
