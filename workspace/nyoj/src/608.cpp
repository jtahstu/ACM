/**
 * Project Name: nyoj_2.0 
 * File Name: 608.cpp
 * Created on: 2015��5��21�� ����7:28:07
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include<iostream>�������һֱ��Ҳ��֪���ĸ����ݳ������ˣ�����oj��û����ģ�����
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int main() {
//	int a[1000 + 10] = { 0 }, n, m, p, q, count;
//	while (cin >> n && n) {
//		memset(a, 0, sizeof(a));
//		count = 1;
//		cin >> m;
//		if (m == 0) {
//			cout << n - 1 << endl;
//			continue;
//		}
//		cin >> p >> q;
//		a[p] = a[q] = count;
//		for (int i = 1; i < m; i++) {
//			cin >> p >> q;
//			if (a[p] != 0)
//				a[q] = a[p];
//			else if (a[q] != 0)
//				a[p] = a[q];
//			else {
//				count++;
//				a[p] = count;
//				a[q] = a[p];
//			}
//		}
//		for (int i = 1; i <= n; i++)
//			if (a[i] == 0)
//				count++;
//		cout << count - 1 << endl;
//	}
//	return 0;
//}
//#include<stdio.h>//���鼯
//int father[1002];
//int find(int x) //Ѱ�Ҹ��ڵ�
//{
//	if(father[x]!=x)
//	father[x]=find(father[x]);
//	return father[x];
//}
//void merge(int a,int b) //�ϲ�a��b���ڵļ���
//{
//	int p=find(a);
//	int q=find(b);
//	father[p]=q;
//}
//int main()
//{
//	int n,m,a,b,i;
//	while(~scanf("%d",&n)&&n)
//	{
//		scanf("%d",&m);
//		for(i=1;i<=n;i++)
//		father[i]=i; //��ʼ��Ϊÿ����Ϊһ����������
//		for(i=0;i<m;i++)
//		{
//			scanf("%d%d",&a,&b);
//			merge(a,b); //�ϲ�a��b
//		}
//		int count=0;
//		for(i=1;i<=n;i++)
//		if(father[i]==i) //�����м�������
//		count++;
//		printf("%d\n",count-1);
//	}
//	return 0;
//}
//��ͨ����
//ʱ�����ƣ�2000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�3
//
//����
//    ĳʡ�������ͨ״�����õ����г����·ͳ�Ʊ������г���ÿ����·ֱ����ͨ�ĳ���ʡ��������ͨ���̡���Ŀ����ʹȫʡ�κ���
//	������䶼����ʵ�ֽ�ͨ������һ����ֱ�ӵĵ�·������ֻҪ������ͨ����·�ɴＴ�ɣ��������ٻ���Ҫ�����������·��
//
//����
//    ��������������ɲ���������ÿ�����������ĵ�1�и����������������ֱ��ǳ�����ĿN ( < 1000 )�͵�·��ĿM������M�ж�ӦM��
//	��·��ÿ�и���һ�����������ֱ��Ǹ�����·ֱ����ͨ����������ı�š�Ϊ������������1��N��š�
//    ע��:��������֮������ж�����·��ͨ,Ҳ����˵
//    3 3
//    1 2
//    1 2
//    2 1
//    ��������Ҳ�ǺϷ���
//    ��NΪ0ʱ�������������������������
//���
//    ��ÿ��������������1����������ٻ���Ҫ����ĵ�·��Ŀ��
//��������
//
//    4 2
//    1 3
//    4 3
//    3 3
//    1 2
//    1 3
//    2 3
//    5 2
//    1 2
//    3 5
//    999 0
//    0
//
//�������
//
//    1
//    0
//    2
//    998

