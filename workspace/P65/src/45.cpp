/*
 * 45.cpp
 * Created on: 2015��4��5��
 * Author: jtahstu
 */
//45  1~9�������3λ��ƽ����
//��1��2��3��4��5��6��7��8��9�Ÿ����ֳַ����飬ÿ������ֻ����һ�Σ�
//��ÿ�����������������ظ����֣�Ҳ����ͬ����������������ظ���Ҫ��ÿ���е���λ�������һ��ƽ������
//
//*���н��
//The 3 squares with 3 different digits each are:
//361,529,784
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main45() {
	int a[30] = { 0 };
	for (int i = 0; i < 22; i++) //10 -- 31��ƽ������������
		a[i] = (i + 10) * (i + 10);
	for (int i = 0; i < 22; i++)
		for (int j = i + 1; j < 22; j++)
			for (int k = j + 1; k < 22; k++) { // ����ѭ�����ж�����
				bool flag = true;
				int b[10] = { a[i] % 10, a[i] / 10 % 10, a[i] / 100, a[j] % 10, //����ÿһλ����
				a[j] / 10 % 10, a[j] / 100, a[k] % 10, a[k] / 10 % 10, a[k]
						/ 100 };
				sort(b, b + 9);
				for (int c = 1; c < 10; c++) { //�ж��Ƿ����ظ�
					if (b[c] == b[c - 1]) {
						flag = false;
						break;
					}
				}
				if (flag)//����û���ظ����������������
					cout << a[i] << " " << a[j] << " " << a[k] << endl;
			}
	return 0;
}

