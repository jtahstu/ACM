/*
 * 38.cpp
 * Created on: 2015��4��4��
 * Author: jtahstu
 */
//38��Ʊ���
//ĳ��������3�ֵ���Ʊ������5�ֵ���Ʊ������Щ��Ʊ�е�һ�Ż������ſ��Եõ������ֲ�ͬ�����ʣ�
//
//*���н��
//19 kinds: 5 10 15 3 8 13 18 6 11 16 21 9 14 19 24 12 17 22 27

#include<iostream>
#include<cstdio>
using namespace std;
int main38()
{
	for(int i=0;i<=4;i++)
		for(int j=0;j<=3;j++)
			if(i+j!=0)
			cout<<3*i+5*j<<" ";
	return 0;
}
