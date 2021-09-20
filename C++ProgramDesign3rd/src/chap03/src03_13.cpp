#include <iostream>
#include <iomanip>

using namespace std;

void fiddle(int a, int& b) {
	a = a + 100; b = b + 100;
	cout << "The values are :";
	cout << "a=" << setw(5) << a;
	cout << "; b=" << setw(5) << b << endl;

	int t;
	t = a; a = b; b = t;
}
void src03_13()
{
	// P76，引用举例
	cout << "--->" << "代码3-13（引用举例）：" << "<---" << endl;
	int x(5), y(10);
	cout << "Before fiddle(x,y): " << "x=" << x << "; y=" << y << endl;
	fiddle(x, y);
	cout << "After fiddle(x,y): " << "x=" << x << "; y=" << y << endl;
	cout << "因为传递到函数中的是引用，因此函数中变量的内容交换后，主函数中变量的内容也发生了交换。" << endl;
}
