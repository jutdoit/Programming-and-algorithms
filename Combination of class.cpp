// Combination of class.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Point {
public:
    Point(int xx, int yy) {
        x = xx;
        y = yy;
    };
    int getX() { return x; }
    int getY() { return y; }
    Point(const Point& p);
private:
    int x;
    int y;
};
Point::Point(const Point& p) {
    x = p.x;
    y = p.y;
    cout << "calling the constructor of Point" << endl;
}
class Line {
public:
    Line(Point xp1, Point xp2);
    Line(Line& l);
    double getLen() {
        return len;
    }
private:
    double len;
    Point p1, p2;
};
Line::Line(Point xp1, Point xp2) :p1(xp1), p2(xp2) {
    cout << "calling the constructor of line" << endl;
    double x = static_cast<double>(p1.getX() - p2.getX());
    double y = static_cast<double>(p1.getY() - p2.getY());
    len = sqrt(x * x + y * y);
}
Line::Line(Line& l):p1(l.p1),p2(l.p2) {
    len = l.len;
    cout << "calling the constructor of line" << endl;
}
int main()
{
    Point myp1(1, 1), myp2(4, 5); //建立Point类的对象
    Line line(myp1, myp2); //建立Line类的对象
    Line line2(line); //利用复制构造函数建立一个新对象
    cout << "The length of the line is: ";
    cout << line.getLen() << endl;
    cout << "The length of the line2 is: ";
    cout << line2.getLen() << endl;
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
