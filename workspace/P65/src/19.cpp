/*
 * 19.cpp
 * Created on: 2015年4月2日
 * Author: jtahstu
 */
//19求素数
//求素数表中1~1000之间的所有素数。
//
//*运行结果
//   2   3   5   7  11  13  17  19  23  29  31  37  41  43  47
//  53  59  61  67  71  73  79  83  89  97 101 103 107 109 113
// 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197
// 199 211 223 227 229 233 239 241 251 257 263 269 271 277 281
// 283 293 307 311 313 317 331 337 347 349 353 359 367 373 379
// 383 389 397 401 409 419 421 431 433 439 443 449 457 461 463
// 467 479 487 491 499 503 509 521 523 541 547 557 563 569 571
// 577 587 593 599 601 607 613 617 619 631 641 643 647 653 659
// 661 673 677 683 691 701 709 719 727 733 739 743 751 757 761
// 769 773 787 797 809 811 821 823 827 829 839 853 857 859 863
// 877 881 883 887 907 911 919 929 937 941 947 953 967 971 977
// 983 991 997
#include<iostream>
#include<cstdio>
using namespace std;
bool jt19(int n) { //普通简单的方法求素数
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
		else
			continue;
	return true;
}
int main19() {
	int count = 1, a[200] = { 0 };
	for (int i = 2; i < 1000; i++)
		if (jt19(i))
			a[count++] = i;
	for (int i = 1; i < count; i++) {
		printf("%4d ", a[i]);
		if (i % 15 == 0)
			cout << endl;
	}
	cout << endl;
	return 0;
}
///*
// * by jtahstu on 2015/2/15 20:00
// * 筛法求素数
// */
//#include <iostream>
//using namespace std;
//#include <cstdio>
//#include <ctime>
//#define N 10000001
//bool prime[N];
//int main() {
//	int i, j;
//	double totaltime;
//	clock_t start, finish;
//	start = clock();
//	for (i = 2; i < N; i++)
//		i % 2 == 0 ? prime[i] = false : prime[i] = true;
//	for (i = 3; i * i <= N; i += 2) {
//		if (prime[i])
//			for (j = i + i; j < N; j += i)
//				prime[j] = false;
//	}
//	finish = clock();
//	//totaltime = (double) (finish - start) / CLOCKS_PER_SEC;
//	printf("Runtime is: %lf s\n", totaltime);
//	int count = 0;
//	for (i = 2; i < N; i++) {
//		if (prime[i]) {
//			//printf("%d ", i);
//			count++;
//		}
//	}
//	cout << endl;
//	cout << count;
//
//	return 0;
//}
