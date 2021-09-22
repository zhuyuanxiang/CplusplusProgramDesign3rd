#include <iostream>
#include "../../include/Point.h"

using namespace std;

void fun1_02(Point p) {
	cout << p.GetX() << endl;
}

Point fun2_02() {
	Point A(1, 2);
	cout << A.GetX() << endl;
	return A;
}

void src0402()
{
	// P103，Point类（拷贝构造函数的调用方式）
	cout << "--->" << "代码04-02（拷贝构造函数的调用方式）：" << "<---" << endl;
	Point A(4, 5);
	cout << "1. 基于拷贝构造函数使用A初始化B" << endl;
	Point B(A);
	cout << B.GetX() << endl;
	cout << "2. 函数的形参是类的对象，调用函数时，需要复制一个对象" << endl;
	fun1_02(B);
	cout << "3. 函数的返回值是类的对象，函数返回时，需要复制一个对象" << endl;
	Point C = fun2_02();
	cout << C.GetX() << endl;
	cout << "拷贝构造与析构案例结束。" << endl;
}
