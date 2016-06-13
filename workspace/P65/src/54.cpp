/**
 * Project Name: P65 
 * File Name: 54.cpp
 * Created on: 2015年4月6日 下午3:02:35
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//54角谷猜想
//日本一位中学生发现一个奇妙的“定理”，请角谷教授证明，而教授无能为力，于是产生角谷猜想。
//猜想的内容是：任给一个自然数，若为偶数除以2，若为奇数则乘3加1，得到一个新的自然数后按照上面的法则继续演算，若干次后得到的结果必然为1。
//请编程验证。
//
//*运行结果
//Please enter number:56
//[1]: 56/2=28
//[2]: 28/2=14
//[3]: 14/2=7
//[4]:7*3+1=22
//[5]: 22/2=11
//[6]:11*3+1=34
//[7]: 34/2=17
//[8]:17*3+1=52
//[9]: 52/2=26
//[10]: 26/2=13
//[11]:13*3+1=40
//[12]: 40/2=20
//[13]: 20/2=10
//[14]: 10/2=5
//[15]:5*3+1=16
//[16]: 16/2=8
//[17]: 8/2=4
//[18]: 4/2=2
//[19]: 2/2=1
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int jt54(int n) {
	return n % 2 == 0 ? n / 2 : (3 * n + 1);
}
int main54() {
	int n, count = 1;//最后一次的++，所以初始化为1
	cin >> n;
	while (jt54(n) != 1) {
		if (n % 2 == 0)//输出计算的过程
			cout <<count<<":"<< n << "/2=" << n / 2 << endl;
		else
			cout <<count<<":"<< n << "*3+1=" << n * 3 + 1 << endl;
		count++;
		n = jt54(n);//n值变换
	}
	cout<<count<<":2/2=1";
	return 0;
}

