// Classes and objects.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//类和对象简单应用

#include <iostream>
using namespace std;
//类的定义
class Clock {
public:
    void setTime(int hour=0, int minute=0, int scound=0);
    int abc() { return 10; }//内联函数
    void showTime();
private:
    int a, b, c;
    //int a = 0, b = 0, c = 0;类内初始化
};
//成员类的实现
void Clock::setTime(int hour, int minute, int scound) {
    a = hour;
    b = minute;
    c = scound;
}
void Clock::showTime() {
    cout << a << "时" << b << "分" << c << "秒"<<endl;
}
int main()
{
    //
    Clock myClock;
    myClock.setTime(1,2,3);
    myClock.setTime(9);//此次调用会覆盖前次赋值
    myClock.showTime();
    cout<<myClock.abc();
    return 0;
}
