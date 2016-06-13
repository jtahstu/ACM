/**
 * Project Name: akoj 
 * File Name: 1294.cpp
 * Created on: 2015年4月23日 下午3:54:01
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//Sample Input
//2
//1234567800 4 1
//1234567800 1 5
//Sample Output
//9999234567800
//967800
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//using namespace std;
//string nb(string s, int b) {
//	int count = 0, x = 0, max = -1;
//	string sb = s;
//	while (count != b) {
//		for (int i = x; i <= b; i++) {
//			if (sb[i] - '0' > max)
//				max = sb[i] - '0';
//			x = i;
//		}
//		if (x == b)
//			sb.erase(0, x);
//		count += x;
//	}
//	return sb;
//}
//int main() {
//	int n;
//	cin >> n;
//	while (n--) {
//		string s;
//		int a, b;
//		cin >> s >> a >> b;
//		string ss = nb(s, b);
//		for (int i = 0; i < a; i++)
//			cout << "9";
//		cout << ss << endl;
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define i64 long long
//i64 n;
//int m, k, t;
//char temp[100];
//i64 getmax(i64 n)
//{
//    sprintf(temp, "%I64d", n);
//    int len = strlen(temp);
//    int i, j;
//    i64 s = 0, max = 0;
//    for (i = 0; i < len; i++)
//    {
//        s = 0;
//        for (j = 0; j < len; j++)
//            if (j != i)
//                s = s * 10+temp[j] - '0';
//        if (s > max)
//            max = s;
//    }
//    return max;
//}
//void solve()
//{
//    i64 s = 0;
//    while (m--)
//        s = s * 10+9;
//    sprintf(temp, "%I64d%I64d", s, n);
//    sscanf(temp, "%I64d", &n);
//    while (k--)
//        n = getmax(n);
//    printf("%I64d\n", n);
//}
//int main()
//{
//    //freopen("A.in", "r", stdin);
//    //freopen("A.out", "w", stdout);
//    for (scanf("%d", &t); t-- && scanf("%I64d%d%d", &n, &m, &k); solve())
//        ;
//    return 0;
//}
//
