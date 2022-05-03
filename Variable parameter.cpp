// Variable parameter.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdarg>
using namespace std;
/*
*方法一，采用可变参数宏
* 步骤:
*(1)定义参数:参数格式(int count,...)
*(2)函数定义中创建一个va_list变量
*(3)初始化:va_start(ap, count);
*(4)循环将各个参数进行相加
*(5)清理:调用清理va_end(va_list);  //清理内容 最后调用
* 上述步骤的实现需要使用到四个宏：
    va_list、va_start(va_list, arg)、va_arg(va_list, type)、va_end(va_list)
    这些宏在头文件stdarg.h中声明定义。因此使用时需要包含该头文件。
注意:该方法极不安全! 例如count个数为5或7个 实际参数个数为6个 就会发生严重错误！！！
*/
int SUM(int count, ...) {//count代表参数个数，...代表参数
    va_list ap;//声明一个va_list变量
    va_start(ap, count);//第二个参数表示形参的个数
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(ap, int);//第二个参数表示形参类型
    }
    va_end(ap);//用于清理
    return sum;
}
/*
* 方法二、initializer_list标准库类型
声明同名头文件:initializer_list
 １. 函数原型中使用实例化initializer_list模板代表可变参数列表； 
 2. 使用迭代器, 遍历initializer_list中的参数
 3. 传入实参,必须放在一组大括号中  如:({ 20,30,40,50,60 })
 １. initializer_list在C++11中才被引入，这意味着在编译时可能需要加上这个选项  -std=c++11  
 才能成功编译。上述代码中的auto关键字也是C++11的一部分；
  2. 参数必须 放在一组‘{}’（大括号）内 ，编译器通过大括号来将这组参数转化为initializer_list.大括号的的一组实参与initializer_list形参对应；
　3. 函数原型initializer_list与普通形参无异。这表明形参列表中可以包含其他类型参数且位置不限，以下函数原型是正确的：
4.元素必须具有相同类型！！！
*/
int SUM2(initializer_list<int>ls) {
    int sum = 0;
    for (auto ptr = ls.begin(); ptr != ls.end(); ptr++) {//对容器的操作
        sum += *ptr;
    }
    return sum;
}
int main()
{
    //可变参数实现
    //cout << SUM(7, 1, 2, 3, 4, 5, 6, 7)<<endl;//28
    //cout << SUM2({ 1,2,3,4,5,6,7 });//28
    initializer_list<int>str = { 1,2,3,4,5,6 };
    cout << str.size()<<endl;
    cout << *str.begin()<<endl;
    cout << SUM2(str);
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
