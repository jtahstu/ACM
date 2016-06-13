/**
 * Project Name: hduoj
 * File Name: 1572.cpp
 * Created on: 2015年4月13日 下午7:05:11
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//要求(A/B)%9973，但由于A很大，我们只给出n(n=A%9973)(我们给定的A必能被B整除，且gcd(B,9973) = 1)。
//Input
//数据的第一行是一个T，表示有T组数据。
//每组数据有两个数n(0 <= n < 9973)和B(1 <= B <= 10^9)。
//Output
//对应每组数据输出(A/B)%9973。
//
//Sample Input
//2
//1000 53
//87 123456789
//
//Sample Output
//7922
//6060
//思路：设A = k * 9973 + n  ,A/ B = C, C = P * 9973 + x,x即为我们所求的答案。
//易知，A = k* 9973 + n =B * P * 9973 + B * x,化简后得k * 9973 = B * P * 9973 + B * x - n，
//因此(B * x - n)%9973 = 0,n的值知道，B的值知道，又因为x的取值范围是0到9972，因此枚举x的值即可
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main1572()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		long long n,b;
//		int ans;
//		cin>>n>>b;
//		for(int i=0;i<9973;i++){
//			if((b*i-n)%9973==0){
//				ans=i;
//				break;
//			}
//		}
//		cout<<ans<<endl;
//	}
//	return 0;
//}

