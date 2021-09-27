#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

void src0603() {
	// P164，对象数组
	cout << "--->" << "代码06-03（对象数组）" << "<---" << endl;

	Point A[2] = { Point(3,4) };
	for (int i = 0; i < 2; i++) {
		cout << "Original A[" << i << "]=" << setw(5) << A[i].GetXY() << endl;
		A[i].Move(i + 10, i + 20);
		cout << "Moved A[" << i << "]=" << setw(5) << A[i].GetXY() << endl;
	}
}
