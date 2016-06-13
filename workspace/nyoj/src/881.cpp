/**
 * Project Name: nyoj 
 * File Name: 881.cpp
 * Created on: 2015年6月10日 下午1:36:07
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<cstdlib>
//#include<cctype>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<map>
//#include<set>
//using namespace std;
//int gcd(int a, int b) {
//	return b == 0 ? a : gcd(b, a % b);
//}
//int main() {
//	int a, b, n, l, r, jt[200], count;
//	while (~scanf("%d%d",&a,&b)) {//多组，我去
//		count=0;//多组的话这里就要清零，一开始按一组写的，有点小坑啊
//		memset(jt,0,sizeof(jt));
//		int gcdab = gcd(a, b);
//		for (int i = 1; i * i <= gcdab; i++) {
//			if (gcdab % i == 0)
//				jt[count++] = i;
//		}
//		jt[count] = gcdab;
//		scanf("%d",&n);
//		while (n--) {
//			scanf("%d%d",&l,&r);
//			bool flag = true;
//			for (int i = count; i >= 0; i--)
//				if (l <= jt[i] && jt[i] <= r) {
//					flag = false;
//					printf("%d\n",jt[i]);
//					break;
//				}
//			if (flag)
//				printf("-1\n");
//		}
//	}
//	return 0;
//}

//9 27
//3
//1 5
//10 11
//9 11
//
//样例输出
//
//3
//-1
//9

