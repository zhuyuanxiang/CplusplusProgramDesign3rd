#include<iostream>

using namespace std;

int Div(int x, int y);

void src1201(){
    // P392，处理除零异常
    cout << "--->" << "代码12-01（处理除零异常）" << "<---" << endl;
    try{
        cout << "5/2=" << Div(5, 2) << endl;
        cout << "8/0=" << Div(8, 0) << endl;
        cout << "7/1=" << Div(7, 1) << endl;
    }catch(int){
        cout << "except of dividing zero." << endl;
    }
    cout << "that is ok." << endl;
}

int Div(int x, int y){
    if(y==0)
        throw y;
    return x / y;
}