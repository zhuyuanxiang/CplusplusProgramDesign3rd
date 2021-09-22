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
	y = new Barney();
}

Fred::~Fred()
{
	delete y;
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
