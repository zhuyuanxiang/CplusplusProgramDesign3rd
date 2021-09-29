#include <iostream>
#include <iomanip>

using namespace std;

void print_stuff(float data_to_ignore);
void print_message(float list_this_data);
void print_float(float data_to_print);
void (*function_pointer)(float);	// void 类型的函数指针

void src0611() {
	// P180，函数指针
	cout << "--->" << "代码06-11（函数指针）" << "<---" << endl;

	float pi = (float)3.14159;
	float two_pi = (float)2.0 * pi;

	print_stuff(pi);
	function_pointer = print_stuff;
	function_pointer(two_pi);

	print_message(pi);
	function_pointer = print_message;
	function_pointer(two_pi);

	print_float(pi);
	function_pointer = print_float;
	function_pointer(two_pi);
}

void print_stuff(float data_to_ignore) {
	cout << "This is the print stuff function!\n";
}

void print_message(float list_this_data) {
	cout << "The data to be listed is " << list_this_data << endl;
}

void print_float(float data_to_print) {
	cout << "The data to be printed is " << data_to_print << endl;
}
