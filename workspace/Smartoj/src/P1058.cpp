/**
 * Project Name: Smartoj 
 * File Name: P1058.cpp
 * Created on: 2015年4月21日 下午9:06:10
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
bool test1(int i,int m){
	if(i%m==0)return true;
	return false;
}
bool test2(int i,int m){
	int i1=i;
	while(i1){
		if(i1%10==m)return true;
		i1/=10;
	}
	return false;
}
int main1058()
{
	int m,n,count=0;
	cin>>m>>n;
	for(int i=1;i<=n;i++)
		if(test1(i,m)||test2(i,m))
			count++;
	cout<<count<<endl;
	return 0;
}



