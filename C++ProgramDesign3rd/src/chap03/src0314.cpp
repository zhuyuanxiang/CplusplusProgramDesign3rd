#include <iostream>
using namespace std;

inline void swap_14(int& a, int& b) {
	int t;
	t = a; a = b; b = t;
}
void src0314()
{
	// P76，内联函数：节省了参数传递和控制转移的开销。
	cout << "--->" << "代码3-14（内联函数）：" << "<---" << endl;
	int x(5), y(10);
	cout << "Before swap(x,y): " << "x=" << x << "; y=" << y << endl;
	swap_14(x, y);
	cout << "After swap(x,y): " << "x=" << x << "; y=" << y << endl;
	cout << "因为传递到函数中的是引用，因此函数中变量的内容交换后，主函数中变量的内容也发生了交换。" << endl;
}
