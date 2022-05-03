// Constructor _ clock.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//构造函数——时钟类

#include <iostream>
using namespace std;
class Clock {
public:
    Clock(int a, int b, int c);
    Clock():Clock(0,0,0){};//委托构造函数
    void setTime(int a, int b, int c);
    void showTime();
private:
    int hour, min, sec;
};
Clock::Clock(int a,int b,int c):hour(a),min(b),sec(c){}//有参构造函数实现
//Clock::Clock() : hour(0), min(0), sec(0) {}//无参构造函数实现

void Clock::setTime(int a, int b, int c) {
    hour = a;
    min = b; 
    sec = c;
}
void Clock::showTime() {
    cout << hour << ":" << min << ":" << sec << endl;
}
int main()
{
    Clock c1(1, 2, 3);//含参初始化函数并初始化
    Clock c2;

    c1.showTime();
    c2.showTime();//c2不另外初始化，会使用默认初始化值0，0，0
    //int i = 0, j = 0, k = 0, n = 0;
    //int a = 0, b = 0, c = 0, d = 0;
    //while (i < 10) { a += i; i++;}
    //cout << i<< a << endl;//10,45
    //while (j < 10) { b += j; ++j;}
    //cout << j<< b << endl;//10,45
    //for (k; k < 10; k++) { c += k; }
    //cout << k<< c << endl;//10,45
    //for (n; n < 10; ++n) { d += n; }
    //cout << n<< d << endl;//10,45

    return 0;
}

 //运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
 //调试程序: F5 或调试 >“开始调试”菜单

 //入门使用技巧: 
 //  1. 使用解决方案资源管理器窗口添加/管理文件
 //  2. 使用团队资源管理器窗口连接到源代码管理
 //  3. 使用输出窗口查看生成输出和其他消息
 //  4. 使用错误列表窗口查看错误
 //  5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
 //  6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

