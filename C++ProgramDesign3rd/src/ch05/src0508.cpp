#include <iostream>
#include <Real.h>
using namespace std;

void src0508()
{
	// P140，常成员函数
	cout << "--->" << "代码05-08（常成员函数）" << "<---" << endl;

	Real a(5, 4);
	a.print();	// 调用 void print();
	const Real b(20, 52);
	b.print();

}
