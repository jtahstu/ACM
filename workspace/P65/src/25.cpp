/*
 * 25.cpp
 * Created on: 2015��4��3��
 * Author: jtahstu
 */
//25���伸��
//���������ġ����塢�����������һ�Ȳ����У��������˵����������26�������880���������ǵ�����Ϊǰ4��ĵȲ����е�ǰ20�
//
//*���н��
//The series with equal difference are:
//2 5 8 11 14 17 20 23 26 29 32 35 38 41 44 47 50 53 56 59

#include<iostream>
#include<cstdio>
using namespace std;
int main25()
{
	bool flag=false;
	cout<<"The series with equal difference are:"<<endl;
	for(int i=1;i<=6;i++){
		if(flag)break;//�����һ������ˣ�����ѭ��
		for(int j=1;j<=6;j++)
		{
			if(i*4+ 6*j==26&&(i*(i+j)*(i+2*j)*(i+3*j)==880))
			{
				for(int x=0;x<20;x++)
					cout<<i+x*j<<" ";
				flag=true;//�н���ˣ�����
				break;
			}
		}
	}
	cout<<endl;
	return 0;
}



