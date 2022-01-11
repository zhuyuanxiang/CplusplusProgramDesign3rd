#include<iostream>
#include<iomanip>

using namespace std;

void src1104() {
	// P376，控制输出精度
	cout << "--->" << "代码11-04（控制输出精度）" << "<---" << endl;
    cout << setiosflags(ios_base::fixed);   // 使用固定格式显示
    // cout << setiosflags(ios_base::scientific);   // 使用科学格式显示

    double values[] = { 1.23, 35.36, 653.7, 4358.24 };
	const char* names[] = { "Zoot", "Jimmy", "Al", "Stan" };
	for (int i = 0; i < 4; i++)
	{
        cout << setiosflags(ios_base::left)
             << setw(6) << names[i]
             << setiosflags(ios_base::left)
             << setw(10) << setprecision(1) << values[i] << endl;
    }
}
