/**
 * Project Name: C++_codes
 * File Name: jtahstu.cpp
 * Created on: 2015Äê5ÔÂ
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
int ans[10000000],m[105],a[105],d,k,res;
bool dfs(int i,int sum){
	if(i==d){
		return sum=res;
	}
	if(dfs(i+1,sum)){
		return true;
	}
	if(dfs(i+1,sum+ans[i])){
		return true;
	}
	return false;
}
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	while(t--){
		int n,count=0;
		d=0;
		cin>>n;
		for (int i=0; i<n;++i){
			cin>>a[i];
		}
		for (int i=0; i<n;++i){
			cin>>m[i];
			d+=m[i];
		}
		cin>>res;
		for (int i=0; i<n;++i){
			for (int j=0; j<m[i];++j){
				ans[count++]=a[i];
			}
		}
		if(dfs(0,0)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
