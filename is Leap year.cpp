﻿// is Leap year.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    //std::cout << "Hello World!\n";
    //int a, b;
    //cin >> a >> b;//3 4
    //cout << "a=" << a << "\n" << "b=" << b << endl;
    //a=3 b=4
    //setw(int),设置域宽
    //setfill()，填充
    //cout << setprecision(4) << 3.1415926;
    //输出3.142，setprecision(int)设置浮点数小数位数（包含小数点）
    //闰年判断
    int years;
    cout << "please input value of years:";
    cin >> years;
    bool isRun;
    isRun = years % 400 == 0 || (years % 4 == 0 && years % 100 != 0);
    if (isRun)
        cout << years << "是闰年！";
    else
        cout << years << "不是闰年！";
    return 0;
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
