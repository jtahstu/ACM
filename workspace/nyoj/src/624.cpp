/**
 * Project Name: nyoj_2.0 
 * File Name: 624.cpp
 * Created on: 2015��5��17�� ����8:38:50
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
//int change624(string s)
//{
//
//	if(s[0]=='N')return 1;
//	if(s[0]=='E')return 2;
//	if(s[0]=='S')return 3;
//	if(s[0]=='W')return 4;
//}
//int main624()
//{
//	string s,ans624[5]={"","North","East","South","West"};
//	int n,m;
//	while(cin>>s>>n){
//		int start=change624(s);
//		for(int i=0;i<n;i++){
//			cin>>m;
//			if(m==0){
//				if(start==1)start+=4;
//				start-=1;
//			}
//			if(m==1){
//				if(start==4)start-=4;
//				start+=1;
//			}
//		}
//		cout<<ans624[start]<<endl;
//	}
//	return 0;
//}


//����������(һ)
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�1
//����
//       ����֮���Գ�Ϊ����������Ϊ���е�·�ա���һ�������ˣ��ͱ�Ȼһ��������Ŀ�ĵĳ�ȥ���ߡ����������ˣ����ֲ������ˣ���ô�죿
//	   �Ǿͳ�ȥ���£��ⲻ�ֶ��ˣ�����Һü��³���ʱ�ķ��򣬲�����һ��ֽ����������ļ��������յ��䣨���ܴ����ɣ��յ��䶼��90�ȵ��䣩
//	   ��0������գ�1�����ҹգ���ô��0��1����ʵ�ڿ�����ȥ�ˣ��������������Ӵ������㣬���ܸ���������������������
//����
//�����������
//��һ��
//���룺����ʼʱ����Է��򣬺����������n��0<n<100����
//����n�����ֱ�ʾ�յ��䡣
//���
//������������ķ���(West,East,North,South)
//��������
//East  1
//0
//North   1
//1
//�������
//North
//East
