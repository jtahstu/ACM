/**
 * Project Name: nyoj_2.0
 * File Name: 1058.cpp
 * Created on: 2015��5��18�� ����8:12:24
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include <cstdio>
//#include <cstring>
//using namespace std;
//int a[30], n, k, sum;
//bool visit[30], flag;
//void dfs(int pos) {
//	if (flag == true)
//		return;
//	if (sum >= k) {
//		if (sum == k) {
//			flag = true;
//			printf("YES\n");
//			for (int i = 0; i < n; i++)
//				if (visit[i]) //���
//					printf("%d ", a[i]);
//		}
//		return; //������ǵݹ�������������������һ������������ʱ�仨���ͼ����˲���
//	}
//	for (int i = pos; i < n; i++) //�����Ĺ���
//			{
//		sum += a[i];
//		visit[i] = 1;
//		dfs(i + 1);
//		sum -= a[i];
//		visit[i] = 0;
//	}
//}
//int main() {
//	int i;
//	while (scanf("%d%d", &n, &k) != EOF) {
//		for (i = 0; i < n; i++)
//			scanf("%d", &a[i]);
//		memset(visit, 0, sizeof(visit));
//		flag = false;
//		dfs(0);
//		if (!flag)
//			printf("NO\n");
//	}
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//using namespace std;
//int jt[25],n,k;
//bool dfs(int i,int sum){
//	if(i==n)return sum==k;
//	if(dfs(i+1,sum))return true;
//	if(dfs(i+1,sum+jt[i]))return true;
//	return false;
//}
//int main()
//{
//	cin>>n>>k;
//	for(int i=0;i<n;i++)
//		cin>>jt[i];
//	 if(dfs(0,0))cout<<"YES"<<endl;
//	 else cout<<"NO"<<endl;
//	return 0;
//}
//���ֺ�����
//ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
//�Ѷȣ�2
//����
//��������a1��a2��.......an���ж��Ƿ���Դ���ѡ����������ʹ���ǵĺ�ǡ��ΪK��
//����
//���ȣ�n��k��n��ʾ���ĸ�����k��ʾ���ĺ͡�
//����һ��n������
//��1<=n<=20,��֤����int��Χ��
//���
//�����ǡ�ÿ���Ϊk�������YES������������˳��������������ļ������ĺ���ɣ�����NO��
//��������
//4 13
//1 2 4 7
//�������
//YES
//2 4 7
