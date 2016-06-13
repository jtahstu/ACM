/**
 * Project Name: hduoj
 * File Name: 1572.cpp
 * Created on: 2015��4��13�� ����7:05:11
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//Ҫ��(A/B)%9973��������A�ܴ�����ֻ����n(n=A%9973)(���Ǹ�����A���ܱ�B��������gcd(B,9973) = 1)��
//Input
//���ݵĵ�һ����һ��T����ʾ��T�����ݡ�
//ÿ��������������n(0 <= n < 9973)��B(1 <= B <= 10^9)��
//Output
//��Ӧÿ���������(A/B)%9973��
//
//Sample Input
//2
//1000 53
//87 123456789
//
//Sample Output
//7922
//6060
//˼·����A = k * 9973 + n  ,A/ B = C, C = P * 9973 + x,x��Ϊ��������Ĵ𰸡�
//��֪��A = k* 9973 + n =B * P * 9973 + B * x,������k * 9973 = B * P * 9973 + B * x - n��
//���(B * x - n)%9973 = 0,n��ֵ֪����B��ֵ֪��������Ϊx��ȡֵ��Χ��0��9972�����ö��x��ֵ����
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

