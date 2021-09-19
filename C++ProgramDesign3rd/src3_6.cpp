#include <iostream>
#include <cstdlib>

using namespace std;

int rolldice(void);

void src3_6()
{
	// 掷骰子游戏
	cout << "--->" << "代码3-6：" << "<---" << endl;
	int gamestatus;	// 1为胜；2为负；0为其他
	int sum, mypoint;
	unsigned seed;

	cout << "Please enter an unsigned integer: ";
	cin >> seed;//输入随机数种子
	srand(seed);
	sum = rolldice();
	switch (sum) {
	case 7:
	case 11:
		gamestatus = 1;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = 2;
		break;
	default:
		gamestatus = 0;
		mypoint = sum;
		cout << "point is " << mypoint << endl;
		break;
	}
	while (gamestatus == 0) {
		sum = rolldice();
		if (sum == mypoint) {
			cout << "player wins\n!";
		}
		else {
			if (sum == 7)
				cout << "player loses\n!";
		}
	}
		
}

int rolldice(void)
{
	int die1, die2, worksum;
	die1 = 1 + rand() % 6;
	die2 = 1 + rand() % 6;
	worksum = die1 + die2;
	cout << "player rolled: " << die1 << '+' << die2 << '=' << worksum << endl;
	return worksum;
}
