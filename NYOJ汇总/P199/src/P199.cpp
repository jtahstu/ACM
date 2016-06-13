/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=199
 * by jtahstu on 2015/2/11 16:00
 */
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int r, d, l, n;
	cin >> n;
	while (n--) {
		cin >> l >> d >> r;
		if (4 * r * r - d * d < 1) {
			cout << "impossible" << endl;
		} else {
			double a = sqrt((2 * r) * (2 * r) * 1.0 - (d * d));
			cout<<ceil(l/a)<<endl;
			if ((int) (l / a) == l / a)
				cout << (int) (l / a) << endl;
			else
				cout << (int) (l / a) + 1 << endl;
		}
	}
	return 0;
}

//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main() {
//	int t, l, d, r, s;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d%d%d", &l, &d, &r);
//		if (d >= 2 * r)
//			printf("impossible\n");
//		else {
//			double a, t;
//			a = sqrt((2 * r) * (2 * r) - (d * d));
//			t = l / a;
//			s = int(t);
//			if (t == s)
//				printf("%d\n", s);
//			else if (t > s)
//				printf("%d\n", s + 1);
//		}
//	}
//	return 0;
//}
