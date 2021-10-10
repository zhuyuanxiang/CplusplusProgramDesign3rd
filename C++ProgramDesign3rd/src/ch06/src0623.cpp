#include <iostream>

using namespace std;

void src0623()
{
	// P196，输出一个钻石图形
	cout << "--->" << "代码06-23（输出一个钻石图形）" << "<---" << endl;

	// 二维字符数组的声明和初始化，未被初始化的元素的初始值为0
	static char diamond[][5] = { {' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'} };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 && diamond[i][j] != 0; j++)
			cout << diamond[i][j];
		cout << endl;
	}

	// 注：没有 \0 结尾的字符数组不是字符串
}
