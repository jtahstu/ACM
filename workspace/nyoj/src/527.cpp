/**
 * Project Name: nyoj_2.0 
 * File Name: 527.cpp
 * Created on: 2015��5��17�� ����9:09:50
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
//const int N=1314520;
//int separate(int n){ //����n,��a*b��ֵ
//	int a=0,b=0,temp=n;
//	while(temp){
//		temp%2==1?a++:b++;
//		temp=temp>>1;
//	}
//	return a*b;
//}
//int main527()
//{
//	int fb[405]={1,1},n;
//	for(int i=2;i<400;i++)//���
//		fb[i]=(fb[i-1]%N+fb[i-2]%N)%N;
//	while(cin>>n){
//		cout<<fb[separate(n)]<<endl;
//	}
//	return 0;
//}


//AC_mm��dota
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�2
//����
// ��Ҷ�֪��AC_mm�Ƚ�ϲ������Ϸ���ر����ó�war3������Ϸ��ĳ��AC_mm������VSƽ̨�� ��׼��ȥŰ��������һ����С�Ľ�����ACM�ӳ�Ű�� ^_^��
// ���ǵĶӳ����¿ɲ������ˣ�˵Ҫ��һ��������AC_mm�ѿ�һ�¡���Ŀ�����������ģ���һ��������n��n�ڶ����Ʊ�ʾ������£�����ǰ��0�ͷ���λ��
// ��a��1��b��0����쳲��������еĵ�a*b���1314520ȡģ���ֵans��
//
//ע��(쳲��������У� f[0]=1,f[1]=1; f[n]=f[n-1]+f[n-2] �� n>=2;)
//
//����
//���룺�ж����������,����һ��������n(n<10 0000 0000);   separate
//���
//�����ans��ֵ
//��������
//12
//6
//�������
//5
//2
