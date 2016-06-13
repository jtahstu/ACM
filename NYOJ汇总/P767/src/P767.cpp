/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=767
 * by jtahstu on 2015/2/16 1:00
 * 这个枚举竟然可以过，下面那个算法看不懂，懒得去推了，估计是什么定理吧
 */

#include <iostream>
#include <cstdio>
using namespace std;
bool judge(int n) {
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
int jt(int n) {
	int sum = 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) {
			if (i != n / i)
				sum += i + n / i;
			else
				sum += i;
		}
	return sum + 1 + n;
}
int main() {
	int n, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (judge(n))
			printf("Yes\n");
		else
			printf("No %d\n", jt(n));
	}
	return 0;
}
//#include<stdio.h>
//int main() {
//	int t, i, s, n;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d", &n);
//		s = 0;
//		for (i = 1; i * i <= n; i++)
//			if (n % i == 0)
//				s = i * i == n ? s + i : s + i + n / i;
//		if (s > (n + 1))
//			printf("No %d\n", s);
//		else
//			printf("Yes\n");
//	}
//	return 0;
//}
