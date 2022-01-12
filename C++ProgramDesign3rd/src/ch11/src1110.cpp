#include<iostream>
#include<fstream>

using namespace std;

void src1110() {
	// P384，读取一个文件并且显示出其中空格的位置
	cout << "--->" << "代码11-10（读取一个文件并且显示出其中空格的位置）" << "<---" << endl;

	char ch;
	ifstream tfile("tmp\\payroll", ios_base::binary);
	if (tfile) {
		tfile.seekg(8);	// struct 中 double 占用 8 个字节
		while (tfile.good())
		{
			streampos here = tfile.tellg();
			tfile.get(ch);
			if (ch==' ')
				cout << "Position" << here << " is a space" << endl;
		}
	}
	else {
		cout << "ERROR: Cannot open the file 'payroll'." << endl;
	}
	tfile.close();
}
