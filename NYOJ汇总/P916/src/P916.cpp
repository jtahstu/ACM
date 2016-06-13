/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=916
 * by jtahstu on 2015/2/15 1:00
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[101] = { 0 }, b[101] = { 0 }, n;
	while (cin >> n) {
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		sort(a, a + n);
		sort(b, b + n);
//		for (int i = 0; i < 2 * n; i++)
//			if (i % 2 == 0)
//				cout << a[n - i / 2 - 1] << " ";
//			else
//				cout << b[n - i / 2 - 1] << " ";
//		cout << endl;
//貌似这样写更方便理解，用上面的代码AC的，感觉脑袋绣逗了
		for (int i = n - 1; i >= 0; i--){
			cout << a[i] << " ";
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
