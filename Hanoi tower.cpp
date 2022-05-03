// Hanoi tower.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void move(char a, char c) {
    cout << a << "---->" << c << endl;//从A移动到C
}
void hanoi(int n, char a, char b, char c) {
    if (n == 1) {
        move(a, c);//若只有一个盘子，直接移动
    }
    else {
        hanoi(n - 1, a, c, b);//借助C把A上的n-1个盘子移动到B上
        move(a, c);//把A上的一个盘子移动到C上
        hanoi(n - 1, b, a, c);//借助A把B上的n-1个盘子移动到C上
    }
}
int main()
{
    int m;
    cout << "Please enter the number of plates:";
    cin >> m;
    cout << "The movement is as follows" << endl;
    hanoi(m, 'A', 'B', 'C');
    return 0;
}
