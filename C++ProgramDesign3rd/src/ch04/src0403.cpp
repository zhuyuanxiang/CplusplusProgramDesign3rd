#include <iostream>
using namespace std;

const float PI = (float)3.14159;
const float FencePrice = 35.;
const float ConcretePrice = 20.;


class Circle {
public:
	Circle(float r);	// 构造函数
	float Circumference();	// 圆周长
	float Area();	// 圆面积
private:
	float radius;	// 圆半径
};


Circle::Circle(float r)
{
	radius = r;
}

float Circle::Circumference()
{
	return 2 * PI * radius;
}

float Circle::Area()
{
	return PI * radius * radius;
}


void src0403()
{
	// P106，Circle类（Todo:没有使用析构函数）
	cout << "--->" << "代码04-03（）：" << "<---" << endl;

	float radius;
	float FenceCost, ConcreteCost;
	cout << "Enter the radius of the pool: ";
	cin >> radius;
	Circle Pool(radius);
	Circle PoolRim(radius + 3);
	FenceCost = PoolRim.Circumference() * FencePrice;
	cout << "Fencing Cost in $" << FenceCost << endl;
	ConcreteCost = (PoolRim.Area() - Pool.Area()) * ConcretePrice;
	cout << "Concrete Cost is $" << ConcreteCost << endl;
}
