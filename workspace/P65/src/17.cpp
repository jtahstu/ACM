/*
 * 17.cpp
 * Created on: 2015��4��2��
 * Author: jtahstu
 */
//17 ������
//�������A��ȫ������(����1��������A����)֮�͵���B��������B��ȫ������(����1��������B����)֮�͵���A��
//������A��B��Ϊ����������3000���ڵ�ȫ����������
//
//*���н��
//There are following friendly--numbers pair smaller than 3000:
//220.. 284 1184.. 1210 2620.. 2924
#include<iostream>
#include<cstdio>
int sum17(int i) {
	int sum = 0;
	for (int j = 1; j <= i / 2; j++)
		if (i % j == 0)
			sum += j;
	return sum;
}
using namespace std;
int main17() {
	for (int i = 2; i < 3000; i++)
		for(int j=i;j<3000;j++) //�Ż�һ�£�˲�����һ��ļ�����
		if ((sum17(i) == j)&&(i==sum17(j))&&i!=j)
			cout << i<<".."<<j << "   ";
	cout << endl;
	return 0;
}

