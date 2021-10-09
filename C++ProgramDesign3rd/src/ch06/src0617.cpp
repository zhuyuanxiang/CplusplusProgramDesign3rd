#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

void src0617() {
	// P188，动态创建对象数组
	cout << "--->" << "代码06-17（动态创建对象数组）" << "<---" << endl;

	Point* Ptr = new Point[2];
	Ptr[0].Move(5, 10);
	Ptr[1].Move(15, 20);
	cout << "Ptr[0] adddress:" << &Ptr[0] << ",\tPtr[0]=" << Ptr[0].GetXY() << endl;
	cout << "Ptr[1] adddress:" << &Ptr[1] << ",\tPtr[1]=" << Ptr[1].GetXY() << endl;
	delete[] Ptr;
}
