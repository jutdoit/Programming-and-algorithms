// Programming and algorithms.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//using namespace std;
//1、输出第二位数字
//int main() {
//	long int a[3];
//	int i = 3;
//	while (i) {
//		cin >> a[i-1];
//		i--;
//	}
//	cout << a[1];
//	return 0;
//}

//2、输出菱形
//#include <iostream>
//using namespace std;
//int main() {
//	char a;
//	cin >> a;
//	cout << "  "<<a<<"  " << endl;
//	cout << " " << a << "" << a << "" << a << "  " << endl;
//	cout << "" << a << "" << a << "" << a << "" << a << "" << a << "" << endl;
//	cout << " " << a << "" << a << "" << a << "  " << endl;
//	cout << "  " << a << "  " << endl;
//	return 0;
//}

//3、字符转ASCII码
//4、ASCII码转字符
//#include<iostream>
//using namespace std;
//int main() {
//	char a;
//	int b;
//	cin >> a;
//	b = a;
//	cout << b << endl;
//	return 0;
//}

//5、输出存储空间大小，sizeof()
//#include<iostream>
//using namespace std;
//int main() {
//	int a;
//	short b;
//	cout << sizeof(a);
//	cout << sizeof(b);
//	return 0;
//}

//7、格式输出
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	long a[3];
//	int i = 3,j=3;
//	while (i) {
//		cin >> a[i-1];
//		i--;
//	}
//	while (j) {
//		cout << setw(8) << right << a[j-1];
//		cout << " ";
//		j--;
//	}
//	return 0;
//}


//输出双精度小数
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	double a;
//	cin >> a;
//	cout << fixed <<setprecision(12) << a;
//	return 0;
//}

//9、空格分隔输出
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	return 0;
}
*/
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	char a;
//	int b;
//	float c;
//	double d;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	cin >> d;
//	cout << a << " " << b << " " << fixed <<setprecision(6) << c << " " << setprecision(6) << d;
//	return 0;
//}


//计算球的体积
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	const double PI = 3.14;
//	double r, v;
//	cin >> r;
//	v = (4 * PI * r * r * r) / 3;
//	cout << fixed<<setprecision(2) << v;
//	return 0;
//}


//大象喝水
//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//int main() {
//	const double PI = 3.14159;
//	const int water = 20000;
//	int r, h, count;
//	cin >> h >> r;
//	count = ceil(water/(PI * r * r * h));
//	cout << count;
//	return 0;
//}


//求一元二次方程组的根
//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int main() {
//	float a, b, c;
//	float r1, r2;
//	cin >> a >> b >> c;
//	if (b * b == 4 * a * c) {
//		r1 = (-b) / (2 * a);
//		cout << fixed << setprecision(5) << "x1=x2=" << fixed << setprecision(5) << r1;
//	}
//	else if (b * b > 4 * a * c) {
//		r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//		r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//		cout << "x1=" << fixed << setprecision(5) << r1 << ";" << "x2=" << r2;
//	}
//	else if(b * b < 4 * a * c) {
//		if (b == 0)
//			r1 = 0;
//		else
//			r1 = (-b) / (2 * a);
//		r2 = sqrt(4 * a * c - b * b) / (2 * a);
//		cout <<fixed<< setprecision(5) << "x1=" << r1 << "+" << r2 << "i" << ";x2=" << r1 << "-" << r2 << "i";
//	}
//	return 0;
//}


//判断点是否在正方形内
//#include<iostream>
//using namespace std;
//int main() {
//	int x, y;
//	cin >> x >> y;
//	if (-1 <= x && x <= 1 && -1 <= y && y <= 1) {
//		cout << "yes";
//	}
//	else
//		cout << "no";
//	return 0;
//}

//苹果和虫子
//你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。
//虫子每x小时能吃掉一个苹果，
//假设虫子在吃完一个苹果之前不会吃另一个，
//那么经过y小时你还有多少个完整的苹果？
//#include <iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	int n, x, y, apple;
//	double x1;
//	//n个苹果，虫子x小时/苹果，y小时,apple表示剩余的完整苹果
//	cin >> n >> x >> y;
//	x1 = x;
//	apple = n - ceil(y / x1);
//	if (apple < 0)
//		cout << 0;
//	else
//		cout << apple;
//	return 0;
//}


