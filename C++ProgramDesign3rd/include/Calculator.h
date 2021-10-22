#pragma once
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

#include "Stack.h"

class Calculator
{
private:
	Stack<int> S;
	void Enter(int num);
	bool GetTwoOperands(int& opnd1, int& opnd2);
	void Compute(char op);
public:
	Calculator(void);
	void Run(void);
	void Clear(void);
};
