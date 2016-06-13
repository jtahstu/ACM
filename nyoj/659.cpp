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
int jt(int a[]){
	if(a[2]==a[0]){
		cout<<"YE YE YE"<<endl;
		return 0;
	}
	else if((a[1]==a[0]||a[2]==a[1])&&a[0]+a[1]>a[2]){
		cout<<"YE YE"<<endl;
		return 0;
	}
	else if(a[0]+a[1]>a[2]){
		cout<<"YE"<<endl;
		return 0;
	}
	else if(a[0]+a[1]<=a[2]){
		cout<<"NO"<<endl;
		return 0;
	}
}
int main(){
	int n,casea=1;
	cin>>n;
	while(n--){
		int a[4]={0};
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		cout<<"Case #"<<casea++<<":"<<endl;
		jt(a);
	}
	return 0;
}