#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void src1001()
{
	// P336，向量容器示例：求范围2~N中的质数
	cout << "--->" << "代码10-01（向量容器示例）" << "<---" << endl;

	int vectorSize = 10, primeCount = 0;
	vector<int> primeVector(vectorSize);
	int n;
	cout << "Enter a value >= 2 as upper limit for prime numbers: ";
	cin >> n;
	primeVector[primeCount++] = 2;	// 2 是第一个质数
	for (int i = 3; i < n; i++)
	{
		if (primeCount == primeVector.size())	// 如果质数向量容器满了，就再申请10个元素的空间
			primeVector.resize(long long(primeCount) + long long(vectorSize));
		if (i % 2 == 0)							// 大于 2 的偶数不是质数
			continue;
		// 检查奇数是不是i的因子
		int j = 3;
		while (j <= i / 2 && i % j != 0)
			j += 2;
		if (j > i / 2)	// 如果上述奇数不是 i 的因子，则 i 为质数
			primeVector[primeCount++] = i;
	}
	for (int i = 0; i < primeCount; i++)
	{
		cout << setw(5) << primeVector[i];
		if (i + 1 < primeCount)
			cout << ",";
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
	cout << endl;
}
