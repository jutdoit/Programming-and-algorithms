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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
    