/**
 * Project Name: nyoj_2.0 
 * File Name: 812.cpp
 * Created on: 2015年6月9日 上午12:33:38
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
//bool judge(int m){
//	int count=0,n=m;
//	while(n){
//		if(n%2==1)
//			count++;
//		n/=2;
//	}
//	if(count&1) return false;
//	return true;
//}
//void change(int sum){
//	int a[100]={0},i=0,m=sum;//貌似这里数组开小了 , MD , 确实是这里 ，被题目混淆视线了
//	while(m){
//		a[i]=m%2;
//		m/=2;
//		i++;
//	}
//	for(int j=i-1;j>=0;j--)
//		cout<<a[j];
//	cout<<endl;
//}
//int main()
//{
//	int n,m;
//	while(cin>>n){
//		int sum=0;
//		for(int i=0;i<n;i++){
//			cin>>m;
//			if(judge(m))
//				sum+=m;
//		}
//		if(sum==0)cout<<"0"<<endl;
//		else change(sum);
//	}
//	return 0;
//}
//水题~~
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：1
//
//描述
//
//    输入一组正整数，每个正整数取值为【1,255】，你们懂得，刚好用8位二进制位可以表示。。。
//
//    你要做的就是：对于每个输入的正整数，如果她的二进制位有偶数个1，则该数满足要求，
//	把符合要求的正整数的二进制位相加，并用二进制表示法输出。你知道规律吗？
//
//输入
//    有多组测试数据。
//    每组测试数据第一行输入N，表示有N个正整数，N<=255
//    第二行输入N个正整数，每个正整数取值为[1~255]
//输出
//    输出所有满足要求的正整数的二进制表示法的和
//样例输入
//
//    5
//    1 2 3 4 5
//    7
//    1 2 3 4 5 6 7
//    2
//    1 2
//
//样例输出
//
//    1000
//    1110
//    0
//
//提示
//    样例1:3的二进制为00000011，5的二进制为00000101，符合条件，故相加即得1110（忽略前面的零）。


