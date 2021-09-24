#include <iostream>

using namespace std;

namespace n_src0503 {
	class Clock {
	public:
		Clock();
		void SetTime(int NewH, int NewM, int NewS);//三个形参均具有函数原型作用域
		void ShowTime();
		~Clock() {}
	private:
		int Hour, Minute, Second;
	};
}



n_src0503::Clock::Clock() {
	Hour = 0; Minute = 0; Second = 0;
}

void n_src0503::Clock::SetTime(int NewH, int NewM, int NewS) {
	Hour = NewH; Minute = NewM; Second = NewS;
}

void n_src0503::Clock::ShowTime() {
	cout << Hour << ":" << Minute << ":" << Second << endl;
}

n_src0503::Clock g_Clock;

void src0503()
{
	// P129，具有静态、动态生存期对象的时钟程序
	cout << "--->" << "代码05-03（具有静态、动态生存期对象的时钟程序）" << "<---" << endl;

	cout << "First time output:" << endl;
	g_Clock.ShowTime();
	g_Clock.SetTime(8, 30, 30);
	n_src0503::Clock myClock(g_Clock);

	cout << "Second time output:" << endl;
	myClock.ShowTime();
}
