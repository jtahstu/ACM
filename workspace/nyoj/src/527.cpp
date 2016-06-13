/**
 * Project Name: nyoj_2.0 
 * File Name: 527.cpp
 * Created on: 2015年5月17日 下午9:09:50
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
//const int N=1314520;
//int separate(int n){ //分离n,得a*b的值
//	int a=0,b=0,temp=n;
//	while(temp){
//		temp%2==1?a++:b++;
//		temp=temp>>1;
//	}
//	return a*b;
//}
//int main527()
//{
//	int fb[405]={1,1},n;
//	for(int i=2;i<400;i++)//打表
//		fb[i]=(fb[i-1]%N+fb[i-2]%N)%N;
//	while(cin>>n){
//		cout<<fb[separate(n)]<<endl;
//	}
//	return 0;
//}


//AC_mm玩dota
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：2
//描述
// 大家都知道AC_mm比较喜欢玩游戏，特别是擅长war3这款经典游戏。某天AC_mm来到了VS平台上 ，准备去虐菜鸟，正巧一个不小心将我们ACM队长虐了 ^_^，
// 我们的队长这下可不高兴了，说要出一道难题让AC_mm难堪一下。题目描述是这样的，给一个正整数n，n在二进制表示的情况下（不含前导0和符号位）
// 有a个1和b个0，求斐波拉契数列的第a*b项对1314520取模后的值ans。
//
//注意(斐波拉契数列： f[0]=1,f[1]=1; f[n]=f[n-1]+f[n-2] ； n>=2;)
//
//输入
//输入：有多组测试数据,输入一个正整数n(n<10 0000 0000);   separate
//输出
//输出：ans的值
//样例输入
//12
//6
//样例输出
//5
//2
