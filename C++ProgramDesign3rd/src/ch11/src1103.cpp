#include<iostream>
#include<iomanip>

using namespace std;

void src1103() {
	// P374，设置对齐方式
	// 通过带参数的 setiosflags 操纵符来设置对齐方式
	// -   iso_base::skipws    在输入中路过空白
	// -   iso_base::left      左对齐，其余使用填充字符
	// -   iso_base::right     右对齐（默认），其余使用填充字符
	// -   iso_base::internal  在规定的宽度内，指定前缀符号之后、数值之前插入指定的填充字符
	// -   iso_base::dec       以十进制形式格式化数值（默认）
	// -   iso_base::oct       以八进制形式格式化数值
	// -   iso_base::hex       以十六进制形式格式化数值
	// -   iso_base::showbase  插入前缀符号以表明整数的数制
	// -   iso_base::showpoint 对浮点数值显示小数点和尾部的 0
	// -   iso_base::uppercase 十六进制数值显示的字母大写，科学格式显示的字母E大写
	// -   iso_base::showpos   非负数显示正号（+）
	// -   iso_base::scientific    科学格式显示浮点数值
	// -   iso_base::fixed     定点格式显示浮点数值（没有指数部分）
	// -   iso_base::unitbuf   在每次插入之后转储并且清除缓冲区内容
	cout << "--->" << "代码11-03（设置对齐方式）" << "<---" << endl;

	double values[] = { 1.23, 35.36, 653.7, 4358.24 };
	const char* names[] = { "Zoot", "Jimmy", "Al", "Stan" };
	for (int i = 0; i < 4; i++)
	{
		cout << setiosflags(ios_base::left) << setw(6) << names[i] << setw(10) << values[i] << endl;
	}
}
