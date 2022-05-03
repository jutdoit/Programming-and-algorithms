// Programming and algorithms_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
// 
//输出第一个只出现一次的字符
//未解决

//计算鞍点
//给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。
//鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。


//与指定数字相同的数字长度
//#include <iostream>
//using namespace std;
//int arr[110];
//int main()
//{
//    int n, k, count = 0;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//    cin >> k;
//    for (int i=0; i < n; ++i) {
//        if (arr[i] == k) {
//            count++;
//        }
//    }
//    cout << count;
//    return 0;
//}

//摘苹果
//身高100-120，板凳30cm
//十个苹果100-200高度
//#include<iostream>
//using namespace std;
//int appleTall[10];//100-200
//#define bench 30;
//int main() {
//	int peopleTall;//100-120
//	int count = 0;
//	for (int i = 0; i < 10; ++i)
//		cin >> appleTall[i];
//	cin >> peopleTall;
//	for (int i = 0; i < 10; ++i) {
//		if (appleTall[i] <= peopleTall + 30) {
//			count++;
//		}
//	}
//	cout << count;
//	return 0;
//}

//年龄与疾病
//某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理，
//按照0-18、19-35、36-60、61以上（含61）四个年龄段统计的患病人数占总患病人数的比例。
//按照0-18、19-35、36-60、61以上（含61）四个年龄段输出该段患病人数占总患病人数的比例，
//以百分比的形式输出，精确到小数点后两位。每个年龄段占一行，共四行。
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int n,year;
//	cin >> n;
//	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
//	for (int i = 0; i < n; ++i) {
//		cin >> year;
//		if (year >= 0 && year <= 18) {
//			count1++;
//		}
//		if (year >= 19 && year <= 35) {
//			count2++;
//		}
//		if (year >= 36 && year <= 60) {
//			count3++;
//		}
//		if (year >= 61) {
//			count4++;
//		}
//	}
//	cout << fixed << setprecision(2) << double(count1) / n * 100 << "%" << endl;
//	cout << fixed << setprecision(2) << double(count2) / n * 100 << "%" << endl;
//	cout << fixed << setprecision(2) << double(count3) / n * 100 << "%" << endl;
//	cout << fixed << setprecision(2) << double(count4) / n * 100 << "%" << endl;
//	return 0;
//}

//校门外的树
/*
某校大门外长度为L的马路上有一排树，每两棵相邻的树之间的间隔都是1米。我们可以把马路看成一个数轴，
马路的一端在数轴0的位置，另一端在L的位置；数轴上的每个整数点，即0，1，2，……，L，都种有一棵树。

由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。
已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。
现在要把这些区域中的树（包括区域端点处的两棵树）移走。你的任务是计算将这些树都移走后，马路上还有多少棵树。
*/
//#include<iostream>
//using namespace std;
//bool maxTree[100010];
//int main() {
//	int l, m;
//	int beg, end, left=0;//始末
//	cin >> l >> m;
//	for (int i = 0; i <= l; ++i)
//		maxTree[i] = true;//初始化树数组
//
//	for (int i = 0; i < m; ++i) {//进行m轮
//		cin >> beg >> end;
//		for (int j = beg; j <= end; ++j) {
//			maxTree[j] = false;
//		}
//	}
//	for (int i = 0; i <= l; ++i) {
//		if (maxTree[i] == true)
//			left++;
//	}
//	cout << left;
//	return 0;
//}



