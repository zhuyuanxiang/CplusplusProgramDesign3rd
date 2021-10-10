#include <iostream>
#include <string>

using namespace std;

string trueFalse(int x)
{
	return (x ? "True" : "False");
}
void src0624()
{
	// P199，string 类应用示例
	cout << "--->" << "代码06-24（string 类应用示例）" << "<---" << endl;

	string S1 = "DEF", S2 = "123";
	char CP1[] = "ABC";
	char CP2[] = "DEF";

	cout << "S1=" << S1 << endl;
	cout << "S2=" << S2 << endl;
	cout << "S2.length = " << S2.length() << endl;

	cout << "CP1=" << CP1 << endl;
	cout << "CP2=" << CP2 << endl;

	cout << "S1<=CP1?" << trueFalse(S1 <= CP1) << endl;
	cout << "S1<=CP2?" << trueFalse(S1 <= CP2) << endl;

	S2 += S1;
	cout << "S2+S1=" << S2 << endl;
	cout << "S2.length = " << S2.length() << endl;
}
