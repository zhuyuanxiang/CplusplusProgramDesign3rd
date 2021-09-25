#include <iostream>
#include <Point.h>

using namespace std;


void src0505()
{
	// P131，具有静态数据成员和静态函数成员的Point类
	cout << "--->" << "代码05-05（具有静态数据成员和静态函数成员的Point类）" << "<---" << endl;

	Point A(4, 5);
	cout << "Point A= " << A.GetX() << "," << A.GetY() << endl;
	cout << "Object id= " << A.sGetC() << endl;
	Point B(A);
	cout << "Point B= " << B.GetX() << "," << B.GetY() << endl;
	cout << "Object id= " << Point::sGetC() << endl;

}
