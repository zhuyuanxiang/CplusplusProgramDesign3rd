#include <iostream>
#include "Clock.h"

using namespace std;

Clock::Clock(int NewH, int NewM, int NewS)
{
	SetTime(NewH, NewM, NewS);
}

void Clock::SetTime(int NewH, int NewM, int NewS) {
	if ((0 <= NewH && NewH <= 24) && (0 <= NewM && NewM <= 60) && (0 <= NewS && NewS <= 60))
	{
		Hour = NewH; Minute = NewM; Second = NewS;
	}
	else
		cout << "Time error!" << endl;
}

void Clock::ShowTime() {
	cout << Hour << ":" << Minute << ":" << Second << endl;
}

Clock& Clock::operator++()
{
	Second++;
	if (Second >= 60)
	{
		Second -= 60;
		Minute++;
		if (Minute >= 60)
		{
			Minute -= 60;
			Hour++;
			Hour = Hour % 24;
		}
	}
	return *this;
}

Clock& Clock::operator++(int i)
{
	// 两种方法结果一样！
	// 方法1
	Clock old = *this;
	++(*this);
	return old;

	// 方法2
	//++(*this);
	//return *this;
}
