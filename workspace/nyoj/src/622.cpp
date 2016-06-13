/**
 * Project Name: nyoj_2.0 
 * File Name: 622.cpp
 * Created on: 2015年5月17日 下午8:06:45
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
//int main622()
//{
//	int n;
//	while(cin>>n&&n){
//		int sum=0,a[105]={0};
//		for(int i=0;i<n;i++)
//			cin>>a[i];
//		sort(a,a+n);
//		for(int i=0;i<=n>>1;i++)
//			sum+=1+(a[i]>>1);
//		cout<<sum<<endl;
//	}
//	return 0;
//}


//Vote
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：1
//描述
//
//
//美国大选是按各州的投票结果来确定最终的结果的，如果得到超过一半的州的支持就可以当选，而每个州的投票结果又是由该州选民投票产生的，
//如果某个州超过一半的选民支持希拉里，则她将赢得该州的支持。现在给出每个州的选民人数，请问希拉里至少需要赢得多少选民的支持才能当选？
//
//输入
//多组输入数据
//每组数据的第一行包括一个整数N（1<=N<=101）,表示美国的州数，N=0表示输入结束
//接下来一行包括N个正整数，分别表示每个州的选民数，每个州的选民数不超过100
//输出
//对于每组数据输出一行，表示希拉里至少需要赢得支持的选民数
//样例输入
//3
//5 7 5
//0
//样例输出
//6
