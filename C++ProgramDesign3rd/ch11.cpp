#include<iostream>
#include"ch11.h"

using namespace std;

void ch11() {
	// P369，没有输入/输出语句，带有一个面向对象的输入/输出软件包，就是I/O流类库
	// 11.1 I/O 流的概念及流类库结构
	//     当程序与外界环境进行信息交换时，存在着两个对象：程序中的对象；文件对象
	//     流是一种抽象，负责在数据的生产者和数据的消费者之间建立联系，并且管理数据的流动
	//     程序将流对象看作是文件对象的化身：程序建立一个流对象，并且指定这个流对象与某个文件对象建立连接，程序操作流对象，流对象通过文件系统对所连接的文件对象产生作用。流对象就是程序中的对象与文件对象进行交换的界面，对程序对象而言，文件对象有的特性，流对象也有。
	//     凡是数据从一个地方传输到另一个地方的操作都是流的操作。例如：网络数据交换、文件数据交换、进程数据交换。
	//     （从流中）提取是读操作；（向流中）插入是写操作。
	// 11.2 输出流
	//     最重要的输出流：
	//     -   ostream：向标准设备输出，三个常用的类对象：
	//         -   cout：标准输出
	//         -   cerr：标准错误输出，没有缓冲，发送的内容立即输出
	//         -   clog：标准错误输出，存在缓冲，缓冲区满时输出
	//     -   ofstream：磁盘文件输出
	//     -   ostringstream
	//     11.2.1 构造输出流对象
	//         将信息输出到标准输出设备时，不需要构造输出流；将信息输出到文件，就需要构造输出流
	//     11.2.2 使用插入运算符和操作符

	cout << "===>Ch11<===" << endl;
	src1101();
	src1102();
	src1103();
	src1104();
}
