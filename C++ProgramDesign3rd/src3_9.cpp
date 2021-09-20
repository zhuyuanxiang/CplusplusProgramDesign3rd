#include <iostream>
using namespace std;

void src3_9()
{
	// P73，递归算法：从n个人中选择k个人组成委员会的方法有多少种？
	cout << "--->" << "代码3-9：" << "<---" << endl;
	int n, k;
	int comm(int n, int k);
	cout << "（计算组合）Enter the number of n & k for C^n_k: ";
	cin >> n >> k;
	cout << comm(n, k) << endl;
}

int comm(int n, int k) {
	if (k > n) return 0;
	else if (n == k || k == 0) return 1;
	else return comm(n - 1, k) + comm(n - 1, k - 1);
}
