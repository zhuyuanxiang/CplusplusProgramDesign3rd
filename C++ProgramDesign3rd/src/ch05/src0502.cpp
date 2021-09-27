#include <iostream>

using namespace std;

extern int c_i;

void src0502() {
	// P128，变量的生存期与可见性
	cout << "--->" << "代码05-02（变量的生存期与可见性）" << "<---" << endl;

	cout << "extern int i=" << c_i << endl;
	static int a;
	int b = -10, c = 0;
	void other(void);
	cout << "---MAIN---\n";
	cout << "i: " << c_i << ", a: " << a << ", b: " << b << ", c: " << c << endl;
	c = c + 8; other();
	cout << "---MAIN---\n";
	cout << "i: " << c_i << ", a: " << a << ", b: " << b << ", c: " << c << endl;
	c_i = c_i + 10; other();
	cout << "extern int i=" << c_i << endl;
}

void other(void) {
	static int a = 2, b;	// 静态局部变量，全局寿命，局部可见，第一次进入函数时被初始化
	int c = 10;
	a = a + 2; c_i = c_i + 32; c = c + 5;
	cout << "---OTHER---\n";
	cout << "i: " << c_i << ", a: " << a << ", b: " << b << ", c: " << c << endl;
	b = a;
}
