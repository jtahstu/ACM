/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=872
 * by jtahstu on 2015/2/21 21:00
 */

#include <iostream>
using namespace std;
long long jt(int n, int m) {
	long long sum1=1,sum2=1;
	for(int i=n;i>n-m;i--)
		sum1*=i;
	for(int i=1;i<=m;i++)
		sum2*=i;
	return sum1/sum2;
}
int main() {
	int n, m, a[11]={0}, s;
	while (cin >> n >> s) {
		m = n;
		for (int i = 0; i < s; i++)
			cin >> a[i];
		cout<<jt(n,a[0])<<" ";
		for (int i = 1; i < s; i++) {
			m=m-a[i-1];
			cout << jt(m, a[i]) << " ";
		}
		cout<<endl;
	}
	return 0;
}
