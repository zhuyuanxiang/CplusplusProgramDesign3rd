#include <iostream>
using namespace std;

void src3_9()
{
	// P73���ݹ��㷨����n������ѡ��k�������ίԱ��ķ����ж����֣�
	cout << "--->" << "����3-9��" << "<---" << endl;
	int n, k;
	int comm(int n, int k);
	cout << "��������ϣ�Enter the number of n & k for C^n_k: ";
	cin >> n >> k;
	cout << comm(n, k) << endl;
}

int comm(int n, int k) {
	if (k > n) return 0;
	else if (n == k || k == 0) return 1;
	else return comm(n - 1, k) + comm(n - 1, k - 1);
}
