#include <iostream>
using namespace std;

class Clock {
public:
	void SetTime(int NewH = 0, int NewM = 0, int NewS = 0);
	void ShowTime();
private:
	int Hour, Minute, Second;
};
void Clock::SetTime(int NewH, int NewM, int NewS) {
	Hour = NewH; Minute = NewM; Second = NewS;
}
inline void Clock::ShowTime() {
	cout << Hour << ":" << Minute << ":" << Second << endl;
}

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