//简易计算器
//输入只有一行，共有三个参数，其中第1、2个参数为整数，第3个参数为操作符（+,-,*,/）
//输出只有一行，一个整数，为运算结果。然而：
//1. 如果出现除数为0的情况，则输出：Divided by zero!
//2. 如果出现无效的操作符(即不为 + , -, *, / 之一），则输出：Invalid operator!
//#include <iostream>
//using namespace std;
//int main() {
//	int x, y;
//	char ch;
//	cin >> x >> y >> ch;
//	/*if (ch == '+') {
//		cout << x + y;
//	}
//	else if (ch == '-') {
//		cout << x - y;
//	}
//	else if (ch == '*') {
//		cout << x * y;
//	}
//	else if (ch == '/') {
//		if (y == 0) {
//			cout << "Divided by zero!";
//		}
//		else
//			cout << x / y;
//	}
//	else {
//		cout << "Invalid operator!";
//	}*/
//	switch (ch)
//	{
//	case 42:cout << x * y; break;
//	case 43:cout << x + y; break;
//	case 45:cout << x - y; break;
//	case 47:
//	{
//		if (y == 0)
//			cout << "Divided by zero!";
//		else
//			cout << x / y;
//	}
//	default:cout<< "Invalid operator!";
//	}
//	return 0;
//}


//求和与平均值
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int n, a, b,sum = 0;
//	cin >> n;
//	b = n;
//	while (b--) {
//		cin >> a;
//		sum += a;
//	}
//	cout << sum << " " << fixed << setprecision(5) << sum / (n*1.0);
//	return 0;
//}

//求最大跨度值
//#include <iostream>
//using namespace std;
//int main() {
//	int span;
//	int arr[1000]={0};
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int min = arr[0], max = arr[0];
//	for (int i = 0; i < n; i++) {
//		if (arr[i] < min)
//			min = arr[i];
//		if (arr[i] > max)
//			max = arr[i];
//		span = max - min;
//	}
//	cout << span;
//	return 0;
//}

//统计奖牌个数
//输入n＋1行，第1行是A国参与决赛项目的天数n，其后n行，每一行是该国某一天获得的金、银、铜牌数目，以一个空格分开。
//#include <iostream>
//using namespace std;
//int main() {
//	int n, AU = 0, AG = 0, CU = 0, count;//金银铜
//	cin >> n;
//	int arr[17][3] = { 0 };
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		AU += arr[i][0];
//		AG += arr[i][1];
//		CU += arr[i][2];
//	}
//	count = AU + AG + CU;
//	cout << AU << " " << AG << " " << CU << " " << count;
//	return 0;
//}

//乘方计算
//#include<iostream>
//using namespace std;
//int main() {
//	long a,s=1;
//	unsigned n;
//	cin >> a >> n;
//	for (int i = 0; i < n; i++)
//		s *= a;
//	cout << s;
//	return 0;
//}


//角谷猜想
//所谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘3加1，如果是偶数，则除以2，得到的结果再按照上述规则重复处理，
//最终总能够得到1。如，假定初始整数为5，计算过程分别为16、8、4、2、1。
//程序要求输入一个整数，将经过处理得到1的过程输出来。
//#include<iostream>
//using namespace std;
//int main() {
//	unsigned long n;
//	cin >> n;
//	while (n != 1) {
//		if (n % 2 == 0) {
//			cout << n << "/" << 2 << "=" << n / 2 << endl;
//			n = n/2;
//		}
//		else if(n%2>0) {
//			cout << n << "*" << 3 << "+" << 1 << "=" << n * 3 + 1 << endl;
//			n = n*3+1;
//		}
//	}
//	cout << "End";
//	return 0;
//}



