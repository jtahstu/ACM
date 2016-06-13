/**
 * Project Name: P65 
 * File Name: 47.cpp
 * Created on: 2015年4月5日 下午4:01:51
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//47减式还原
//编写程序求解下式中各字母所代表的数字，不同的字母代表不同的数字。
//PEAR
//-	ARA
//--------
//PEA
//
//*运行结果
//PEAR 1098
//ARA – 989
//----------
//PEA 109

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main47()
{
	for(int a=0;a<10;a++)//P		//简单枚举
		for(int b=0;b<10;b++)//E
			for(int c=0;c<10;c++)//A
				for(int d=0;d<10;d++)//R
				{
					if((a*1000+b*100+c*10+d)-(c*100+d*10+c)==(a*100+b*10+c)&&a+b+c!=0)
						cout<<a*1000+b*100+c*10+d<<"-"<<c*100+d*10+c<<"="<<a*100+b*10+c<<endl;
				}
	return 0;
}



