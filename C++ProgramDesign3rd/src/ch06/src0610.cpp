#include <iostream>
#include <iomanip>

using namespace std;

void splitFloat(float x, int* intPart, float* fracParc) {
	*intPart = int(x);
	*fracParc = x - *intPart;
}
void src0610() {
	// P178，读入三个浮点数，将 整数部分与小数部分 分别输出
	cout << "--->" << "代码06-10（读入三个浮点数，将 整数部分与小数部分 分别输出）" << "<---" << endl;

	cout << "Enter 3 float point numbers: " << endl;
	for (int i = 0; i < 3; i++) {
		int n;
		float x, f;
		cin >> x;
		splitFloat(x, &n, &f);
		cout << "Integer Part=" << n << ",\tFraction Part=" << f << endl;
	}
}
