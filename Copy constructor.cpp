// Copy constructor.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Point {
public:
    Point(int xx, int yy) { x = xx; y = yy; }
    Point(const Point& p);
    void setX(int xx) { x = xx; }
    void setY(int yy) { y = yy; }
    int getX() const { return x; }
    int getY() const { return y; }
private:
    int x;
    int y;
};
Point::Point(const Point& p) {
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor " << endl;

}
void fun1(Point p) {
    cout << p.getX() << endl;
}
Point fun2() {
    Point a(1,2);
    return a;
}
int main()
{
    Point a(1, 2);
    Point b(a); //用a初始化b。第一次调用拷贝复制函数
    cout << b.getX() << endl;
    fun1(b); //对象b作为fun1的实参。第二次调用拷贝复制函数
    b = fun2(); //函数的返回值是类对象。第三次调用拷贝复制函数
    cout << b.getX() << endl;
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
