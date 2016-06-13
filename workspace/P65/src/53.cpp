/**
 * Project Name: P65 
 * File Name: 53.cpp
 * Created on: 2015年4月6日 下午2:55:40
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//53奇数平方的一个有趣性质
//编程验证“大于1000的奇数其平方与1的差是8的倍数”。
//(2*n-1)^2-1=4*n^2-4*n+1-1=4*n*(n-1) (n>=500)
//很显然都是8的倍数
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
const int N = 1000000;
int main53() {
	int count = 0;
	long long s;
	for (int i = 1001; i <= N; i++) {
		s = i * i - 1;
		if (s % 8 == 0)
			count++;
	}
	cout << "到" << N << "为止，有" << count << "个满足条件" << endl;
	return 0;
}

