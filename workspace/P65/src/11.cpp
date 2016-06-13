/*
 * 11.cpp
 * Created on: 2015年4月1日
 * Author: jtahstu
 */
//11 8除不尽的数
//一个自然数被8除余1，所得的商被8除也余1，再将第二次的商被8除后余7，最后得到一个商为a。
//又知这个自然数被17除余4，所得的商被17除余15，最后得到一个商是a的2倍。求这个自然数。
//
//运行结果
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



