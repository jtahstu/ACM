/*
 * 18.cpp
 * Created on: 2015��4��2��
 * Author: jtahstu
 */
//18 ������
//��ӡ���в�����n(ȡn<256) ����ƽ�����жԳ����ʵ���(Ҳ�ƻ�����)��
//
//*���н��
//No. number it's square(palindrome)
//1 1 1
//2 2 4
//3 3 9
//4 11 121
//5 22 484
//6 26 676
//7 101 10201
//8 111 12321
//9 121 14641...

#include<iostream>
#include<cstdio>
using namespace std;
bool jt18(int i)
{
	int a[10]={0},j=i,k;
	for(k=1;j>0;k++)
	{
		a[k]=j%10;
		j/=10;
	}
	bool flag=true;
	for(int l=1;l<=k/2;l++)
		if(a[l]!=a[k-l])//����k��ʾ������м�λ��������k�������ȴ�һ����10201ʱkΪ6
		{
			flag=false;
			break;
		}
	if(flag)return true;
	else return false;
}
int main18()
{
	int num=3;//һλ���϶��������⣬ֱ���������10��ʼѭ��
	cout<<"1 1 1"<<endl<<"2 2 4"<<endl<<"3 3 9"<<endl;
	for(int i=10;i<256;i++)
	{
		if(jt18(i*i))
		{
			num++;
			cout<<num<<" "<<i<<" "<<i*i<<endl;
		}
	}
	return 0;
}



