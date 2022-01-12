#include<iostream>
#include<fstream>

using namespace std;

void src1109() {
	// P384，用 seekg() 设置位置指针
	cout << "--->" << "代码11-09（用 seekg() 设置位置指针）" << "<---" << endl;

	char ch;
	ifstream tfile("tmp\\payroll", ios_base::binary);
	if(tfile){
		tfile.seekg(8);	// struct 中 double 占用 8 个字节
		while(tfile.good())
		{
			tfile.get(ch);
			if(!ch)
				break;
			cout << ch;
		}
	}else{
		cout << "ERROR: Cannot open the file 'payroll'." << endl;
	}
	tfile.close();
}
