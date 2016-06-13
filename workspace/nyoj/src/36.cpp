/**
 * Project Name: nyoj 
 * File Name: 36.cpp
 * Created on: 2015年4月12日 下午9:24:28
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//2
//asdf
//adfsd
//123abc
//abc123abc
//样例输出
//3
////6
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		string a,b,temp;bool flag=false;
//		cin>>a>>b;
//		if(b.size()>a.size())a.swap(b);
//		for(size_t i=b.size();i>0;i--)
//			if(!flag)
//			for(size_t j=0;j<b.size()-i;j++){
//				temp=b.substr(j,i);
//				if(a.find(temp,0)!=string::npos){
//					cout<<i+1<<endl;
//					flag=true;
//					break;
//				}
//			}
//	}
//	return 0;
//}
/*
#include<stdio.h>
#include<string.h>

int a[1001][1001];
int lcs(char *s1, char *s2) {
	int m = strlen(s1), n = strlen(s2);
	int i, j;
	a[0][0] = 0;
	for (i = 1; i <= m; ++i)//清零
		a[i][0] = 0;
	for (i = 1; i <= n; ++i)
		a[0][i] = 0;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; ++j) {
			if (s1[i - 1] == s2[j - 1])//有相同字母，加一
				a[i][j] = a[i - 1][j - 1] + 1;
			else if (a[i - 1][j] > a[i][j - 1])
				a[i][j] = a[i - 1][j];
			else
				a[i][j] = a[i][j - 1];
		}
	return a[m][n];
}

int main36() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char c[1008], b[1008];
		memset(b, 0, sizeof(b));
		memset(c, 0, sizeof(c));
		scanf("%s%s", c, b);
		printf("%d\n", lcs(b, c));
	}

	return 0;
}*/

