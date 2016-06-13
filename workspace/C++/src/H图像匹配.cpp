/**
 * Project Name: 省赛 
 * File Name: H图像匹配.cpp
 * Created on: 2015年4月26日 下午3:06:57
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
/*
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
struct picture{
	char name[30];
	char hash[40];
}a[10005];
int calc(char a[],char b[]){
	int count=0,len=strlen(a);
	for(int i=0;i<len;i++)
		if((a[i]-'0')^(b[i]-'0'))
			count++;
	return 36-count;
}
int mainH()
{
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%s%s",a[i].name,a[i].hash);
	scanf("%d",&m);
	while(m--){
		char c[30],b[40];
		int count[10005]={0},max=-1,res=0;
		scanf("%s%s",c,b);
		for(int i=0;i<n;i++){
			count[i]=calc(a[i].hash,b);
			if(count[i]>max)max=count[i];
		}
		for(int i=0;i<n;i++)
			if(count[i]==max){
				res++;
			}
		printf("%d\n",res);
		printf("%d\n",max);
		for(int i=0;i<n;i++)
			if(count[i]==max)
				printf("%s\n",a[i].name);
	}
	return 0;
}

*/

