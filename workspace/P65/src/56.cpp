/**
 * Project Name: P65 
 * File Name: 56.cpp
 * Created on: 2015��4��6�� ����4:00:44
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//56�ķ�����
//�����������ġ��ķ����������ǣ�������Ȼ������ֻҪ���ĸ�����ƽ���;Ϳ��Ա�ʾ��
//����֤�˶���
//
//*���н��
//1) Please enter a number = 110
//110=7*7+6*6+4*4+3*3
//2) Please enter a number = 211
//211=8*8+7*7+7*7+7*7
//3) Please enter a number = 99
//99=7*7+5*5+4*4+3*3

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main56()
{
	int n;
	cin>>n;
	for(int i=0;i*i<=n;i++) //�����򵥵ķ��������
		for(int j=0;j*j<=n;j++)
			for(int k=0;k*k<=n;k++)
				for(int l=0;l<=n;l++)
					if(i*i+j*j+k*k+l*l==n)//��������ʾ��һ��������������ֱ�ʾ����
						cout<<n<<"="<<l<<"*"<<l<<"+"<<k<<"*"<<k<<"+"<<j<<"*"<<j<<"+"<<i<<"*"<<i<<endl;
	return 0;
}



