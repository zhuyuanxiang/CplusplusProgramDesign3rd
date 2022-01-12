#include<iostream>
#include"ch12.h"

using namespace std;

void ch12() {
	// P390，Ch12，异常处理
	// 12.1 异常处理的基本思想
	// 		程序中的某些错误是可以预料，但是无法避免的，因此需要为这些问题准备方法允许用户排除这些错误，继续运行程序；至少要给出适当的提示信息。
	// 12.2 C++异常处理的实现
	// 		C++内置了异常处理机制，程序可以向更高的执行上下文传递事件，从而使程序能够从这些异常中恢复过来。
	// 		12.2.1 异常处理的语法
	// 		12.2.2 异常接口声明
	// 12.3 异常处理中的构造与析构
	// 12.4 标准程序库的异常处理
	cout << "===>Ch12<===" << endl;
	src1201();
	src1202();
}
