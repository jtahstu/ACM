/*
 * 15.cpp
 * Created on: 2015��4��2��
 * Author: jtahstu
 */
//15ķ˹������
//���һ��������������������ֵ������ͣ���Ƹ���Ϊ��ķ˹������(���Ϊ��������)��
//�� 407=4^3+0^3+7^3����һ����ķ˹���������Ա����1000���ڵ����а�ķ˹��������
//
//*���н��
//There are following Armstrong number smaller than 1000:
//153 370 371 407

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main15()
{
	for(int i=100;i<1000;i++)
	{
		if((pow(i%10*1.0,3)+pow(i/10%10*1.0,3)+pow(i/100*1.0,3))==i)
			cout<<i<<" ";
	}
	return 0;
}



