// Programming and algorithms_3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。


//逆置一个数组
//#include <iostream>
//using namespace std;
//void Swap(int* a, int* b) {//传入参数是引用类型
//    int c = *a;
//    *a = *b;
//    *b = c;
//}
//void Reverse(int* p, int size) {
//    for (int i = 0; i < size / 2; ++i) {
//        Swap((p + i), (p + size - i - 1));
//    }
//}
//int main()
//{
//    int a[3][5] = { {1,2,3,4,5},{6,7,8,9,10}, {11,22,33,44,55} };
//    int len = sizeof(a[1]) / sizeof(int);
//    Reverse(a[1], len);//二维数组第一行
//    for (int i = 0; i < len; ++i)
//        cout << a[1][i] << ",";
//    /*int c = 1, d = 2;
//    Swap(&c, &d);
//    cout << c << " " << d;*/
//    return 0;
//}

//查找一个字符串数组中最先出现的单一元素
//#include<iostream>
//#include<cstring>
//char String[100010];
//using namespace std;
//int main() {
//	cin.getline(String, 100010);
//	int len = sizeof(String) / sizeof(char);
//	for (int i = 0; i < String[i]; ++i) {
//		if (strchr(String, String[i]) == strrchr(String, String[i])) {
//			cout << String[i];
//			return 0;
//		}
//	}
//	cout << "no";
//	return 0;
//}


//石头剪刀布
//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//string str[110];
//int main() {
//	string Player1, Player2;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//		cin >> Player1 >> Player2;
//		if (Player1 == "Rock" && Player2 == "Scissors" || Player1 == "Scissors" && Player2 == "Paper" || Player1 == "Paper" && Player2 == "Rock") {
//			str[i] = "Player1";
//		}
//		else if (Player2 == "Rock" && Player1 == "Scissors" || Player2 == "Scissors" && Player1 == "Paper" || Player2 == "Paper" && Player1 == "Rock") {
//			str[i] = "Player2";
//		}
//		else
//			str[i] = "Tie";
//	}
//	for (int i = 0; i<n; ++i) {
//		cout << str[i] << endl;
//	}
//	return 0;
//}



/*
#include<iostream>
using namespace std;
#include <string>
int main()
{
	string str;
	bool flag = 0;//用于控制记录单词里字母数字的＇门＇
	while (getline(cin, str))
	{
		int uflag = 0, temp = 0, nummax = -1, nummin = 9999;
		string max, min;//定义了两个string 类的对象用于存储最长和最短单词．
		for (int t = 0; str[t] != '\0'; t++)//通过对整个字符串的一次遍历来寻求最长和最短单词
		{//在遇到第一个字母之前flag==０是一直成立的，所以前面无论多少个空格都不会影响
			if (str[t] != ' ' && flag == 0)
			{
				flag = 1;//遇到字母开始记录
				uflag = t;//记录的位置
				temp = 0;//需要记录的字母的个数
			}
			if (str[t] != ' ' && flag == 1)
			{
				temp++;//如果是在记录字母的状态，每一个字母都会使得temp++
			}
			if (str[t] == ' ' || str[t + 1] == '\0')
			{
				flag = 0;//遇到空格后停止计数
				if (temp > nummax)
				{
					max.clear();
					nummax = temp;
					max = str.substr(uflag, temp);
					//调用substr函数把从第uflag字符起temp个字数赋予存储最长单词的字符串
				}

				if (temp < nummin)
				{
					min.clear();
					nummin = temp;
					min = str.substr(uflag, temp);
					//调用substr函数把从第uflag字符起temp个字符赋予存储最短单词的字符串．
				}

				uflag = 0;
			}
		}
		cout << max << endl << min << endl;

	}
	return 0;
}*/

//进制转换
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	char arr[20]={"1234567891234567891"};
	//不能用20个数据初始化20长度是字符数组
	
	//itoa(27, arr, 16);vs不兼容
	cout << arr << endl;
	//itoa(27, arr, 2);vs不兼容
	cout << strlen(arr) << endl;


	return 0;
}

