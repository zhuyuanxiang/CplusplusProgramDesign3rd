#include <iostream>
#include "complex.h"

using namespace std;

void src0803()
{
	// P260，运算符重载为友元函数
	cout << "--->" << "代码08-03（运算符重载为友元函数）" << "<---" << endl;

	complex c1(5, 4), c2(2, 10), c3, c4;
	cout << "c1="; c1.display();
	cout << "c2="; c2.display();
	c3 = c1 - c2;
	cout << "c3=c1-c2="; c3.display();
	c4 = c1 + c2;
	cout << "c4=c1+c2="; c4.display();
}
