#include <iostream>
#include <numeric>

using namespace std;

void src1015()
{
	// P363，利用STL标准函数对象
	cout << "--->" << "代码10-15（标准函数对象）" << "<---" << endl;

	int A[] = { 1, 2, 3, 4, 5 };
	const int N = sizeof(A) / sizeof(int);
	cout << "The result by multipling all elements in A is:"
		<< accumulate(A, A + N, 1, multiplies<int>())
		<< endl;

	cout << "The result by plus all elements in A is:"
		<< accumulate(A, A + N, 1, plus<int>())
		<< endl;
}
