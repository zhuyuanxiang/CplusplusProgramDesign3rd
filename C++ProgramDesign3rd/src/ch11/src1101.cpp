#include<iostream>

using namespace std;

void src1101() {
	// P373，使用 width 函数控制输出宽度
	cout << "--->" << "代码11-01（使用 width 函数控制输出宽度）" << "<---" << endl;

	double values[] = { 1.23, 35.36, 653.7, 4358.24 };
	for (int i = 0; i < 4; i++)
	{
		cout.width(10);
		cout << values[i] << endl;
	}
}
