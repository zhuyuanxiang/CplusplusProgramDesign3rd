#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int t;
	t = a; a = b; b = t;
}
void src0312()
{
	// P76，引用传递：变量交换
	cout << "--->" << "代码3-12（引用传递）：" << "<---" << endl;
	int x(5), y(10);
	cout << "Before swap(x,y): " << "x=" << x << "; y=" << y << endl;
	swap(x, y);
	cout << "After swap(x,y): " << "x=" << x << "; y=" << y << endl;
	cout << "因为传递到函数中的是引用，因此函数中变量的内容交换后，主函数中变量的内容也发生了交换。" << endl;
}
