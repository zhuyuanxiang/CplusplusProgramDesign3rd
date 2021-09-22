#include <iostream>
using namespace std;

int i;
void src0501()
{
	// P126，不同作用域的变量使用
	cout << "--->" << "代码05-01（不同作用域的变量使用）：" << "<---" << endl;

	i = 5;
	{int i; i = 7; cout << "i=" << i << endl; }
	cout << "i=" << i << endl;
}
