#include<iostream>

using namespace std;

void src1107() {
	// P382，getline()应用举例
	cout << "--->" << "代码11-07（getline()应用举例）" << "<---" << endl;

	char line[100];
	cout << "输入一行文本，用t结束：";
	cin.getline(line, 100, 't');
	cout << line;
}
