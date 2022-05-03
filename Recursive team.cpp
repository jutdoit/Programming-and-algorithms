// Recursive team.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
* 递归组队
* 从n个人里边选择1<k<n个人组队，有多少种不同的组队方法
* 当k=1和k=0时，组合数为1
*/
int combination(int n, int k) {
    if (k > n)//输入数据不合法
        return 0;
    else if ((k == 0) || (k == n))//递归出口
        return 1;
    else
        return combination(n - 1, k) + combination(n - 1, k - 1);//递归调用
}
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "input value of integer n:";
    cin >> n;
    cout << "input vlaue of integer k:";
    cin >> k;
    cout << combination(n, k);
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
