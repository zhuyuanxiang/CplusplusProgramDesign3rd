#include<iostream>
#include<iomanip>

using namespace std;

void src1102() {
	// P374，使用 setw 操作符指定宽度
	cout << "--->" << "代码11-02（使用 setw 操作符指定宽度）" << "<---" << endl;

	double values[] = { 1.23, 35.36, 653.7, 4358.24 };
	const char* names[] = { "Zoot", "Jimmy", "Al", "Stan" };
	for (int i = 0; i < 4; i++)
	{
		cout << setw(6) << names[i] << setw(10) << values[i] << endl;
	}
}
