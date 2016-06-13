/**
 * Project Name: nyoj_2.0 
 * File Name: 127.cpp
 * Created on: 2015年5月18日 上午10:20:21
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//const int N=10003;
//int main127()
//{
//	int n,m;
//	cin>>n;
//	while(n--){
//		cin>>m;
//		int ans=1;
//		for(int i=0;i<m-2;i++){
//			ans=ans*m%N;
//		}
//		cout<<ans<<endl;
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//int main127_2()
//{
//	int N;
//	scanf("%d",&N);
//	while(N--)
//	{
//		int n;
//		scanf("%d",&n);
//		int sum=1,m=n-2;
//		while(m>=1)
//		{
//			if(m%2==1)
//				sum=(sum*n)%10003;
//			n=n*n%10003;
//			m=m/2;
//		}
//		printf("%d\n",sum);
//	}
//	return 0;
//}
//
//星际之门（一）
//时间限制：3000 ms  |  内存限制：65535 KB
//难度：3
//描述
//公元3000年，子虚帝国统领着N个星系，原先它们是靠近光束飞船来进行旅行的，近来，X博士发明了星际之门，它利用虫洞技术，
//一条虫洞可以连通任意的两个星系，使人们不必再待待便可立刻到达目的地。
//
//帝国皇帝认为这种发明很给力，决定用星际之门把自己统治的各个星系连结在一起。
//
//可以证明，修建N-1条虫洞就可以把这N个星系连结起来。
//
//现在，问题来了，皇帝想知道有多少种修建方案可以把这N个星系用N-1条虫洞连结起来？
//
//
//
//输入
//第一行输入一个整数T,表示测试数据的组数(T<=100)
//每组测试数据只有一行，该行只有一个整数N，表示有N个星系。(2<=N<=1000000)
//输出
//对于每组测试数据输出一个整数，表示满足题意的修建的方案的个数。输出结果可能很大，请输出修建方案数对10003取余之后的结果。
//样例输入
//2
//3
//4
//样例输出
//3
//16

