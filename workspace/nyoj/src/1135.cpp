/**
 * Project Name: nyoj_2.0 
 * File Name: 1135.cpp
 * Created on: 2015年5月16日 下午4:34:37
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int change(int n,int b)
//{
//	int ans=0,temp=n,a[10]={0},i=0,bb=1;
//	while(temp){
//		a[i++]=temp%10;
//		temp/=10;
//	}
//	for(int j=0;j<i;j++){
//		ans+=a[j]*bb;
//		bb*=b;
//	}
//	return ans;
//}
//int maxn(int n)
//{
//	int max=0;
//	while(n){
//		if(n%10>max)
//			max=n%10;
//		n/=10;
//	}
//	return max+1; //假如最大数值是2，则从3进制开始
//}
//int main1135()
//{
//	int p,q,r;
//	while(cin>>p>>q>>r){
//		int start=max(max(maxn(p),maxn(q)),maxn(r));//避免不必要的计算
//		bool flag=false;
//		for(int i=start;i<=16;i++){
//			if(change(p,i)*change(q,i)==change(r,i)){
//				flag=true;
//				cout<<i<<endl;
//				break;
//			}
//		}
//		if(!flag)cout<<"0"<<endl;
//	}
//	return 0;
//}

//进制转换
//时间限制：1000 ms  |  内存限制：65535 KB
//难度：1
//描述
//问题描述：6*9=42 对十进制来说是错误的 但是对13进制来说却是正确的 即6（13）*9（13）=42（13）
//42（13）=4*13+2*1=54；你的任务是编写一段程序 读入3个整数，p,q和r 然后确定一个进制B（2<=B<=16），使得p*q=r。
//如过B有很多选择 则输出最小的那个进制
//如果没有合适的进制，则输出0
//输入
//多组测试数据，1《=p,q,r<=1000000;
//输出
//对于每一次测试样例输出第一行。该行包含一个整数：即令p*q=r成立的最小的B
//样例输入
//6 9 42
//11 11 121
//2 2 2
//样例输出
//13
//3
//0
//上传者
//ACM_胡皓

