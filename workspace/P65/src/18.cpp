/*
 * 18.cpp
 * Created on: 2015年4月2日
 * Author: jtahstu
 */
//18 回文数
//打印所有不超过n(取n<256) 的其平方具有对称性质的数(也称回文数)。
//
//*运行结果
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
		if(a[l]!=a[k-l])//这里k表示这个数有几位，在这里k比数长度大一，即10201时k为6
		{
			flag=false;
			break;
		}
	if(flag)return true;
	else return false;
}
int main18()
{
	int num=3;//一位数肯定符合题意，直接输出，从10开始循环
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



