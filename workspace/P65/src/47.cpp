/**
 * Project Name: P65 
 * File Name: 47.cpp
 * Created on: 2015��4��5�� ����4:01:51
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//47��ʽ��ԭ
//��д���������ʽ�и���ĸ����������֣���ͬ����ĸ����ͬ�����֡�
//PEAR
//-	ARA
//--------
//PEA
//
//*���н��
//PEAR 1098
//ARA �C 989
//----------
//PEA 109

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main47()
{
	for(int a=0;a<10;a++)//P		//��ö��
		for(int b=0;b<10;b++)//E
			for(int c=0;c<10;c++)//A
				for(int d=0;d<10;d++)//R
				{
					if((a*1000+b*100+c*10+d)-(c*100+d*10+c)==(a*100+b*10+c)&&a+b+c!=0)
						cout<<a*1000+b*100+c*10+d<<"-"<<c*100+d*10+c<<"="<<a*100+b*10+c<<endl;
				}
	return 0;
}



