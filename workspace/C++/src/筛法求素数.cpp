/*
 * by jtahstu on 2015/2/15 20:00
 * É¸·¨ÇóËØÊý
 */
//#include <iostream>
//using namespace std;
//#include <cstdio>
//#include <ctime>
//#define N 10000001

//int prime[N];
//int main() {
//	double totaltime;
//	clock_t start, finish;
//	start = clock();
//	int pivot = 0;
//	prime[pivot++] = 2;
//	for (int i = 3; i <= N; i += 2) {
//		bool flag = true;
//		for (int j = 0; prime[j] * prime[j] <= i; j++)
//			if (!(i % prime[j])) {
//				flag = false;
//				break;
//			}
//		if (flag)
//			prime[pivot++] = i;
//	}
//	finish = clock();
//	totaltime = (double) (finish - start) / CLOCKS_PER_SEC;
//	printf("Runtime is: %lf s\n", totaltime);
//	int count = 0;
//	for (int i = 2; i < N; i++) {
//		if (prime[i]) {
//			//printf("%d ", i);
//			count++;
//		}
//	}
//	cout << endl;
//	cout << count;
//}
//bool prime[N];
//int main000() {
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
//	totaltime = (double) (finish - start) / CLOCKS_PER_SEC;
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

