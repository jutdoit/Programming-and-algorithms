// Default argument function.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<iomanip>
using namespace std;
int da(int c, int a = 5, int b = 6) {//默认参数在函数声明中给出
    return a + b + c;
}
int getVolume(int height, int length = 4, int width = 5);//默认参数在原型声明中给出，不在函数声明中给出
int main()
{
    /*cout << da(1) << endl;
    cout << da(1, 2, 3) << endl;
    cout << da(1, 2);*/
    const int x = 8, y = 9, z = 10;
    cout << getVolume(x, y, z) << endl;//参数为8，9，10
    cout << getVolume(x) << endl;//参数为8，默认参数4，5
    cout << getVolume(x, y) << endl;//参数为8，9，默认参数5
    //int d = getVolume();编译出错
    return 0;
}
int getVolume(int height, int length , int width ) {
    cout << setw(5) << height << setw(5) << length << setw(5) << width << endl;
    return height * width * length;
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
