/**
 * Project Name: 51NOD
 * File Name: 1305.cpp
 * Created on: 2016��5��15�� ����9:12:05
 * Author: jtahstu
 * Email: root@jtahstu.com
 * Copyright (c) 2016, www.jtahstu.com , All Rights Reserved.
 */
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<set>
using namespace std;

int main(int argc, const char * argv[]) {
	int N;
	int i, j = 0;
	long long A[100001];
	long long sum = 0;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%lld", A + i);
		if (A[i] == 2)  //2��������
				{
			j++;
		} else if (A[i] == 1) //���￼�ǵ�1�ͷ�1���ʱ���Ϊ1��1��1���ʱ���Ϊ2��
				{                   //��1��1����ϻᱻ�������Σ�������ǰ�߹鲢��һ����
			sum += N - 1;
		}
	}

	printf("%lld\n", sum + j * (j - 1) / 2);    //��Ϊ2��2��ϻᱻ��������
	return 0;
}
//const int N = 100005;
//int a[N];
//double da[N];
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//		da[i] = 1.0 / a[i];
//	}
//	long long sum = 0;
//	for (int i = 0; i < n; i++)
//		for (int j = i + 1; j < n; j++)
//			sum += floor(da[i] + da[j]);
//	cout << sum << endl;
//	return 0;
//}

