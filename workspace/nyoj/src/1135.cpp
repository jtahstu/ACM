/**
 * Project Name: nyoj_2.0 
 * File Name: 1135.cpp
 * Created on: 2015��5��16�� ����4:34:37
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
//	return max+1; //���������ֵ��2�����3���ƿ�ʼ
//}
//int main1135()
//{
//	int p,q,r;
//	while(cin>>p>>q>>r){
//		int start=max(max(maxn(p),maxn(q)),maxn(r));//���ⲻ��Ҫ�ļ���
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

//����ת��
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�1
//����
//����������6*9=42 ��ʮ������˵�Ǵ���� ���Ƕ�13������˵ȴ����ȷ�� ��6��13��*9��13��=42��13��
//42��13��=4*13+2*1=54����������Ǳ�дһ�γ��� ����3��������p,q��r Ȼ��ȷ��һ������B��2<=B<=16����ʹ��p*q=r��
//���B�кܶ�ѡ�� �������С���Ǹ�����
//���û�к��ʵĽ��ƣ������0
//����
//����������ݣ�1��=p,q,r<=1000000;
//���
//����ÿһ�β������������һ�С����а���һ������������p*q=r��������С��B
//��������
//6 9 42
//11 11 121
//2 2 2
//�������
//13
//3
//0
//�ϴ���
//ACM_���

