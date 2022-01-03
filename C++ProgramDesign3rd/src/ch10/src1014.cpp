#include <iostream>
#include <numeric>

using namespace std;

class multclass
{
public:
	int operator()(int x, int y) const { return x * y; }  // 重载操作符 operator
};

void src1014()
{
	// P361，利用类来定义函数对象
	cout << "--->" << "代码10-14（利用类来定义函数对象）" << "<---" << endl;

	int A[] = { 1, 2, 3, 4, 5 };
	const int N = sizeof(A) / sizeof(int);
	cout << "The result by multipling all elements in A is:"
		<< accumulate(A, A + N, 1, multclass())   // 将普通函数 mult() 传递给通用算法
		<< endl;
}
