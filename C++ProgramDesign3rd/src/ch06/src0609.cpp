#include <iostream>
#include <iomanip>

using namespace std;

void src0609() {
	// P177，二维数组举例
	cout << "--->" << "代码06-09（二维数组举例）" << "<---" << endl;

	int array2[2][3] = { {11,12,13},{21,22,23} };
	for (int i = 0; i < 2; i++) {
		cout << "二维数组第" << i << "行的首地址：" << *(array2 + i) << endl;
		cout << "二维数组第" << i << "行的数据：";
		for (int j = 0; j < 3; j++)
			cout << *(*(array2 + i) + j) << " ";
		cout << endl << endl;
	}
}
