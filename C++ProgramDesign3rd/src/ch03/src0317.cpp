#include <iostream>
#include <cmath>

using namespace std;

const double pi(3.14159265);

void src0317()
{
	// P85，sec0305，使用C++系统函数
	cout << "--->" << "代码3-17（使用C++系统函数）：" << "<---" << endl;
	double a, b;
	cout << "Enter the degree of the angle: ";
	cin >> a;
	b = a * pi / 180;
	cout << "sin(" << a << ")=" << sin(b) << endl;
	cout << "cos(" << a << ")=" << cos(b) << endl;
	cout << "tan(" << a << ")=" << tan(b) << endl;
}
