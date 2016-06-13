/*
 * 44.cpp
 * Created on: 2015年4月5日
 * Author: jtahstu
 */
//44 拉丁方
//构造 NXN 阶的拉丁方阵(2<=N<=9)，使方阵中的每一行和每一列中数字1到N只出现一次。如N=4时：
//1 2 3 4
//2 3 4 1
//3 4 1 2
//4 1 2 3
//
//*运行结果
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
	for (int i = 1; i <= n; i++) {//第一个数为1-n
		a[1][1] = i;
		for (int p = 2; p <= n; p++){//先把第一行推出来
			if (a[1][p - 1] == n)
				a[1][p] = 1;
			else
				a[1][p] = a[1][p - 1]+1;}
		for (int j = 2; j <= n; j++)//后面的数根据前一行对应的数推，如果到n，则再从1开始
			for (int k = 1; k <= n; k++) {
				if (a[j-1][k] == n)
					a[j][k] = 1;
				else
					a[j][k] = a[j-1][k]+1;
			}
		for (int k = 1; k <= n; k++) {//打印这个矩阵
			for (int j = 1; j <= n; j++)
				cout << a[k][j] << " ";
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

