#include <iostream>
#include <iomanip>

using namespace std;

void src0608() {
	// P175，利用指针数组输出单位矩阵
	cout << "--->" << "代码06-08（利用指针数组输出单位矩阵）" << "<---" << endl;

	int line1[] = { 1,0,0 }, line2[] = { 0,1,0 }, line3[] = { 0,0,1 };
	int* p_line[3];
	p_line[0] = line1; p_line[1] = line2; p_line[2] = line3;

	cout << "Matrix test:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << p_line[i][j] << " ";
		cout << endl;
	}

}
