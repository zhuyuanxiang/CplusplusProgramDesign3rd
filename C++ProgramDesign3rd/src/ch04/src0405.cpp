#include <iostream>
using namespace std;

class Barney;

class Fred
{
public:
	Fred();
	~Fred();
	void yabbaDabbaDo();
private:
	Barney* y;
};

class Barney
{
public:
	Barney();
	~Barney();
	void method();
private:
	Fred* x;
};

Barney::Barney()
{
	x = new Fred();
}

Barney::~Barney()
{
	delete x;
}

void Barney::method()
{
	x->yabbaDabbaDo();
}

Fred::Fred()
{
	// Fred 与 Barney 不能循环生成，否则会导致内存耗尽
	// y = new Barney();
	y = NULL;
}

Fred::~Fred()
{
	// delete y;
}

void Fred::yabbaDabbaDo()
{
}

void src0405() {
	// P112，前向引用声明
	cout << "--->" << "代码04-05（前向引用声明）：" << "<---" << endl;

	Fred x;
	Barney y;
}
