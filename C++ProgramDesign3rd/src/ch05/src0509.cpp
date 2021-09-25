#include <iostream>
using namespace std;

class A {
public:
	A(int i);
	void print();
	const int& c;
private:
	const int a;
	static const int b;	// 静态常数据成员
};
const int A::b = 10;	// 静态常数据成员在类外说明和初始化
A::A(int i) :a(i), c(a) // 常数据成员只能通过初始化列表来获得初值
{

}
void A::print() {
	cout << a << ":" << b << ":" << c << endl;
	// a = 999; b = 20; c = 30; // 常数据成员不可被更新
}
void src0509()
{
	// P140，常数据成员
	cout << "--->" << "代码05-09（常数据成员）" << "<---" << endl;

	A a1(100), a2(0);
	a1.print(); a2.print();

}
