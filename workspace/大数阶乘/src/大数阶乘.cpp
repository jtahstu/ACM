/*
 * 大数阶乘C语言版
 * by jtahstu on 2015/3/5 19:00
 */
#include<iostream>
#include<cstdio>
#include<cstring>
const int maxn=3000;//改变maxn的值，3000位能存下1000以内的阶乘
int f[maxn];
int main() {
	int i, j, n;
	scanf("%d", &n);
	memset(f, 0, sizeof(f));
	f[0] = 1;
	for (i = 2; i <= n; i++) {
		int c = 0;
		for (j = 0; j < maxn; j++) {
			int s = f[j] * i + c;
			f[j] = s % 10;
			c = s / 10;
		}
	}
	for (j = maxn - 1; j >= 0; j--)
		if (f[j])
			break;
	for (i = j; i >= 0; i--)
		printf("%d", f[i]);
	printf("\n");
	return 0;
}
