/*
 * 20.cpp
 * Created on: 2015��4��2��
 * Author: jtahstu
 */
//20�����abcd=(ab+cd)^2���ʵ���λ��
//3025���������һ�ֶ��ص����ʣ�����ƽ��Ϊ���Σ���30��25��ʹ֮��Ӻ���ƽ����
//��(30+25)^2��ǡ�õ���3025��������������������ʵ�ȫ����λ����
//
//*���н��
//There are following numbers with 4 digits satisfied condition:
//2025 3025 9801

#include<iostream>
#include<cstdio>
using namespace std;
int main20()
{
	int count=0,a[100]={0};
	for(int i=1000;i<10000;i++)
	{
		if(((i%100)+(i/100))*((i%100)+(i/100))==i)
		{
			count++;
			a[count]=i;
		}
	}
	cout<<"There are following numbers with "<<count<<" digits satisfied condition:"<<endl;
	for(int i=1;i<=count;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}



