#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

void src0619() {
	// P190，动态创建多维数组
	cout << "--->" << "代码06-19（动态创建多维数组）" << "<---" << endl;

	int(*cp)[4][3];
	cp = new int[3][4][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 3; k++)	// 注意：这里越界后，系统编译不会出错，但是执行可能会出问题
				*(*(*(cp + i) + j) + k) = i * 100 + j * 10 + k;	// 通过指针访问数组元素
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 9; k++)
				cout << cp[i][j][k] << " ";	// 将指针 cp 作为数组名使用，通过数组名和下标访问数组元素
			cout << endl;
		}
		cout << endl;
	}
}
