/**
 * 4.cpp
 * Created on: 2015��4��1��
 * Author: jtahstu
 *
 */
//4����ת��
// ����һ����ת��Ϊ��������ʽ
// *���н��
// ���룺8
// �����
// number of decimal form:8
// it's bunary form:0000000000001000
// ���룺-8
// �����number of decimal form:-8
// it's binary form:1111111111111000
// ���룺32767
// �����number of decimal form:32767
// it's binary form:0111 1111 1111 1111
// ���룺-32768
// �����number of decimal form:-32768
// it's binary form:1000000000000000
// ���룺128
// �����number of decimal form:128
// it's binary form:0000000010000000

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
void jt(int n) //����
		{
	int a[17] = { 0 }, i = 0;
	while (n) {
		n % 2 == 0 ? a[i] = 0 : a[i] = 1;
		n /= 2;
		i++;
	}
	for (int j = 15; j >= 0; j--)
		cout << a[j];
	cout << endl;
}
void tt(int n) //����  ȡ����ֵ-1��Ȼ�����䷴��
		{
	int m = (-n) - 1;
	int a[17] = { 0 }, i = 0;
	while (m) {
		m % 2 == 0 ? a[i] = 0 : a[i] = 1;
		m /= 2;
		i++;
	}
	for (int j = 15; j >= 0; j--)
		a[j] == 1 ? cout << "0" : cout << "1";
	cout << endl;
}
int main4() {
	int n;
	while (cin >> n) {
		if (n > 0)
			jt(n);
		else
			tt(n);
	}
	return 0;
}

