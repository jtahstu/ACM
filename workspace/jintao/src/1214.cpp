/**
 * Project Name: jintao 
 * File Name: 1214.cpp
 * Created on: 2015年4月5日 下午8:41:37
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//对于小数0. 285714（285714），我们也可以算出：
//
//0. 285714（285714）
//
//= （285714 *（10^6-1） + 285714） / （（10^6-1）*10^6）
//
//= （285714*999999 +285714） / 999999000000
//
//= 285714 / 999999
//
//= 2/7
//4
//1 1
//3 3
//123 23
//9875 875
//
//1/9
//1/3
//61/495
//4933/4995
//
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//int gcd(int a,int b){
//	return b==0?a:gcd(b,a%b);
//}
//void run(int p, int q) {
//    int i, m1 = 1, m2 = 1;
//    int mu, zi = q;
//    for(i = 0; i < (int)(log10(q)) + 1; i++)
//        m1 *= 10;
//    for(i = 0; i < ((int)log10(p) - (int)log10(q)); i++)
//        m2 *= 10;
//    mu = m1 - 1;
//    zi = zi + mu * (p - q) / m1;
//    mu = mu * m2;
//    int t = gcd(zi, mu);
//    zi /= t;
//    mu /= t;
//    printf("%d/%d\n", zi, mu);
//}
//int main(){
//	int n;
//	cin>>n;
//	while(n--){
//		int a,b;
//		cin>>a>>b;
//		run(a,b);
//	}
//	return 0;
//}
//