//正常血压时长
//监护室每小时测量一次病人的血压，若收缩压在90 - 140之间并且舒张压在60 - 90之间（包含端点值）则称之为正常，
//现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。
//#include<iostream>
//using namespace std;
//inline bool isGood(int low, int high) {//是否正常血压
//	return high >= 90 && high <= 140 && low >= 60 && low <= 90;
//}
//int main() {
//	int n, x=0, high, low, temp = 0;
//	//n总时间，x上一次正常时间，high收缩压，low舒张压，temp当前持续时间
//	bool last = false;//上一次是否正常
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> high >> low;//输入收缩压和舒张压
//		if (!last)//如果上一次不正常则当前正常时间置0
//			temp = 0;
//		last = isGood(low, high);//取当前血压状态
//		if(last){//如果当前血压正常
//			temp++;//当前正常时间长度+1
//			if (temp > x)//如果当前持续正常时间大于上一次持续正常时间
//				x = temp;
//		}
//	}
//	cout << x;
//	return 0;
//}



//鸡尾酒疗法
/*
* 鸡尾酒疗法，原指“高效抗逆转录病毒治疗”（HAART），由美籍华裔科学家何大一于1996年提出，
是通过三种或三种以上的抗病毒药物联合使用来治疗艾滋病。该疗法的应用可以减少单一用药产生的抗药性，
最大限度地抑制病毒的复制，使被破坏的机体免疫功能部分甚至全部恢复，从而延缓病程进展，延长患者生命，提高生活质量。
人们在鸡尾酒疗法的基础上又提出了很多种改进的疗法。为了验证这些治疗方法是否在疗效上比鸡尾酒疗法更好，
可用通过临床对照实验的方式 进行。假设鸡尾酒疗法的有效率为x，新疗法的有效率为y，如果y-x大于5%，则效果更好，
如果x-y大于5%，则效果更差，否则称为效果差不多。下面给 出n组临床对照实验，其中第一组采用鸡尾酒疗法，
其他n-1组为各种不同的改进疗法。请写程序判定各种改进疗法效果如何。
*/
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	int p[20][2];
//	int total, part;
//	int n;
//	double x, y;
//	cin >> n;
//	cin >> total >> part;
//	x = part / (total * 1.0);
//	for (int i = 0; i < n-1; i++) {
//		cin >> p[i][0] >> p[i][1];
//	}
//	for (int i = 0; i < n - 1; i++) {
//		y= p[i][1] / (p[i][0] * 1.0);
//		if (y - x > 0.05)
//			cout << "better" << endl;
//		else if (x - y > 0.05)
//			cout << "worse" << endl;
//		else
//			cout << "same" << endl;
//	}
//	return 0;
//}


//数字反转
//给定一个整数，请将该数各个位上数字反转得到一个新数。新数也应满足整数的常见形式，即除非给定的原数为零，
//否则反转后得到的新数的最高位数字不应为零（参见样例2）。
//#include<iostream>
//using namespace std;
//int main() {
//	long int n, m=0;
//	cin >> n;
//	while (n) {
//		m = m * 10 + n % 10;
//		n /= 10;
//	}
//	cout << m;
//	return 0;
//}


//指针练习：输出hello
//#include <iostream>
//using namespace std;
//int main() {
//	char s[] = "Hello";
//	char* p;
//	for (p=s;*p!='\0';p++)
//		cout << *p;
//	return 0;
//}

//指针练习：输出tesla
//#include <iostream>
//using namespace std;
//void Print(const char* p1, const char* p2)
//{
//	for(;p1!=p2;p1++)
//		cout << *p1;
//}
//int main()
//{
//	const char* s = "Tesla123";
//	Print(s, s + 5);
//	cout << endl;
//	Print(s, s + 3);
//	cout << endl;
//	cout << s + 3;
//	return 0;
//}
//输出
//Tesla
//Tes


//forEach
//#include<iostream>
//using namespace std;
//void ForEach(void* a, int width, int num,void f(void *p))
//{
//	for (int i = 0; i < num; ++i)
//		f((char*)a + width * i);
//}
//void PrintSquare(void* p)
//{
//	int* q = (int*)p;
//	int n = *q;
//	cout << n * n << ",";
//}
//void PrintChar(void* p) {
//	char* q = (char*)p;
//	cout << *q << ",";
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	char s[] = "hello!";
//	ForEach(a, sizeof(int), 5, PrintSquare);
//	cout << endl;
//	ForEach(s, sizeof(char), 6, PrintChar);
//	return 0;
//}
//1,4,9,16,25,
//h, e, l, l, o, !,

