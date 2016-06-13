/*
 * 44.cpp
 * Created on: 2015��4��5��
 * Author: jtahstu
 */
//44 ������
//���� NXN �׵���������(2<=N<=9)��ʹ�����е�ÿһ�к�ÿһ��������1��Nֻ����һ�Ρ���N=4ʱ��
//1 2 3 4
//2 3 4 1
//3 4 1 2
//4 1 2 3
//
//*���н��
//The possble Latin Squares of order 6 are:
//1 2 3 4 5 6 	2 3 4 5 6 1 	3 4 5 6 1 2
//2 3 4 5 6 1 	3 4 5 6 1 2 	4 5 6 1 2 3
//3 4 5 6 1 2 	4 5 6 1 2 3 	5 6 1 2 3 4
//4 5 6 1 2 3 	5 6 1 2 3 4 	6 1 2 3 4 5
//5 6 1 2 3 4 	6 1 2 3 4 5 	1 2 3 4 5 6
//6 1 2 3 4 5 	1 2 3 4 5 6 	2 3 4 5 6 1
//
//4 5 6 1 2 3 	5 6 1 2 3 4 	6 1 2 3 4 5
//5 6 1 2 3 4 	6 1 2 3 4 5 	1 2 3 4 5 6
//6 1 2 3 4 5 	1 2 3 4 5 6 	2 3 4 5 6 1
//1 2 3 4 5 6 	2 3 4 5 6 1 	3 4 5 6 1 2
//2 3 4 5 6 1 	3 4 5 6 1 2 	4 5 6 1 2 3
//3 4 5 6 1 2 	4 5 6 1 2 3 	5 6 1 2 3 4
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main44() {
	int a[10][10];
	memset(a,0,sizeof(a));
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {//��һ����Ϊ1-n
		a[1][1] = i;
		for (int p = 2; p <= n; p++){//�Ȱѵ�һ���Ƴ���
			if (a[1][p - 1] == n)
				a[1][p] = 1;
			else
				a[1][p] = a[1][p - 1]+1;}
		for (int j = 2; j <= n; j++)//�����������ǰһ�ж�Ӧ�����ƣ������n�����ٴ�1��ʼ
			for (int k = 1; k <= n; k++) {
				if (a[j-1][k] == n)
					a[j][k] = 1;
				else
					a[j][k] = a[j-1][k]+1;
			}
		for (int k = 1; k <= n; k++) {//��ӡ�������
			for (int j = 1; j <= n; j++)
				cout << a[k][j] << " ";
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

