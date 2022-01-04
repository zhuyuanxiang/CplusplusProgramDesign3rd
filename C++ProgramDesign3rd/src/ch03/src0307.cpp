#include <iostream>

using namespace std;

void src0307()
{
	// P70，嵌套调用：输入两个整数，求它们的平方和
	cout << "--->" << "代码3-7：" << "<---" << endl;
	int a, b;
	int fun1(int x, int y);
	cout << "输入 a 和 b：";
	cin >> a >> b;
	cout << "a,b 的平方和：" << fun1(a, b) << endl;
}
int fun1(int x, int y) {
	int fun2(int m);
	return (fun2(x) + fun2(y));
}
int fun2(int m) {
	return (m * m);
}
