/*
 * 11.cpp
 * Created on: 2015��4��1��
 * Author: jtahstu
 */
//11 8����������
//һ����Ȼ����8����1�����õ��̱�8��Ҳ��1���ٽ��ڶ��ε��̱�8������7�����õ�һ����Ϊa��
//��֪�����Ȼ����17����4�����õ��̱�17����15�����õ�һ������a��2�����������Ȼ����
//
//���н��
//The required number is:1993
#include<iostream>
#include<cstdio>
using namespace std;
int main11()
{
	for(int i=17*17;i<=1000000;i++)
	{
		int a,b,c,d;a=i%8;b=i/8%8;c=i/8/8%8;d=i/8/8/8;
		int x,y,z;x=i%17;y=(i/17)%17;z=i/17/17;
		if(a==1&&b==1&&c==7&&x==4&&y==15&&z==2*d)
			{cout<<i<<endl;break;}
	}
	return 0;
}



