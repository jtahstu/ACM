/**
 * Project Name: nyoj_2.0 
 * File Name: 480.cpp
 * Created on: 2015��5��17�� ����9:56:14
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
//using namespace std;
//bool prime(int n){
//	for(int i=2;i*i<=n;i++){
//		if(n%i==0)return false;
//	}
//	return true;
//}
//int main480()
//{
//	int f[35]={0,3,7},n;
//	for(int i=3;i<=30;i++)
//		f[i]=f[i-1]+f[i-2];
//	while(cin>>n){
//		if(prime(f[n]))cout<<"Yes"<<endl;
//		else cout<<"No"<<endl;
//	}
//	return 0;
//}
//Fibonacci Again!
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�2
//����
//���n��쳲��������Ƿ���һ������,nΪ����
//f[n]=f[n-1]+f[n-2] (2<n<30)
//f[1]=3,f[2]=7
//����
//��������m,0<m<30,����-1��ʾ��������
//
//���
//���f[m]������ �����Yes,�������No,
//ÿ�����ռһ�С�
//��������
//2
//3
//�������
//Yes
//No


