/*
 * 14.cpp
 * Created on: 2015��4��2��
 * Author: jtahstu
 */
//14����
//һ���Թ̶��ٶ���ʻ��������˾��������10�㿴����̱��ϵĶ�����һ���Գ���(��������������Ҷ��ʹ������������ȫһ����)��
//Ϊ95859����Сʱ����̱��ϳ�����һ���µĶԳ������ʸó����ٶ��Ƕ��٣��µĶԳ����Ƕ��٣�
//
//*���н��
//The new symmetrical number kelometers is:95959.
//The velocity of the car is:50.00
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main14() {
	bool flag = false;
	int count=0;
	for (int i = 95859+1; i <= 100000; i++) {
		if (i % 10 == i / 10000 && i / 10 % 10 == i / 1000 % 10) {
			count = i;
			flag = true;
			break;
		}
	}
	if (flag)
		cout << "The velocity of the car is:" <<setiosflags(ios::fixed)<<setprecision(2)<< (count * 1.0 - 95859) / 2
				<< endl;
	return 0;
}

