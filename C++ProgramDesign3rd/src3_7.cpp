#include <iostream>

using namespace std;

void src3_7()
{
	// P70��Ƕ�׵��ã��������������������ǵ�ƽ����
	cout << "--->" << "����3-7��" << "<---" << endl;
	int a, b;
	int fun1(int x, int y);
	cout << "���� a �� b��";
	cin >> a >> b;
	cout << "a,b ��ƽ���ͣ�" << fun1(a, b) << endl;
}
int fun1(int x, int y) {
	int fun2(int m);
	return (fun2(x) + fun2(y));
}
int fun2(int m) {
	return (m * m);
}