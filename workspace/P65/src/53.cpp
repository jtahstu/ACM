/**
 * Project Name: P65 
 * File Name: 53.cpp
 * Created on: 2015��4��6�� ����2:55:40
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//53����ƽ����һ����Ȥ����
//�����֤������1000��������ƽ����1�Ĳ���8�ı�������
//(2*n-1)^2-1=4*n^2-4*n+1-1=4*n*(n-1) (n>=500)
//����Ȼ����8�ı���
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
	cout << "��" << N << "Ϊֹ����" << count << "����������" << endl;
	return 0;
}

