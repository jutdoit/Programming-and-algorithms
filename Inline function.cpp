// Inline function.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cmath>
using namespace std;
const double PI = 3.1415926;
void graphics(int k) {
    switch (k) {
    case 1:cout << "正方形"<<endl; break;
    case 2:cout << "正三角形"<<endl; break;
    case 3:cout << "正圆形"<< endl; break;
    default:cout << "输入错误，无法计算" << endl; break;
    }
}
inline double area(int k, int h) {//内联函数，不能有循环和switch语句
    double area;
    if (k == 1) {
        area = (h * h) / 16.0;
    }
    else if(k == 2) {
        area = (h * h) / (12 * sqrt(3));
    }
    else {
        area = (h * h) / (4 * PI);
    }
    return area;
}
int main()
{
    int k, h;
    double s;
    cout << "请输入图形类别:";
    cin >> k;
    graphics(k);
    cout << "请输入边长：";
    cin >> h;
    s = area(k, h);
    cout << "该图形面积为:" << s;
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
