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
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//int main() {
//	char arr[20]={"1234567891234567891"};
//	//不能用20个数据初始化20长度是字符数组
//	
//	//itoa(27, arr, 16);vs不兼容
//	cout << arr << endl;
//	//itoa(27, arr, 2);vs不兼容
//	cout << strlen(arr) << endl;
//
//
//	return 0;
//}

//pell数列
//Pell数列a1, a2, a3, ...的定义是这样的，a1 = 1, a2 = 2, ... , an = 2 * an − 1 + an - 2 (n > 2)。
//给出一个正整数k，要求Pell数列的第k项模上32767是多少。
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int arr[1000000];
//int pell(int n) {//n为项数
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	int a = 1, b = 2, c;
//	if (n > 2) {
//		n = n - 2;
//		while (n--) {
//			c = b;
//			b = (2 * b+ a)% 32767;
//			a = c;
//		}
//		return b;
//	}
//}
//int main() {
//	int n, i = 0;
//	int a;
//	cin >> n;
//	while (n--) {
//		cin >> a;
//		arr[i++]= pell(a);
//	}
//	for (int j=0; arr[j]; ++j) {
//		cout << arr[j] << endl;
//	}
//	return 0;
//}


//计算鞍点,行最大，列最小
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int rH[5];
//int cL[5];
//int Array[5][5];
//int main() {
//	for (int i = 0; i < 5; ++i) {
//		for (int j = 0; j < 5; ++j) {
//			cin >> Array[i][j];
//		}
//	}
//	for (int i = 0; i < 5; ++i) {
//		int Max = Array[i][0];
//		int Min = Array[0][i];
//		for (int j = 0; j < 5; ++j) {
//			if (Max < Array[i][j])
//				Max = Array[i][j];
//			rH[i] = Max;
//			if (Min > Array[j][i])
//				Min = Array[j][i];
//			cL[i] = Min;
//		}
//	}
//	for (int i = 0; i < 5; ++i) {
//		for (int j = 0; j < 5; ++j) {
//			if (rH[i] == cL[j]) {
//				cout << i + 1 << " " << j + 1 << " " << rH[i];
//				return 0;
//			}
//		}
//	}
//	cout << "not found";
//	return 0;
//}


//字符串加密
//a-y用b-z替换，z用a替换
//大写字母同上，非字母保持不变
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//char Str[90];
//int main() {
//	char ch;
//	cin.getline(Str, 90);
//	for (int i = 0; Str[i] != '\0'; ++i) {
//		if ('a' <= Str[i] && Str[i] < 'z')
//			cout << char(Str[i] + 1);
//		else if ('A' <= Str[i] && Str[i] < 'Z')
//			cout << char(Str[i] + 1);
//		else if (Str[i] == 'z')
//			cout << 'a';
//		else if (Str[i] == 'Z')
//			cout << 'A';
//		else
//			cout << Str[i];
//	}
//	return 0;
//}

//实现memcpy函数，实现内存的拷贝
//
//#include <iostream>
//using namespace std;
//void Memcpy(void* src, void* dest, int size)
//{
//	char* msrc = (char*)src;//为什么用char，用int会报错（下面cout是char类型） 
//	char* mdest = (char*)dest;
//	for (int i = size - 1; i >= 0; i--) {     //为什么是i--，防止间隔长度太短，数据被覆盖
//		*(mdest + i) = *(msrc + i);
//
//	}
//}
//
//void Print(int* p, int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << p[i] << ",";
//	cout << endl;
//}
//
//int main()
//{
//	int a[10];
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; ++i)
//		cin >> a[i];//输入n个整数
//	int b[10] = { 0 };//定义一个数组，初始化为0
//	Memcpy(a, b, sizeof(a));
//	Print(b, n);
//
//	int c[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	Memcpy(c, c + 5, 5 * sizeof(int)); //将c的前一半拷贝到后一半 
//	Print(c, 10);//1，2，3，4，5，1，2，3，4，5
//
//	char s[10] = "123456789";
//	Memcpy(s + 2, s + 4, 5); //将s[2]开始的5个字符拷贝到s[4]开始的地方 
//	cout << s << endl;
//
//	char s1[10] = "123456789";
//	Memcpy(s1 + 5, s1 + 1, 4); //将s1[5]开始的4个字符拷贝到s1[1]开始的地方 
//	cout << s1 << endl;
//
//
//	return 0;
//}


#include <iostream>
using namespace std;
//先输出n个整数中个位数最大的数(答案保证唯一）
//再输出n个整数中最大的数
//再输出n个浮点数中最大的数
void* MyMax(void* p, int size, int n, int (*compare)(void* n1, void* n2)) {
	void* back = p;
	for (int i = 1; i < n; i++) {  //i从1开始 
		if (compare(back, ((char*)p + i * size)) < 0)
			back = (char*)p + i * size;
	}
	return back;
}

int Compare1(void* n1, void* n2)
{
	int* p1 = (int*)n1;
	int* p2 = (int*)n2;
	return ((*p1) % 10) - ((*p2) % 10);//比较个位数大小
}
int Compare2(void* n1, void* n2)
{
	int* p1 = (int*)n1;
	int* p2 = (int*)n2;
	return *p1 - *p2;//比较整数大小
}
#define eps 1e-6
int	Compare3(void* n1, void* n2)
{
	float* p1 = (float*)n1;
	float* p2 = (float*)n2;
	if (*p1 - *p2 > eps)
		return 1;
	else if (*p2 - *p1 > eps)
		return -1;
	else
		return 0;//比较浮点数大小
}

int main()
{
	int t;
	int a[10];
	float d[10];
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		for (int i = 0; i < n; ++i)
			cin >> d[i];
		int* p = (int*)MyMax(a, sizeof(int), n, Compare1);
		cout << *p << endl;
		p = (int*)MyMax(a, sizeof(int), n, Compare2);
		cout << *p << endl;
		float* pd = (float*)MyMax(d, sizeof(float), n, Compare3);
		cout << *pd << endl;
	}
	return 0;
}