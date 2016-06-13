//============================================================================
// Name        : 大数加法.cpp
// Author      : jtahstu
// Time	       : 2015/2/4 23:30
//============================================================================

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void Add(char *c, char *d) {
	int i, a[1001], b[1001];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	int k1 = strlen(c);
	int k2 = strlen(d);
	int k = (k1 > k2) ? k1 : k2;
	for (i = k; k1 > 0; i--, k1--)
		a[i] = c[k1 - 1] - 48;
	for (i = k; k2 > 0; i--, k2--)
		b[i] = d[k2 - 1] - 48;
	for (i = k; i >= 1; i--) {
		a[i] += b[i];
		if (a[i] > 9) {
			a[i] %= 10;
			a[i - 1]++;
		}
	}
	for (i = (a[0] == 0 ? 1 : 0); i <= k; i++)
		printf("%d", a[i]);
	printf("\n");
}

int main() {
	char c[1001], d[1001];
	scanf("%s%s", c, d);
	Add(c,d);
	return 0;
}
