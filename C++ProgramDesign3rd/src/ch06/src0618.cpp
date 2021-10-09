#include <iostream>
#include <iomanip>
#include "Point.h"
#include "ArrayOfPoints.h"

using namespace std;



void src0618() {
	// P189，动态数组类
	cout << "--->" << "代码06-18（动态数组类）" << "<---" << endl;

	int number;
	cout << "Please enter the number of points:";
	cin >> number;
	ArrayOfPoints points(number);
	for (int i = 0; i < number; i++) {
		points.Element(i).Move(5 + i * 5, 10 + i * 10);
		cout << "points.Element(" << i << ") adddress:" << &points.Element(i) << ", points.Element(" << i << ") = " << points.Element(i).GetXY() << endl;
	}
}
