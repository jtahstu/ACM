/**
 * Project Name: akoj
 * File Name: 1048.cpp
 * Created on: 2016年5月20日 上午2:11:32
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
#define M 600001
int f[M];
int main() {
	int i, j, a, b;
	for (i = 1; i < M; i++)
		for (j = i + i; j < M; j += i)
			f[j] += i;
	scanf("%d", &i);
	while (i--) {
		scanf("%d%d", &a, &b);
		if (f[a] == b && f[b] == a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

