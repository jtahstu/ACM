/*
 * 32.cpp
 * Created on: 2015��4��4��
 * Author: jtahstu
 */
//32�г����������
//������˳�������г����з�ĸΪ40������С��40����������
//
//*���н��
//The fraction serials with demominator 40 is:
//1/40 3/40 7/40 9/40 11/40 13/40 17/40 19/40
//21/40 23/40 27/40 29/40 31/40 33/40 37/40 39/40

#include<iostream>
#include<cstdio>
using namespace std;
int gcd32(int a,int b){
	return b==0?a:gcd32(b,a%b);
}
int main32()
{
	for(int i=1;i<40;i++)
		{if(gcd32(40,i)==1)
			cout<<i<<"/40"<<" ";
		}
	return 0;
}


