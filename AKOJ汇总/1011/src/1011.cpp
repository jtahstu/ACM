/*
 * http://183.167.205.82:8081/JudgeOnline/showproblem?problem_id=1011
 * by jtahstu on 2015/2/9 12:00
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[100001] = { 0 }, x, y, count = 1;
	while (cin >> x >> y) {
		if (x == 0 && y == 0)
			break;
		for (int i = 0; i < y; i++)
			a[count++] = x;
	}
	for (int i = 1; i <= n * n; i++) {
		cout << a[i] << " ";
		if (i % n == 0)
			cout << endl;
	}
	return 0;
}
