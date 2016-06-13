/**
 * Project Name: 省赛
 * File Name: J.一道简单的几何变换.cpp
 * Created on: 2015年4月28日 下午3:35:33
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//2
//1 1
//2 2
//1
//1 1 1
/*#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
struct point{
	int x;
	int y;
}a[10005];
int main(){
		int m,n,b,p,q,l;
		while(scanf("%d",&n)==1){
			int a1=1,b1=0,c1=1,d1=0;
		for(int i=0;i<n;i++)
			scanf("%d%d",&a[i].x,&a[i].y);
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%d",&b);
			if(b==1){
				scanf("%d%d",&p,&q);
				b1+=p;
				d1+=q;
			}
			else if(b==2){
				scanf("%d",&l);
				a1*=l;
				b1*=l;
				c1*=l;
				d1*=l;
			}
			else if(b==3){
				c1=-c1;
				d1=-d1;
			}
			else if(b==4){
				a1=-a1;
				b1=-b1;
			}
		}
		for(int i=0;i<n;i++)
			printf("%d %d\n",a1*a[i].x+b1,c1*a[i].y+d1);
	}
	return 0;
}*/
//int main()
//{
//	int m,n,b,p,q,l;
//	while(scanf("%d",&n)==1){
//	for(int i=0;i<n;i++)
//		scanf("%lld%lld",&a[i].x,&a[i].y);
//	scanf("%d",&m);
//	for(int i=0;i<m;i++){
//		scanf("%d",&b);
//		if(b==1){
//			scanf("%d%d",&p,&q);
//			for(int i=0;i<n;i++){
//				a[i].x+=p;
//				a[i].y+=q;
//			}
//			continue;
//		}
//		else if(b==2){
//			scanf("%d",&l);
//			for(int i=0;i<n;i++){
//				a[i].x*=l;
//				a[i].y*=l;
//			}
//			continue;
//		}
//		else if(b==3){
//			for(int i=0;i<n;i++)
//				a[i].y*=-1;
//			continue;
//		}
//		else{
//			for(int i=0;i<n;i++)
//				a[i].x*=-1;
//			continue;
//		}
//	}
//	for(int i=0;i<n;i++)
//		printf("%lld %lld\n",a[i].x,a[i].y);
//	}
//	return 0;
//}