//图像模糊处理
//#include<iostream>
//#include<cmath>
//using namespace std;
//int New[100][100];
//int Old[100][100];
//int main() {
//	int n, m;//n行m列
//	cin >> n >> m;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			cin >> Old[i][j];
//		}
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
//				New[i][j] = Old[i][j];
//			}
//			else {
//				double temp = ((Old[i][j] + Old[i - 1][j] + Old[i][j - 1] + Old[i + 1][j] + Old[i][j + 1]) / double(5))- (Old[i][j] + Old[i - 1][j] + Old[i][j - 1] + Old[i + 1][j] + Old[i][j + 1]) / 5;
//				if (temp > 0.5)
//					New[i][j] = (Old[i][j] + Old[i - 1][j] + Old[i][j - 1] + Old[i + 1][j] + Old[i][j + 1]) / 5 + 1;
//				else
//					New[i][j] = (Old[i][j] + Old[i - 1][j] + Old[i][j - 1] + Old[i + 1][j] + Old[i][j + 1]) / 5;
//			}
//		}
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			cout << New[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//矩阵转置
//#include<iostream>
//using namespace std;
//int arr[100][100];
//int arrT[100][100];
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			cin>>arr[j][i];
//		}
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < m; ++j) {
//			arrT[j][i] = arr[j][i];
//		}
//	}
//	for (int i = 0; i < m; ++i) {
//		for (int j = 0; j < n; j++) {
//			cout << arrT[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//辗转相除法求最大公约数
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int a = max(n, m);
//	int b = min(n, m);
//	int temp;
//	while (a%b) {
//		temp = b;
//		b = a % b;
//		a = temp;
//	}
//	cout << b;
//	return 0;
//}

//第i位替换
//写出函数中缺失的部分，使得函数返回值为一个整数,该整数的第i位和m的第i位相同，其他位和n相同。
//#include <iostream>
//using namespace std;
//
//int bitManipulation1(int n, int m, int i) {
//	// 在此处补充你的代码
//	return (n << i) ^ (m >> i);
//}
//
//int main() {
//	int n, m, i, t;
//	cin >> t;
//	while (t--) {
//		cin >> n >> m >> i;
//		cout << bitManipulation1(n, m, i) << endl;
//	}
//	return 0;
//}

//左边i位取反
//#include <iostream>
//using namespace std;
//
//int bitManipulation3(int n, int i) {
//	return n ^ (-1 << (32 - i));
//}
//
//int main() {
//	int t, n, i;
//	cin >> t;
//	while (t--) {
//		cin >> n >> i;
//		cout << bitManipulation3(n, i) << endl;
//	}
//	return 0;
//}


//第i位取反
//写出函数中缺失的部分，使得函数返回值为一个整数,该整数的第i位是n的第i位取反，其余位和n相同
//#include <iostream>
//using namespace std;
//
//int bitManipulation2(int n, int i) {
//	// 在此处补充你的代码
//	return n ^= (1 << i);
//}
//
//int main() {
//	int t, n, i;
//	cin >> t;
//	while (t--) {
//		cin >> n >> i;
//		cout << bitManipulation2(n, i) << endl;
//	}
//	return 0;
//}

////统计数字长度
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//char Str[260];
//int main() {
//	cin.getline(Str, 260);
//	int len = strlen(Str), sumNum = 0;
//	for (int i = 0; i < len; ++i) {
//		if (isdigit(Str[i])) {
//			sumNum++;
//		}
//	}
//	cout << sumNum;
//	return 0;
//}


//判断子串
//是子串返回子串在母串的位置，不是返回-1，子串空返回0
//#include<iostream>
//#include<string>
//using namespace std;
//char s1[100];
//char s2[100];
//int isSubStrings(char s1[], char s2[]) {
//	if (s2[0] == 0)
//		return 0;
//	for (int i = 0; s1[i]; ++i) {
//		int j = 0, k = i;
//		for (; s2[j]; ++k, ++j) {
//			if (s1[k] != s2[j])
//				break;
//		}
//		if (s2[j] == 0)
//			return i;
//
//	}
//	return -1;
//}
//int main() {
//	cin.getline(s1, 100);
//	cin.getline(s2, 100);
//	int a = isSubStrings(s1, s2);
//	switch (a) {
//	case -1:
//		cout << "s2不是s1的子串";
//		break;
//	case 0:
//		cout << "s2是空串";
//		break;
//	default:
//		cout << "s2在s1的第" << a << "位置";
//	}
//	return 0;
//}