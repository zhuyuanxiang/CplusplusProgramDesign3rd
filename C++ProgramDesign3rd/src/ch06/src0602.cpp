﻿#include <iostream>
#include <iomanip>

using namespace std;

void RowSum(int A[][4], int row) {
	for (int i = 0; i < row; i++) {
		for (int j = 1; j < 4; j++)
			A[i][0] += A[i][j];
	}
}
void src0602() {
	// P162，使用数组名作为函数参数
	cout << "--->" << "代码06-02（使用数组名作为函数参数）" << "<---" << endl;

	int Table[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			cout << Table[i][j] << " ";
		cout << endl;
	}
	RowSum(Table, 3);
	for (int i = 0; i < 3; i++)
		cout << "Sum of row " << i << " is " << Table[i][0] << endl;
}
