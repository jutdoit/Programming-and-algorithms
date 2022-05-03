// Programming and algorithms_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//排列组合，求和是某数的因子
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m, count = 0;
//    cin >> n >> m;
//    for(int i=1;i<n;++i)
//        for (int j = i; j <= n; ++j) {
//            if (i != j && m % (i + j) == 0)
//                count++;
//        }
//    cout << count;
//    return 0;
//}


//输入若干个不超过100的正整数，记录最大值，最小值，和
//#include<iostream>
//using namespace std;
//int main() {
//	int n, max=0, min=100, total=0;
//	cin >> n;
//	while (n) {
//		if (n < min)
//			min = n;
//		if (n > max)
//			max = n;
//		total += n;
//		cin >> n;
//	}
//	cout << "max=" << max << ",min=" << min << ",total=" << total;
//	return(0);
//}


//牛顿迭代法求平方根
//#include<iostream>
//#include<iomanip>
//using namespace std;
//double EPS = 0.000001;
//int main() {
//	double a;
//	cin >> a;
//	if (a >= 0) {
//		double x = a / 2, lastX = x + 1 + EPS;
//		while (x - lastX > EPS || lastX - x > EPS) {
//			lastX = x;
//			x = (x + a / x) / 2.0;
//		}
//		cout << fixed << setprecision(10) << x;
//	}
//	else
//		cout << "error";
//	return 0;
//}

//连续输出26个字母
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main() {
//	int n = 26;
//	/*for (int i = 0; i < n; ++i)
//		cout << char('a' + i);*/
//	for (int i = 0; i < n; ++i)
//		printf("%c", 'a' + i);
//	return 0;
//}


//输出某数的整数次幂，小于某个界限数
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int m,count=0;
//	double k, n = 1;
//	cin >> k >> m;
//	while (n < m) {
//		n *= k;
//		count++;
//		cout << fixed << setprecision(10) << n << endl;
//	}
//	cout << count;
//	return(0);
//}

//找出兄弟数
//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main() {
//	int n, m;
//	scanf_s("%d %d", &n, &m);
//	int a = m + 1, b = m + 1;
//	for (int i = n; i < m; ++i) {
//		if (i > (a + b) / 2 + 1)break;
//		for (int j = i + 1; j <= m; ++j) {
//			if (i + j > a + b)break;
//			if ((i * j) % (i + j) == 0) {
//				if (i + j < a + b) {
//					a = i;
//					b = j;
//				}
//				else if (i + j == a + b && i < a) {
//					a = i;
//					b = j;
//				}
//			}
//		}
//	}
//	if (a == m + 1)
//		printf("No Solutions");
//	else
//		printf("%d,%d", a, b);
//	return(0);
//}

//乘方计算
//#include<iostream>
//using namespace std;
//int main() {
//	double a,b=1;
//	int n;
//	cin >> a >> n;
//	while (n--) {
//		b *= a;;
//	}
//	cout << "a^n=" << b;
//	return 0;
//}

//输出星期几
//#include<iostream>
//#include<string>
//using namespace std;
//int monthDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//string week[7] ={"星期日","星期一","星期二", "星期三", "星期四", "星期五", "星期六" };
//int main() {
//	int year, month, day, days = 0;
//	cin >> year >> month >> day;
//	for (int y = 2012; y < year; ++y) {//计算整年天数
//		if (y % 400 == 0 || y % 100 && y % 4 == 0) {//闰年
//			days += 366;
//		}
//		else
//			days += 365;
//	}
//	if (year % 400 == 0 || year % 100 && year % 4 == 0)
//		monthDays[1] = 29;//闰年修改二月天数
//	for (int i = 0; i < month - 1; ++i) {
//			days += monthDays[i];//计算整月天数
//	}
//	days += day-22;//计算当月天数，并减去开始22天非整年天数
//	cout << year << "年" << month << "月" << day << "日是" << week[days % 7];
//	return 0;
//}

//筛法求素数
//#include<iostream>
//#include<cmath>
//using namespace std;
//#define MaxSize 100000
//bool isPrime[MaxSize+1];
//int main() {
//	int count = 0;
//	for (int i = 2; i <= MaxSize; ++i) {
//		isPrime[i] = true;
//	}
//	for (int i = 2; i <= MaxSize; ++i) {
//		if (isPrime[i]) {
//			for (int j = 2 * i; j <= MaxSize; j += i) {
//				isPrime[j] = false;
//			}
//		}
//	}
//	for (int i = 2; i <= MaxSize; ++i) {
//		if (isPrime[i]) {
//			cout << i << endl;
//			count++;
//		}
//		//cout << isPrime[i] << endl;
//	}
//	cout << "总数是：" << count;
//	return(0);
//}


//求特殊自然数
//#include<iostream>
//using namespace std;
//int seven[10];
//int night[10];
//int main() {
//	int a = 0, b = 0;
//	int c, d;
//	int n = 100;
//	do {
//		a = 0;
//		b = 0;
//		c = n; 
//		d = n;
//		do {
//			seven[a++] = c % 7;
//			c = c / 7;
//		} while (c);
//		do {
//			night[b++] = d % 9;
//			d = d / 9;
//		} while (d);
//		n++;
//	} while (seven[0] != night[2] || seven[1] != night[1] || seven[2] != night[0]&&(n<1000));
//	cout << n-1 << endl;
//	cout << night[0] << night[1] << night[2] << endl;
//	cout << seven[0] << seven[1] << seven[2] << endl;
//	return 0;
//}

//数字统计
//给定一个正整数数字区间，统计其中2出现的次数
//例如22中2出现两次，222中2出现三次
#include<iostream>
using namespace std;
int main() {
	int low, high;
	int count = 0;
	cin >> low >> high;
	for (int i = low; i <= high; ++i) {
		if ((i - 2) % 10 == 0)count++;
		if ((i / 10 - 2) % 10 == 0)count++;
		if ((i / 100 - 2) % 10 == 0)count++;
		if ((i / 1000 - 2) % 10 == 0)count++;
		if ((i / 10000 - 2) % 10 == 0)count++;
		if ((i / 100000 - 2) % 10 == 0)count++;
		if ((i / 1000000 - 2) % 10 == 0)count++;
		if ((i / 10000000 - 2) % 10 == 0)count++;
		if ((i / 100000000 - 2) % 10 == 0)count++;
	}
	cout << count;
	return 0;
}