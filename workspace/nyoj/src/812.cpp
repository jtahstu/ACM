/**
 * Project Name: nyoj_2.0 
 * File Name: 812.cpp
 * Created on: 2015��6��9�� ����12:33:38
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
//bool judge(int m){
//	int count=0,n=m;
//	while(n){
//		if(n%2==1)
//			count++;
//		n/=2;
//	}
//	if(count&1) return false;
//	return true;
//}
//void change(int sum){
//	int a[100]={0},i=0,m=sum;//ò���������鿪С�� , MD , ȷʵ������ ������Ŀ����������
//	while(m){
//		a[i]=m%2;
//		m/=2;
//		i++;
//	}
//	for(int j=i-1;j>=0;j--)
//		cout<<a[j];
//	cout<<endl;
//}
//int main()
//{
//	int n,m;
//	while(cin>>n){
//		int sum=0;
//		for(int i=0;i<n;i++){
//			cin>>m;
//			if(judge(m))
//				sum+=m;
//		}
//		if(sum==0)cout<<"0"<<endl;
//		else change(sum);
//	}
//	return 0;
//}
//ˮ��~~
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�1
//
//����
//
//    ����һ����������ÿ��������ȡֵΪ��1,255�������Ƕ��ã��պ���8λ������λ���Ա�ʾ������
//
//    ��Ҫ���ľ��ǣ�����ÿ���������������������Ķ�����λ��ż����1�����������Ҫ��
//	�ѷ���Ҫ����������Ķ�����λ��ӣ����ö����Ʊ�ʾ���������֪��������
//
//����
//    �ж���������ݡ�
//    ÿ��������ݵ�һ������N����ʾ��N����������N<=255
//    �ڶ�������N����������ÿ��������ȡֵΪ[1~255]
//���
//    �����������Ҫ����������Ķ����Ʊ�ʾ���ĺ�
//��������
//
//    5
//    1 2 3 4 5
//    7
//    1 2 3 4 5 6 7
//    2
//    1 2
//
//�������
//
//    1000
//    1110
//    0
//
//��ʾ
//    ����1:3�Ķ�����Ϊ00000011��5�Ķ�����Ϊ00000101����������������Ӽ���1110������ǰ����㣩��


