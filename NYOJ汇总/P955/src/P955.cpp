/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=955
 * by jtahstu on 2015/2/15 0:00
 */

#include <iostream>
#include <cstdio>
using namespace std;
typedef long long in;

int main() {
	in n,m;
	scanf("%lld",&m);
	while(m--)
	{
		in a,count,sum=0;
		scanf("%lld",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			count=(i+1)*(n-i);//fuck,之前这里int的count，然后又WA了
			//一气都long long 了
			sum+=a*count;
			//if(i!=0&&i!=(n-1))sum1+=a;
		}
			//printf("%lld\n",n*sum+(n-2)*sum1);开始想错了，以为是这样
		printf("%lld\n",sum);
	}
	return 0;
}
