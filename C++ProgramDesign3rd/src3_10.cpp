#include <iostream>
using namespace std;

void move(char get_one, char put_one) {
	cout << get_one << "-->" << put_one << endl;
}
void hanoi(int n, char one, char two, char three) {
	if (n == 1) move(one, three);
	else {
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}
void src3_10()
{
	// P74，汉诺塔问题
	cout << "--->" << "代码3-10：" << "<---" << endl;
	int m;
	cout << "(汉诺塔问题)Enter the number of diskes: ";
	cin >> m;
	cout << "the steps to moving " << m << " diskes: " << endl;
	hanoi(m, 'A', 'B', 'C');
}
