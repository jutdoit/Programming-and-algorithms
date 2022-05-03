// Function overloading.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//函数重载：编译器区分重载函数的标志是形参个数和形参类型，不以返回值和形参名区分
//不要把功能不同的函数定义为重载函数，不利于使用

#include <iostream>
#include<cmath>
using namespace std;
//形参类型不同
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
//形参个数不同
int add(int a, int b, int c) {
    return a + b + c;
}
double add(double a, double b, double c) {
    return(a + b + c);
}
int main()
{
    int aa(1), bb = 2, cc = 3;
    double AA = 9.123, BB = 8.123, CC = 7.123;
    cout << add(aa, bb, cc) << endl;
    cout << add(AA, BB, CC) << endl;
    cout << add(aa, bb) << endl;
    cout << add(AA, BB) << endl;
    cout << pow(bb, cc);//pow(x,y)求x的y次方
    return(0);
    //用统一名称函数实现对不同数据类型或不同数据个数的操作
}

    
