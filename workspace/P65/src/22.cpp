/*
 * 22.cpp
 * Created on: 2015��4��3��
 * Author: jtahstu
 */
//22��Ǯ�ټ�����
//�й��Ŵ���ѧ�����������ġ��㾭��������������ġ���Ǯ��ټ����⡱��
//����һ��ֵǮ�壬��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ������̡�ĸ���������Σ�
//
//*���н��
//Follwing are possible plans to buy 100 fowls with 100 Yuan.
//1:cock=0 hen=25 chicken=75
//2:cock=4 hen=18 chicken=78
//3:cock=8 hen=11 chicken=81
//4:cock=12 hen=4 chicken=84

#include<iostream>
#include<cstdio>
using namespace std;
int main22()
{
	int count=0;
	for(int i=0;i<=20;i++)
		for(int j=0;j<=33;j++)
			{
				if((100-i-j)%3==0&&(i*5+j*3+(100-i-j)/3==100))//����������ǰ������ʾ���򻯺ܶ����
				{
					count++;
					cout<<count<<":cock="<<i<<" hen="<<j<<" chicken="<<(100-i-j)<<endl;
				}
			}
	return 0;
}



