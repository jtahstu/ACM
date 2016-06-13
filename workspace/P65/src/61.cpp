/**
 * Project Name: P65 
 * File Name: 61.cpp
 * Created on: 2015年4月6日 下午4:54:11
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//61人机猜数游戏
//由计算机“想”一个四位数，请人猜这个四位数是多少。人输入四位数字后，计算机首先判断这四位数字中有几位是猜对了，
//并且在对的数字中又有几位位置也是对的，将结果显示出来，给人以提示，请人再猜，直到人猜出计算机所想的四位数是多少为止。
//例如：计算机“想”了一个“1234”请人猜，可能的提示如下：
//人猜的整数 计算机判断有几个数字正确 有几个位置正确
//1122 　　　2 　　　　　　　　　　　　1
//3344 　　　2 　　　　　　　　　　　　1
//3312 　　　3 　　　　　　　　　　　　0
//4123 　　　4 　　　　　　　　　　　　0
//1243 　　　4 　　　　　　　　　　　　2
//1234 　　　4 　　　　　　　　　　　　4
//游戏结束
//请编程实现该游戏。游戏结束时，显示人猜一个数用了几次。

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main61()
{
	int n=rand()%10000;
	int m;
	while(true){
		cin>>m;
		if(m==n){
			cout<<"You win!"<<endl;
			return 0;
		}
		else{
			int count=0;
			if(m%10==n%10)count++;
			if(m/10%10==n/10%10)count++;
			if(m/100%10==n/100%10)count++;
			if(m/1000==n/1000)count++;
			cout<<count<<endl;//输出正确的位数，和题目要求略有不同
		}
	}
	return 0;
}



