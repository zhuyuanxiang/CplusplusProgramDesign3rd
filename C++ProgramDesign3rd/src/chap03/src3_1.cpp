#include <iostream>
using namespace std;
double power(double x, int n);
void src3_1()
{
	// 求x的n次方
	cout << "--->" << "代码3-1：" << "<---" << endl;
	cout << "5 o the power 2 is " << power(5, 2) << endl;
}
double power(double x, int n)
{
	double val = 1.0;
	while (n--)
		val *= x;
	return(val);
}
