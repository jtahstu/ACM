/**
 * Project Name: Smartoj 
 * File Name: P1010.cpp
 * Created on: 2015年4月20日 上午12:12:39
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main1010()
{
	string s;
	cin>>s;
	if((s[s.length()-1]-'0')%2==1)cout<<"no"<<endl;
	else cout<<"yes"<<endl;
	return 0;
}



