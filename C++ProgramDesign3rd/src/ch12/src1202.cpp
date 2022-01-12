#include <iostream>

using namespace std;

void MyFunc(void);

class Expt
{
public:
	Expt() { cout << "构造Expt" << endl; };
	~Expt() { cout << "析构Expt" << endl; };
	const char* ShowReason() const
	{
		return "Expt 类异常。";
	}
};

class Demo
{
public:
	Demo();
	~Demo();
};

Demo::Demo()
{
	cout << "构造Demo" << endl;
}

Demo::~Demo()
{
	cout << "析构Demo" << endl;
}

void MyFunc()
{
	Demo D;
	cout << "在MyFunc()中抛出Expt类异常" << endl;
	throw Expt();
}

void src1202()
{
	// P394，使用带析构语义的类的C++异常处理
	cout << "--->"
		<< "代码12-02（使用带析构语义的类的C++异常处理）"
		<< "<---" << endl;

	cout << "在 src1202() 中" << endl;
	try
	{
		cout << "在try块中，调用MyFunc()" << endl;
		MyFunc();
	}
	catch (Expt E)
	{
		cout << "在 catch 异常处理中" << endl;
		cout << "捕捉Expt类型异常" << endl;
		cout << E.ShowReason() << endl;
		// ToDo: 为什么会析构两次Expt？
	}
	catch (char* str)
	{
		cout << "捕捉到其他的异常" << str << endl;
	}
	cout << "回到 src1202()中，从这里恢复执行" << endl;
}
