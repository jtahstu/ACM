/**
 * Project Name: P65 
 * File Name: 64.cpp
 * Created on: 2015��4��6�� ����5:22:49
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//64ѡ������
//��ѡ�������İ��ʤ���ֳ�����һ��ѡ�ֲμӱ����������Ĺ��������÷�Խ�ߣ�����Խ�͡�
//�������������ʱ��Ҫ���ֳ�����ѡ�ֵĳ���˳���������÷ֺ�������Σ������ͬ������ѡ�־�����ͬ�����Σ�����������ţ����ÿ���ͬ���ε�ѡ��������
//���磺
//ѡ����ţ� 1��2��3��4��5��6��7
//ѡ�ֵ÷֣� 5��3��4��7��3��5��6
//���������Ϊ�� 3��1��2��5��1��3��4
//���̰���������ί����ɰ���������ֺ�����������
//
//*���н��
//Player-No Score Rank
//1 5 3
//2 3 1
//3 4 2
//5 7 5
//5 3 1
//3 5 3
//7 6 4
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main() {

	int a[100] = { 0 }, b[100] = { 0 }, c[100] = { 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a + n);
	int count = 0;
	for (int i = 0; i < n - 1; i++)
		if (a[i] != a[i + 1])
			c[count++] = a[i];
	c[count] = a[n - 1];
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= count; j++)
			if (b[i] == c[j])
				cout << j+1 << " ";
	cout << endl;
	return 0;
}

