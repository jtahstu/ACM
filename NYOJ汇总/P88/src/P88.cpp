/**
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=88
 * by jtahstu on 2015/3/11 19:00
 * f(n)=2^n-1
 */

#include <iostream>
using namespace std;
long long jt(long long a) {
	int max = 1000000;
	if (a == 1)
		return 2;
	long long t = jt(a / 2);
	if (a % 2 == 0)//¶þ·Ö
		return ((t % max) * (t % max)) % max;
	else
		return (2 * (t % max) * (t % max)) % max;
}
int main() {
	long long n, a;
	cin >> n;
	while (n--) {
		cin >> a;
		cout << jt(a) - 1 << endl;
	}
	return 0;
}
