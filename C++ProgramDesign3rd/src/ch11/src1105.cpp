#include<iostream>
#include<fstream>

using namespace std;

struct Date
{
	int mo, da, yr;
};

void src1105() {
	// P378，向文件输出
	cout << "--->" << "代码11-05（向文件输出）" << "<---" << endl;

	Date dt = { 6, 10, 92 };
	ofstream tfile("tmp\\date.dat", ios_base::binary);
	tfile.write((char*)&dt, sizeof(dt));
	tfile.close();

	cout << "文件 date.dat 输出完成，请核查！" << endl;
}
