#include <iostream>
#include <iomanip>
#include "Point.h"
#include "ArrayOfPoints.h"

using namespace std;



void src0620() {
	// P192，对象的浅拷贝
	cout << "--->" << "代码06-20（对象的浅拷贝）" << "<---" << endl;

	int number;
	cout << "Please enter the number of points-->";
	cin >> number;
	ArrayOfPoints pointsArray1(number);	// 创建对象数组
	for (int i = 0; i < number; i++) {
		pointsArray1.Element(i).Move(5 + i * 5, 10 + i * 10);
		cout << "points.Element(" << i << ") adddress:" << &pointsArray1.Element(i) << ", points.Element(" << i << ") = " << pointsArray1.Element(i).GetXY() << endl;
	}
	cout << endl;

	ArrayOfPoints pointsArray2(pointsArray1);
	cout << "Copy of pointsArray1-->" << endl;
	for (int i = 0; i < number; i++) {
		cout << "Point(" << i << ") of array1 : " << pointsArray1.Element(i).GetX() << ", " << pointsArray1.Element(i).GetY() << endl;
		cout << "Point(" << i << ") of array2 : " << pointsArray2.Element(i).GetX() << ", " << pointsArray2.Element(i).GetY() << endl;
	}
	cout << endl;

	cout << "Moving pointsArray-->1" << endl;
	for (int i = 0; i < number; i++) {
		pointsArray1.Element(i).Move(5 + i * 5, 10 + i * 10);
		cout << "points.Element(" << i << ") adddress:" << &pointsArray1.Element(i) << ", points.Element(" << i << ") = " << pointsArray1.Element(i).GetXY() << endl;
	}
	cout << endl;

	cout << "After the moving of pointsArray1-->" << endl;
	for (int i = 0; i < number; i++) {
		cout << "Point(" << i << ") of array1 : " << pointsArray1.Element(i).GetX() << ", " << pointsArray1.Element(i).GetY() << endl;
		cout << "Point(" << i << ") of array2 : " << pointsArray2.Element(i).GetX() << ", " << pointsArray2.Element(i).GetY() << endl;
	}
}
