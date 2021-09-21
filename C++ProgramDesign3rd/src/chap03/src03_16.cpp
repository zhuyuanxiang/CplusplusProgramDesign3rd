#include <iostream>
#include <iomanip>

using namespace std;

struct complex {
	double real;
	double imaginary;
};

void src03_16()
{
	// P83：函数重载：两个以上的函数，具有相同的函数名称，但是形参的个数或者类型不同，编译器根据实参和形参的类型及个数的最佳匹配，自动确定调用哪一个函数
	// 重载方式：形参类型不同；形参个数不同。
	// 不能重载：不能以返回值来区分函数

	cout << "--->" << "代码3-16（函数重载）：" << "<---" << endl;

	int m, n;
	double x, y;
	complex c1, c2, c3;
	int add(int m, int n);
	double add(double x, double y);
	complex add(complex c1, complex c2);

	cout << "Enter two integers: ";
	cin >> m >> n;
	cout << "integers: " << m << '+' << n << '=' << add(m, n) << endl;

	cout << "Enter two real numbers: ";
	cin >> x >> y;
	cout << "real numbers: " << x << '+' << y << '=' << add(x, y) << endl;

	cout << "Enter the first complex number: ";
	cin >> c1.real >> c1.imaginary;
	cout << "Enter the second complex number: ";
	cin >> c2.real >> c2.imaginary;
	c3 = add(c1, c2);
	cout << "complex numbers: (" << c1.real << ',' << c1.imaginary << ")+(" << c2.real << ',' << c2.imaginary << ")=(" << c3.real << ',' << c3.imaginary << ")\n" << endl;
}

int add(int m, int n) { return m + n; }
double add(double x, double y) { return x + y; }
complex add(complex c1, complex c2) {
	complex c;
	c.real = c1.real + c2.real;
	c.imaginary = c1.imaginary + c2.imaginary;
	return c;
}
