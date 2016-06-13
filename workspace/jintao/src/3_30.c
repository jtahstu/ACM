/*
 * 3_30.c
 *
 *  Created on: 2015Äê3ÔÂ30ÈÕ
 *      Author: Administrator
 */
#include <stdio.h>
#include <stdlib.h>
int main330() {
	int i, n;
	long int a[10000] = { 0 };
	n = 0;
	while (scanf("%ld", &a[n]) != EOF) {
		for (i = 0; i < n; i++) {
			if (a[n] == a[i]) {
				n--;
				break;
			}
		}
		n++;
	}
	printf("%ld", a[0]);
	int k;
	for (k = 1; k < n; k++) {
		printf(" %ld", a[k]);
	}

	printf("\n");
	return 0;
}

