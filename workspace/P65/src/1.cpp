/*
 * 1.cpp
 * Created on: 2015��4��1��
 * Author: jtahstu
 */
// ��555555��Լ����������λ���Ƕ��٣�
// ���н��
// ���룺555555
// �����The max factor with 3 digits in 555555 is:777

#include<iostream>
#include<cstdio>
using namespace std;
int main1() {
	for (int i = 999; i > 100; i--)
		if (555555 % i == 0) {
			cout << i << endl;
			break;
		}

	return 0;
}

