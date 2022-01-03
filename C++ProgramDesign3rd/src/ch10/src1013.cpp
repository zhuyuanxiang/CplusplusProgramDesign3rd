#include <iostream>
#include <numeric>

using namespace std;

int mult(int x, int y) { return x * y; }

void src1013()
{
	// P361，利用普通函数来定义函数对象
	cout << "--->" << "代码10-13（利用普通函数来定义函数对象）" << "<---" << endl;

	int A[] = { 1, 2, 3, 4, 5 };
	const int N = sizeof(A) / sizeof(int);
	cout << "The result by multipling all elements in A is:"
		<< accumulate(A, A + N, 1, mult)   // 将普通函数 mult() 传递给通用算法
		<< endl;
}
