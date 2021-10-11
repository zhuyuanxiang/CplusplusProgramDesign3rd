#pragma once
class Clock {
public:
	Clock(int NewH = 0, int NewM = 0, int NewS = 0);
	void SetTime(int NewH = 0, int NewM = 0, int NewS = 0);
	void ShowTime();
	Clock& operator ++();		// 前置单目运算符重载
	Clock& operator ++(int i);	// 后置单目运算符重载
private:
	int Hour, Minute, Second;
};