//指针练习：mencpy
//#include<iostream>
//using namespace std;
//void Memcpy(char* src, char* dest, int n)
//{
//	for (int i = 0; i < n; i++)
//		*(dest++) = *(src++);
//}
//int Strlen(char* s)//求字符串长度
//{
//	int i;
//	for (i = 0; s[i]; ++i);
//	return i;
//}
//int main()
//{
//	int a;
//	char s1[30];
//	char s2[30];
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; ++i) {
//		cin >> a;
//		int b = 99999999;
//		Memcpy((char*)&a, (char*)&b, sizeof(int));
//		cout << b << endl;
//	}
//	for (int i = 0; i < t; ++i) {
//		cin >> s1;
//		Memcpy(s1, s2, Strlen(s1) + 1);
//		cout << s2 << endl;
//	}
//	return 0;
//}

//指针练习：double
//#include <iostream>
//using namespace std;
//void Double(int* p, int n)//把数组中的数字翻倍
//{
//	for (int i = 0; i < n; ++i)
//		p[i] *= 2;
//}
//int main()
//{
//	int a[3][4] = { { 1,2,3,4},{5,6,7,8},
//					{ 9,10,11,12 } };
//	Double(*(a+1), 6);
//	for (int i = 0; i < 3; ++i) {
//		for (int j = 0; j < 4; ++j)
//			cout << a[i][j] << ",";
//		cout << endl;
//	}
//
//	return 0;
//}
//1, 2, 3, 4,
//10, 12, 14, 16,
//18, 20, 11, 12,


//sort简单题
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
////int main()
////{
////	int a[8] = { 6,5,14,23,2,9,87,10 };
////	sort(a+1,a+7,greater<int>());
////	for (int i = 0; i < 8; ++i)
////		cout << a[i] << ",";
////	return 0;
////}
//struct Point {
//	int x;
//	int y;
//};
//struct Rule1 {//按个位数从小到大排序
//	bool operator()(const int& a1, const int& a2) {
//		if ((a1 % 10) == (a2 % 10))
//			return a1 > a2;
//		else 
//			return (a1 % 10) < (a2 % 10);
//	}
//};
//struct Rule2 {//按距离远近
//	bool operator()(const Point& a1, const Point& a2) {
//		if (a1.x * a1.x + a1.y * a1.y == a2.x * a2.x + a2.y * a2.y) {
//			if (a1.x == a2.x)
//				return a1.y < a2.y;
//			else
//				return a1.x < a2.x;
//		}
//		else
//			return a1.x * a1.x + a1.y * a1.y < a2.x* a2.x + a2.y * a2.y;
//	}
//};
//int main()
//{
//	int a[8] = { 6,5,55,23,3,9,87,10 };
//	sort(a, a + 8, Rule1());
//	for (int i = 0; i < 8; ++i)
//		cout << a[i] << ",";
//	cout << endl;
//	Point ps[8] = { {1,0},{0,1},{0,-1},{-1,0},{1,-1},{1,1},{2,0},{-2,0} };
//	sort(ps, ps + 8, Rule2());
//	for (int i = 0; i < 8; ++i)
//		cout << "(" << ps[i].x << "," << ps[i].y << ")";
//	return 0;
//}
//10,23,3,55,5,6,87,9,
//(-1, 0)(0, -1)(0, 1)(1, 0)(1, -1)(1, 1)(-2, 0)(2, 0)

//判断建党整十周年
//建国整十周年
//是否闰年
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n < 0)
		cout << "非法年份";
	else {
		if (n > 1949 && (n - 1949) % 10 == 0)
			cout << "建国周年" << endl;

		if (n > 1921 && (n - 1921) % 10 == 0)
			cout << "建国周年" << endl;

		if (n % 400 == 0 || n % 100 && n % 4 == 0)
			cout << "是闰年";
		else
			cout << "不是闰年";
	}
	return 0;

}