// Dice rolling game.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
* 游戏规则：
* 1、当玩家第一轮两枚骰子之和为7或11则直接获胜；
* 2、当玩家第一轮两枚骰子之和为2或3或12则直接失败；
* 3、若玩家未投出以上骰子之和，则记下点数，继续投掷，直到出现点数之和等于记下的点数则获胜；
* 4、若在第三步出现点数之和为7时，则玩家失败。
*/

#include <iostream>
#include<cstdlib>
//此头文件定义了一些通用功能函数，包括动态存储器管理，随机数生成，与操作系统环境通信，整数算术，搜索，排序和转换。
using namespace std;
int rollDice() {//掷两枚骰子，产生两个1-6的随机数并计算和
    int dice_1 = 1 + rand() % 6;//1-6随机数
    int dice_2 = 1 + rand() % 6;//1-6随机数
    int sum = dice_1 + dice_2;
    cout << "dice_1+dice_2=" << sum << endl;
    return sum;
}

enum class GameStatus { WIN, LOSE, PLAYING };//枚举变量定义，记录三种状态

int main()
{
    int sum, myPoint;
    GameStatus status;//定义枚举类型变量
    unsigned int seed;//设置种子
    cout << "please enter a unsigned number:" << endl;
    cin >> seed;
    srand(seed);//将种子传递给rand(0
    sum = rollDice();//第一轮掷骰子，计算和数
    switch (sum) {
    case 7:
    case 11: 
    {//和数为7或11，则胜利
        status = GameStatus::WIN;
        break;
    }
    case 2:
    case 3:
    case 12:
    { // 和数为2或3或12，则失败
        status = GameStatus::LOSE;
        break;
    }
    default: 
    {//如果非以上两种情况则再掷骰子
        status = GameStatus::PLAYING;
        myPoint = sum;
        cout << "Point is:" << myPoint << endl;
        break;
    }
    }
    while (status == GameStatus::PLAYING) {//当
        sum = rollDice();
        if (sum == myPoint)
            status = GameStatus::WIN;
        else if (sum == 7)//在第二轮及其以后出现点数为7则失败，若记录数为7，则遵循第四步，7负优先级更高
            status = GameStatus::LOSE;
    }
    if (status == GameStatus::WIN)
        cout << "player is win!" << endl;
    else
        cout << "player is lose!" << endl;
    return 0;
}

