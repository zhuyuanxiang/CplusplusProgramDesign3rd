#include <iostream>
using namespace std;

void src0304()
{
	//寻找并输出11~999之间的数m，保证m,m*m,m*m*m都是回文数字
	cout << "--->" << "代码3-4：" << "<---" << endl;
	bool symm(long n);
	long m;
	for (m = 11; m < 1000; m++)
		if (symm(m) && symm(m * m) && symm(m * m * m))
			cout << "m=" << m << " m*m=" << m * m << " m*m*m=" << m * m * m << endl;
}

bool symm(long n)
{
	long i, m;
	i = n; m = 0;
	while (i)
	{
		m = m * 10 + i % 10;
		i = i / 10;
	}
	return(m == n);
}
