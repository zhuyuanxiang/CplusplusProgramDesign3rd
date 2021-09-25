#include <iostream>

using namespace std;

extern int i;

void src0501()
{
	// P126，不同作用域的变量使用
	cout << "--->" << "代码05-01（不同作用域的变量使用）" << "<---" << endl;

	cout << "extern int i=" << i << endl;
	i = 5;
	{int i; i = 7; cout << "i=" << i << endl; }
	cout << "extern int i=" << i << endl;
}
