#include <iostream>
#include <iomanip>
#include "ch0903.h"

using namespace std;


void src0903()
{
	// P293，数组类
	cout << "--->" << "代码09-03（数组类）" << "<---" << endl;

	int size = 3;
	Array<int> A(size);
	void read(int* p, int n);
	read(A, size);

	// P300，Array 类的应用
	cout << "--->" << "代码09-04（Array 类的应用）" << "<---" << endl;
	size = 10;
	Array<int> P(size);
	int i, j, n;
	int primecount = 0;

	cout << "Enter a value >=2 as upper limit for prime numbers: ";
	cin >> n;

	A[primecount++] = 2;	// 2 是一个质数
	for (i = 3; i < n; i++)
	{
		if (primecount == A.ListSize())
			A.Resize(primecount + 10);
		if (i % 2 == 0)
			continue;
		j = 3;
		while (j <= i / 2 && i % j != 0)
			j += 2;
		if (j > i / 2)
			A[primecount++] = i;
	}

	for (i = 0; i < primecount; i++)
	{
		cout << setw(5) << A[i];
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
	cout << endl;


}
void read(int* p, int n)
{
	for (int i = 0; i < n; i++)
		cin >> p[i];
}
