/**
 * Project Name: codes
 * File Name: test.cpp
 * Created on: 2015年5月17日 下午8:06:45
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

int jtahstu(int a[]){
	if(a[1]-a[0]==a[2]-a[1]&&a[2]-a[1]==a[3]-a[2]&&a[3]-a[2]==a[4]-a[3]){
		cout<<a[4]+a[1]-a[0]<<" "<<a[4]+2*(a[1]-a[0])<<" "<<a[4]+3*(a[1]-a[0])
		<<" "<<a[4]+4*(a[1]-a[0])<<" "<<a[4]+5*(a[1]-a[0])<<endl;
		return 0;
	}
	else if(a[1]/a[0]==a[2]/a[1]&&a[2]/a[1]==a[3]/a[2]&&a[3]/a[2]==a[4]/a[3]&&a[2]/a[1]*a[1]==a[2]){
		for(int i=5;i<10;i++){
			a[i]=a[i-1]*(a[1]/a[0]);
		}
		cout<<a[5]<<" "<<a[6]<<" "<<a[7]<<" "<<a[8]<<" "<<a[9]<<" "<<endl;
		return 0;
	}
	else if((a[2]==a[1]+a[0])&&(a[3]==a[2]+a[1])&&(a[4]==a[3]+a[2])){
		for (int i=5; i<10;i++){
			a[i]=a[i-1]+a[i-2];
		}
		cout<<a[5]<<" "<<a[6]<<" "<<a[7]<<" "<<a[8]<<" "<<a[9]<<" "<<endl;
		return 0;
	}
	else{
		cout<<"None"<<endl;
		return 0;
	}
}
int main(){
	int a[15]={0};
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]){
		jtahstu(a);
		memset(a,0,sizeof(a));
	}
	return 0;
}
