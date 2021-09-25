#include <iostream>
using namespace std;

class A {
public:
	A(int i);
	void print();
	const int& c;
private:
	const int a;
	static const int b;
};
const int A::b = 10;
A::A(int i) :a(i), c(a) {

}
void A::print() {
	cout << a << ":" << b << ":" << c << endl;
}
void src0509()
{
	// P140，常数据成员
	cout << "--->" << "代码05-09（常数据成员）" << "<---" << endl;

	A a1(100), a2(0);
	a1.print(); a2.print();

}
