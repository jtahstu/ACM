/**
 * Project Name: nyoj
 * File Name: 20.cpp
 * Created on: 2015��6��24�� ����8:01:32
 * Author: jtahstu
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//����vector STL����
//��map[i][0--����±�]����¼�����i ������·�ĳ���
//������������������map[1][0]=9��map[1][1]=8,
//���壺�����1������·�ĵ�0������Ϊ����9����1������Ϊ����8
//#include<iostream>
//#include<cstdio>
//#include<string.h>
//#include<vector>
//using namespace std;
//int res[100005];       //��¼�յ��ǰһ������
//vector<int> v[100005];  //�൱�ڿ���һ����ά�����飬����100005�У�v[x].push_back(y)���ڵ�x��β�����Ԫ��y
//void DFS(int cur) {
//	for (unsigned int i = 0; i < v[cur].size(); ++i) { //v[cur].size()��ʾ��cur������Ԫ�صĸ��������м������к�cur��ͨ
//		if (res[v[cur][i]])  //�����res�Ѿ���¼���յ��ǰһ�����У�����ѭ��
//			continue;
//		res[v[cur][i]] = cur;  //��¼������v[cur][i]��ǰһ������
//		DFS(v[cur][i]);      //����<strong>����</strong>��ֱ�������е�·����
//	}
//}
//
//int main() {
//	int ncase, num, cur, i, x, y;
//	scanf("%d", &ncase);
//	while (ncase--) {
//		memset(v, 0, sizeof(v));
//		memset(res, 0, sizeof(res));
//		scanf("%d%d", &num, &cur);
//		res[cur] = -1;
//		for (i = 0; i < num - 1; ++i) {
//			scanf("%d%d", &x, &y);
//			v[x].push_back(y);      //������������ͨ�ı��һ�£���1-n���У���ס������к��ĸ���ͨ
//			v[y].push_back(x);		//���磺1��8֮����ͨ������v[1][x]=8,v[8][x]=1
//		}
//		DFS(cur);
//		for (i = 1; i <= num; ++i)
//			printf("%d ", res[i]);
//	}
//	return 0;
//}
