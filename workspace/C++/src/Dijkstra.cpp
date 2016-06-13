///**
// * Project Name: C++
// * File Name: Dijkstra.cpp
// * Created on: 2016��3��30�� ����8:36:13
// * Author: jtahstu
// * Email: root@jtahstu.com
// * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
// */
//#include <iostream>
//using namespace std;
//
//const int N = 110;
//const int INF = 999999999;
//int w[N][N]; //�ڽӾ���
//bool done[N]; //��d[i]���ٸ��£���done[i]=true, Ҳ����������˽⼯
//int d[N]; //d[i]��¼����㵽���i�����·������
//int par[N]; //par[i]�����¼i�ĸ��׽��
//
////����ͼ
//void createGraph(int n) {
//	int i, j;
//
//	for (i = 0; i != n; i++)
//		for (j = 0; j != n; j++)
//			scanf("%d", &w[i][j]);
//}
//
////star:��Դ���
////n:�����Ŀ
//void dijkstra(int star, int n) {
//	int i, j, min, x, y;
//
//	//��ʼ��d[], v[]
//	memset(done, false, sizeof(done));
//	for (i = 0; i != n; i++)
//		d[i] = INF;
//
//	//�������
//	d[star] = 0;
//	//�涨���ĸ�ĸҲ���Լ�
//	par[star] = star;
//
//	//ѭ��n��
//	for (j = 0; j != n; j++) {
//		//ѡ��dֵ��С�ĵ���Ϊ���x��d[x]�Ѿ�ȷ���ˣ�
//		min = INF;
//		for (i = 0; i != n; i++) {
//			if (done[i] == false && d[i] < min) {
//				min = d[i];
//				x = i;
//			}
//		}
//		//x��d[i]�Ѿ�ȷ����
//		done[x] = 1;
//		//������x�ı�(x, y)
//		for (y = 0; y != n; y++) {
//			if (w[x][y] != 0 && d[y] > d[x] + w[x][y]) {
//				d[y] = d[x] + w[x][y];
//				par[y] = x;
//			}
//		}
//	} //ѭ��n��
//}
//
////star:��Դ���
////i:��ǰ���
//void printPath(int star, int i) {
//	//��������
//	if (star == i) {
//		cout << i << " ";
//		return;
//	}
//	printPath(star, par[i]);
//	cout << i << " ";
//}
//
//int main() {
//	int n, star, end;
//	cout << "���������n:" << endl;
//	cin >> n;
//	cout << "���������[0, n-1]:" << endl;
//	cin >> star;
//	cout << "�������ͼ���ڽӾ���:" << endl;
//	createGraph(n);
//	dijkstra(star, n);
//
//	cout << "���δ�ӡn������丸ĸ���:" << endl;
//	for (int i = 0; i != n; i++) {
//		cout << par[i] << " ";
//	}
//	cout << endl;
//	cout << "���δ�ӡ�����" << star << "��n��������̾���:" << endl;
//	for (int i = 0; i != n; i++) {
//		cout << d[i] << " ";
//	}
//	cout << endl;
//	cout << "����������[0, n-1]���Դ�ӡ�����·�������Ľ��:" << endl;
//	cin >> end; //0 ~ n-1
//	printPath(star, end);
//	cout << endl;
//	return 0;
//}
