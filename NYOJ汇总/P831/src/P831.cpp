/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=831
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=874
 * by jtahstu on 2015/2/16 1:00
 */

#include <iostream>
#include <cstdio>
using namespace std;

//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		int sum = 0, a;
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a);
//			sum += a;
//		}
//		printf("%d\n", sum + n + 5 * (n / 5));
//	}
//	return 0;
//}
int main() {
	int m, n;
	while (scanf("%d%d", &m, &n) == 2) {
		printf("%d\n", m + n + ((n - 1) / 4) * 5);
	}
	return 0;
}
