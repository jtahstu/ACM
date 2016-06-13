/**
 * Project Name: nyoj_2.0 
 * File Name: 480.cpp
 * Created on: 2015年5月17日 下午9:56:14
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
//bool prime(int n){
//	for(int i=2;i*i<=n;i++){
//		if(n%i==0)return false;
//	}
//	return true;
//}
//int main480()
//{
//	int f[35]={0,3,7},n;
//	for(int i=3;i<=30;i++)
//		f[i]=f[i-1]+f[i-2];
//	while(cin>>n){
//		if(prime(f[n]))cout<<"Yes"<<endl;
//		else cout<<"No"<<endl;
//	}
//	return 0;
//}
//Fibonacci Again!
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：2
//描述
//求第n个斐波那契数是否是一个素数,n为整数
//f[n]=f[n-1]+f[n-2] (2<n<30)
//f[1]=3,f[2]=7
//输入
//输入整数m,0<m<30,输入-1表示结束输入
//
//输出
//如果f[m]是素数 则输出Yes,否则输出No,
//每行输出占一行。
//样例输入
//2
//3
//样例输出
//Yes
//No


