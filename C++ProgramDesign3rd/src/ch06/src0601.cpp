#include <iostream>
#include <iomanip>

using namespace std;

void src0601() {
	// P159，数组的声明与使用
	cout << "--->" << "代码06-01（数组的声明与使用）" << "<---" << endl;

	int A[10], B[10];
	for (int i = 0; i < 10; i++) {
		A[i] = i * 2 - 1;
		B[10 - i - 1] = A[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << "A[" << i << "]= " << setw(3) << A[i] << ",\t";
		cout << "B[" << i << "]= " << setw(3) << B[i] << endl;
	}
}
