/**
 * Project Name: nyoj_2.0 
 * File Name: 628.cpp
 * Created on: 2015��5��19�� ����9:41:50
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//���к�		�û� 	��Ŀ 		��� 		ʱ�� 	�ڴ� 	���� 	�ύʱ��
//1278400 	jtahstu	С����Ŭ��	Accepted 	244 	40076 	C/C++	05-19 21:53:02
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int a[10000005];
//struct jt {
//	int geshu; //����
//	int shuzi; //����
//} b[100000];
//int main() {
//	int n, m;
//	cin >> n;
//	while (n--) {
//		memset(a,0,sizeof(a));
//		memset(b,0,sizeof(b));
//		int count = 0;
//		cin >> m >> a[0];
//		b[0].shuzi = a[0];
//		b[0].geshu++;
//		for (int i = 1; i < m; i++) {
//			cin >> a[i];
//			if (a[i] == a[i - 1])
//				b[count].geshu++;
//			else {
//				count++;
//				b[count].shuzi = a[i];
//				b[count].geshu++;
//			}
//		}
//		for (int i = 0; i <= count; i++)
//			cout << b[i].geshu << " " << b[i].shuzi << " ";
//		cout << endl;
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//
//	int N;
//	int a, n, i, count, b;
//	scanf("%d", &N);
//	while (N--) {
//		scanf("%d", &n);
//		scanf("%d", &a);
//		count = 1;
//		for (i = 1; i < n; i++) {
//			scanf("%d", &b);
//			if (b == a)
//				count++;
//			else {
//				printf("%d %d ", count, a);//���������
//				a = b;
//				count = 1;
//			}
//		}
//		printf("%d %d\n", count, a);
//	}
//	return 0;
//}

//С����Ŭ��
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�2
//
//����
//    �ڶ�ý�����ݴ����У�����ѹ���㷨��Ϊ��Ҫ��С������κ�����Լ�����һ������ѹ���㷨������ѽ�룬�����뵽һ��������
//	�ڶ�ý���������кܶ����ݶ����ظ��ģ����������������ͬ�����������ݳ��ֵĴ��������ݱ����ʾ�����磺1 1 1 2 3 3 3 3 3
//	ѹ����Ϊ3 1 1 2 5 3����ʾ3��1��1��2��5��3�������뷨��С�¾�ϣ�������ô���ʵ���ˡ����Ǵ�Ҷ�֪��С���������춼æ�ſ�B
//	�ĸ�ϰ���У������Զ���������������ϣ����ΪACMer�������дһ�¡�
//
//����
//    ��������������ݣ���һ��һ������T����������������
//
//    ÿ��������ʼһ����M < 10^7��ʾ�������������ֵĸ�����������M������ʾҪ��ѹ�������֣����ֶ�������int��ʾ�ķ�Χ����
//���
//    ÿ������������һ�����ֶԣ�������������һ������������֮����һ���ո������
//��������
//
//    1
//    9 1 1 1 2 3 3 3 3 3
//
//�������
//
//    3 1 1 2 5 3
//
//��Դ
//    ֣�������У��
//�ϴ���
//    ACM_������
