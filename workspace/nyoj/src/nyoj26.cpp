/**
 * Project Name: C++ 
 * File Name: nyoj26.cpp
 * Created on: 2015年4月6日 下午9:13:06
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//孪生素数问题
//描述
//    写一个程序，找出给出素数范围内的所有孪生素数的组数。一般来说，孪生素数就是指两个素数距离为2，近的不能再近的相邻素数。
//有些童鞋一看到题就开始写程序，不仔细看题，咱们为了遏制一下读题不认真仔细的童鞋，规定，两个素数相邻为1的也成为孪生素数。
//
//输入
//    第一行给出N(0<N<100)表示测试数据组数。
//    接下来组测试数据给出m，表示找出m之前的所有孪生素数。
//    (0<m<1000000)
//输出
//    每组测试数据输出占一行，该行为m范围内所有孪生素数组数。
//样例输入
//    1
//    14
//样例输出
//    4
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//using namespace std;
//bool prime(int n) {
//	for (int i = 2; i * i <= n; i++)
//		if (n % i == 0)
//			return false;
//	return true;
//}
//int main26() {
//	int a[300000] = { 0 };
//	a[0] = 2;
//	int count = 1;
//	for (int i = 3; i <= 1000000; i++)
//		if (prime(i))
//			a[count++] = i;
//	int n, m;
//	cin >> n;
//	while (n--) {
//		cin >> m;
//		int res = 0;
//		for (int i = 0; i < count; i++) {
//			if (a[i + 1] > m)
//				break;
//			if (a[i + 1] - a[i] == 2 || a[i + 1] - a[i] == 1)
//				res++;
//		}
//		cout << res << endl;
//	}
//	return 0;
//}
