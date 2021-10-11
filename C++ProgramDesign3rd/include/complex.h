#pragma once
class complex
{
public:
	complex(double r = 0.0, double i = 0.0);
	//complex operator + (complex c2);
	//complex operator -(complex c2);
	friend complex operator +(complex c1, complex c2);
	friend complex operator -(complex c1, complex c2);
	void display();
private:
	double real;
	double imag;
};
