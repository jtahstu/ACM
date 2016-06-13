/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1215
 * by jtahstu on 2015/2/5 22:00 last modified on 2015/2/7 15:00
 * POJ 2739 AOJ366 AKOJ1215
 */

#include <iostream>
using namespace std;
bool jt(int i) {
	for (int j = 2; j * j <= i; j++)
		if (i % j == 0)
			return false;
	return true;
}

int main() {
	int n, a[9592 + 10], count = 0;
	for (int i = 2; i <= 100000; i++)
		if (jt(i))a[count++] = i;
	while (cin >> n) {
		if (n == 0)
			break;
		int sum, ahstu = 0;
		for (int i = 0; i <= count; i++) {
			sum = 0;
			if (a[i] > n)break;
			for (int j = i; j <= count; j++) {
				sum += a[j];
				if (sum == n)
				{ahstu++;break;}
				if (sum > n)break;
			}
		}
		cout << ahstu << endl;
	}
	return 0;
}
