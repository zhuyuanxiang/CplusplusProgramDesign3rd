#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

void src0616() {
	// P187，动态创建对象
	cout << "--->" << "代码06-16（动态创建对象）" << "<---" << endl;

	cout << "Step one:" << endl;
	Point* Ptrl = new Point;
	cout << "Ptrl adddress:" << Ptrl << ",\tPtrl=" << Ptrl->GetXY() << endl;
	delete Ptrl;
	cout << "Step two:" << endl;
	Ptrl = new Point(1, 2);
	cout << "Ptrl adddress:" << Ptrl << ",\tPtrl=" << Ptrl->GetXY() << endl;
	delete Ptrl;
}
