/**
 * 6.cpp
 * Created on: 2015��4��1��
 * Author: jtahstu
 */
//6�ô����Ǯ
//��������һ��������ȡ����ϢΪ0.63%������ĳ��������һ��Ǯ���������ڽ��������е����ȡ��1000Ԫ��
//��������ʱ�պ�ȡ�꣬���������ǮʱӦ������١�
//���н��
//He must save 4039.44 at first
//��Ŀ�д���ʵ��ȡ��6000Ԫ

#include<iostream>
#include<cstdio>
using namespace std;
int main6()
{
	double a[6];
	a[5]=1000.0;
	for(int i=4;i>=0;i--)
		a[i]=a[i+1]/(1+12*0.0063)+1000.0;
	cout<<a[0]<<endl;
	return 0;
}



