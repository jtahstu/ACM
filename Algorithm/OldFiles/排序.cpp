/**
 * Project Name: 
 * File Name: 
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
int main(int argc, char const *argv[]){
	string a[5]={"abc","aacd","lkjk","jtahstu","ahstu"};
	cout<<a[0]<<endl;
	sort(a,a+5);
	for (int i=0; i<5;++i){
		cout<<a[i]<<endl;
	}
	return 0;
}
