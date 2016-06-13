/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=836
 * by jtahstu on 2015/2/16 1:00
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, m;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &m);
		for (int i = m; i > 0; i--) {
			for (int j = i; j > 0; j--)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}
