#include <iostream>
#include "Clock.h"

using namespace std;

// 内嵌实现必须与调用函数在同代码文件中。
//inline void Clock::ShowTime() {
//	cout << Hour << ":" << Minute << ":" << Second << endl;
//}

void src0401()
{
	// P98，时钟类
	Clock myClock;
	cout << "First time set and output: " << endl;
	myClock.SetTime();
	myClock.ShowTime();
	cout << "Second timeset and output: " << endl;
	myClock.SetTime(8, 30, 30);
	myClock.ShowTime();
}
