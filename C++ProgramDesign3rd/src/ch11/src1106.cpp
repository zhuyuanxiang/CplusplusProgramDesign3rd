#include<iostream>

using namespace std;

void src1106() {
	// P382，get()应用举例
	cout << "--->" << "代码11-06（get()应用举例）" << "<---" << endl;

	char ch;
	while ((ch = cin.get()) != EOF)	// EOF==Ctrl+z
		cout.put(ch);
}
