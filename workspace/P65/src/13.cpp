/*
 * 13.cpp
 * Created on: 2015��4��2��
 * Author: jtahstu
 */
//13  4λ������
//��N��һ����λ��������9��ǡ�����䷴��������N�����������ǽ����������ֵ������γɵ����������磺1234�ķ�������4321��
//
//*���н��
//The number satisfied states condition is:1089

#include<iostream>
#include<cstdio>
using namespace std;
int main13()
{
	int a;
	for(int i=1000;i<=1111;i++)//��Ϊ������Ҳ����λ����n��9����������������10000/9��1111
	{
		a=i%10*1000+i/10%10*100+i/100%10*10+i/1000;
		if(a/i==9&&a%i==0)
			cout<<"The number satisfied states condition is:"<<i<<endl;
	}
	return 0;
}



