#include "..\..\include\Calculator.h"

void Calculator::Enter(int num)
{
	S.Push(num);
}

bool Calculator::GetTwoOperands(int& opnd1, int& opnd2)
{
	if (S.StackEmpty())
	{
		cerr << "Missing operand!" << endl;
		return false;
	}
	opnd1 = S.Pop();
	if (S.StackEmpty())
	{
		cerr << "Missing operand!" << endl;
		return false;
	}
	opnd2 = S.Pop();
	return true;
}

void Calculator::Compute(char op)
{
	bool result;
	int operand1, operand2;

	result = GetTwoOperands(operand1, operand2);

	if (result)
	{
		switch (op)
		{
		case'+':
			S.Push(operand2 + operand1);
			break;
		case'-':
			S.Push(operand2 - operand1);
			break;
		case'*':
			S.Push(operand2 * operand1);
			break;
		case'/':
			if (operand1 == 0)
			{
				cerr << "Divide by 0!" << endl;
				S.ClearStack();
			}
			else
				S.Push(operand2 / operand1);
			break;
		case'^':
			S.Push(pow(operand2, operand1));
			break;
		default:
			cerr << "Wrong operand!" << endl;
			exit(1);
		}
		cout << '=' << S.Peek() << ' ';	// 输出本次运算结果
	}
	else
		S.ClearStack();
}

Calculator::Calculator(void)
{
}

void Calculator::Run(void)
{
	char c[20];
	while (cin >> c, *c != 'q')
		switch (*c)
		{
		case'c':
			S.ClearStack();
			break;
		case'-':
			if (strlen(c) > 1)
				Enter(atoi(c));
			else
				Compute(*c);
			break;
		case'+':
		case'*':
		case'/':
		case'^':
			Compute(*c);
			break;
		default:
			Enter(atoi(c));
			break;
		}
}

void Calculator::Clear(void)
{
	S.ClearStack();
}
