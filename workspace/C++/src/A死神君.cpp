/**
 * Project Name: ʡ�� 
 * File Name: A�����.cpp
 * Created on: 2015��4��26�� ����4:35:45
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//Sample Input
//2
//1 2
//Sample Output
//1
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int aa[1000005];
int mainA()
{
	int n;
	while(cin>>n){
		memset(aa,0,sizeof(aa));
		cin>>aa[0];
		int sum=0;
		for(int i=1;i<n;i++){
			cin>>aa[i];
			aa[i]>aa[i-1]?sum+=aa[i-1]:sum+=aa[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}



