#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

void src0612() {
	// P180，函数指针实例
	cout << "--->" << "代码06-12（函数指针实例）" << "<---" << endl;

	Point A(4, 5), * p1;

	p1 = &A;
	cout << "p1= " << p1->GetX() << endl;
	cout << "A = " << A.GetX() << endl;
}
