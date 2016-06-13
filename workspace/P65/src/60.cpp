/**
 * Project Name: P65 
 * File Name: 60.cpp
 * Created on: 2015年4月6日 下午4:47:17
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//60兎子产子
//从前有一对长寿兎子，它们每一个月生一对兎子，新生的小兎子两个月就长大了，在第二个月的月底开始生它们的下一代小兎子，
//这样一代一代生下去，求解兎子增长数量的数列。
//
//*运行结果
//Please enter required number of generation: 20
//The repid increase of rabbits in first 20 generation is as felow:
//1 1 2 3 5 8 13 21 34 55
//89 144 233 377 610 987 1597 2584 4181 6765
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main60() {
	long long a[1000] = { 0 };//这个数列递增的会非常快，如果是用来刷题，建议Java的biginteger写
	a[0] = 1, a[1] = 1;
	for (int i = 2; i < 1000; i++)
		a[i] = a[i - 1] + a[i - 2];
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
			if (i % 10 == 0&&i)
				cout << endl;
		}
		cout << endl;
	}
	return 0;
}

