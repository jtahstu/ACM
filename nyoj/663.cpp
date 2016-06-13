/**
 * Project Name: C++_codes
 * File Name: jtahstu.cpp
 * Created on: 2015年5月
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
bool judge(int a,int b,char c[],char d){
	int len=strlen(c),sum=0;
	for(int i=0;i<len;i++)
		sum=sum*10+c[i]-'0';
	if(a+b==sum&&d=='+')
		return true;
	else if(a-b==sum&&d=='-')
		return true;
	else
		return false;
}
int main(int argc, char const *argv[]){
	int count=0,a,b;
	char c[10],d;
	while(~scanf("%d%c%d=%s",&a,&d,&b,c)){
		if(judge(a,b,c,d)){
			count++;
		}	
	}
	cout<<count<<endl;
	return 0;
}

#include<stdio.h>
#include<string.h>
char s[30];
int main()
{
    int a,b,c,cnt=0;
    while(~scanf("%s",s))
    {
        int k=sscanf(s,"%d+%d=%d",&a,&b,&c);
        int j=sscanf(s,"%d-%d=%d",&a,&b,&c);
        if(k==3&&a+b==c)
            cnt++;
        if(j==3&&a-b==c) cnt++;

    }
    printf("%d\n",cnt);
    return 0;
}