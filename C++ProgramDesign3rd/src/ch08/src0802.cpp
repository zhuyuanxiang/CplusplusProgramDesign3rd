#include <iostream>
#include "Clock.h"

using namespace std;

void src0802()
{
	// P257，将单目运算符“++”重载为成员函数形式
	cout << "--->" << "代码08-02（复数类加减法运算重载——成员函数形式）" << "<---" << endl;

	Clock myClock(23, 59, 59);
	cout << "First time output:\t"; myClock.ShowTime();
	cout << "Show ++myClock:\t"; (++myClock).ShowTime();
	cout << "Show myClock++:\t"; (myClock++).ShowTime();
	cout << "First time output:\t"; myClock.ShowTime();

	int i;

	i = 0;
	cout << "i=" << i << ";\t++i=" << (++i) << ";\ti++=" << (i++) << ",\ti=" << i << endl;

	i = 0;
	cout << "i=" << i;
	cout << ";\t++i=" << ++i;
	cout << ";\ti++=" << i++;
	cout << ";\ti=" << i;
	cout << endl;
}
