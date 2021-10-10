#include <iostream>

using namespace std;

void src0622()
{
	// P1195，输出一个字符串
	cout << "--->" << "代码06-22（输出一个字符串）" << "<---" << endl;

	static char c[10] = { 'I',' ','a','m',' ','a',' ','b','o','y' };
	for (int i = 0; i < 10; i++)
		cout << c[i];
	cout << endl;

	char d[10] = { 'I',' ','a','m',' ','a',' ','b','o','y' };	// 使用 static 修饰与字符串数组无关
	for (int i = 0; i < 10; i++)
		cout << d[i];
	cout << endl;

}
