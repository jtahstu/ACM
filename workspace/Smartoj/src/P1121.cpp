/**
 * Project Name: Smartoj 
 * File Name: P1121.cpp
 * Created on: 2015年4月23日 下午8:06:29
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//输入数据
//3
//owe
//too
//theee
//输出数据
//1
//2
//3
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s.length()==5)cout<<"3"<<endl;
		else if(s.length()==3){
			if((s[0]=='o'&&s[1]=='n')||(s[0]=='o'&&s[2]=='e')||(s[1]=='n'&&s[2]=='e'))cout<<"1"<<endl;
			else cout<<"2"<<endl;
		}
	}
	return 0;
}



