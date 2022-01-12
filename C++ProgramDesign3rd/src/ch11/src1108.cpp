#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void src1108()
{
	// P383，从一个payroll文件读一个二进制记录到一个结构中
	cout << "--->"
		<< "代码11-08（从一个payroll文件读一个二进制记录到一个结构中）"
		<< "<---" << endl;

	struct
	{
		double salary;
		char name[23];
	} employee1, employee2;

	employee1.salary = 8000;
	strcpy_s(employee1.name, "张三 李四");
	ofstream outfile("tmp\\payroll", ios_base::binary);
	outfile.write((char*)&employee1, sizeof(employee1));
	outfile.close();
	ifstream is("tmp\\payroll", ios_base::binary);
	if (is)
	{
		is.read((char*)&employee2, sizeof(employee2));
		cout << employee2.name << ' ' << employee2.salary << endl;
	}
	else {
		cout << "ERROR: Cannot open file 'payroll'." << endl;
	}
	is.close();
}
