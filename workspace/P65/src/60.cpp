/**
 * Project Name: P65 
 * File Name: 60.cpp
 * Created on: 2015��4��6�� ����4:47:17
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//60���Ӳ���
//��ǰ��һ�Գ��ك��ӣ�����ÿһ������һ�ԃ��ӣ�������С���������¾ͳ����ˣ��ڵڶ����µ��µ׿�ʼ�����ǵ���һ��С���ӣ�
//����һ��һ������ȥ����⃷���������������С�
//
//*���н��
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
	long long a[1000] = { 0 };//������е����Ļ�ǳ��죬���������ˢ�⣬����Java��bigintegerд
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

