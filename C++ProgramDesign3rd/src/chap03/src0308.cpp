#include <iostream>
using namespace std;

long fac(int n) {
	long f(0);
	if (n < 0) cout << "n<0, data error!" << endl;
	else if (n == 0) f = 1;
	else f = fac(n - 1) * n;
	return(f);
}
void src0308()
{
	// P72，递归调用：求n的阶乘
	cout << "--->" << "代码3-8：" << "<---" << endl;
	int n;
	long y;
	cout << "Enter a positive integer: ";
	cin >> n;
	y = fac(n);
	cout << n << "!=" << y << endl;
}
