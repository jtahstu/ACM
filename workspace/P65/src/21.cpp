/*
 * 21.cpp
 * Created on: 2015��4��2��
 * Author: jtahstu
 */
//21��°ͺղ���
//��֤��2000���ڵ���ż�����ܹ��ֽ�Ϊ��������֮��(����֤��°ͺղ����2000���ڵ���ż������)��
#include<iostream>
#include<cstdio>
using namespace std;
bool jt21(int n) { //��ͨ�򵥵ķ���������
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
		else
			continue;
	return true;
}
int main21() {
	int a[500] = { 0 }, count = 0,sum=0;
	for (int i = 2; i <= 2000; i++)//�������
		if (jt21(i))
			a[count++] = i;
	for (int i = 6; i <= 2000; i += 2) {
		bool flag = false;
		for (int j = 0; j < count; j++)
			if (a[j] < i && jt21(i - a[j])) {
				flag = true;
				break;
			}
		if (!flag)
			cout << i << endl; //���ֲ����������������������
		else sum++;
	}
	cout<<sum+2<<endl;//�����ʾ���������ż����������ö�����ж��ٸ���������ż��
	return 0;
}

