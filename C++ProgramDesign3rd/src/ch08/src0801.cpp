#include <iostream>
#include "complex.h"

using namespace std;

void src0801()
{
	// P255，复数类加减法运算重载——成员函数形式
	cout << "--->" << "代码08-01（复数类加减法运算重载——成员函数形式）" << "<---" << endl;

	complex c1(5, 4), c2(2, 10), c3, c4;
	cout << "c1="; c1.display();
	cout << "c2="; c2.display();
	c3 = c1 - c2;
	cout << "c3=c1-c2="; c3.display();
	c4 = c1 + c2;
	cout << "c4=c1+c2="; c4.display();
}
