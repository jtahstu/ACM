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
			count=(i+1)*(n-i);//fuck,֮ǰ����int��count��Ȼ����WA��
			//һ����long long ��
			sum+=a*count;
			//if(i!=0&&i!=(n-1))sum1+=a;
		}
			//printf("%lld\n",n*sum+(n-2)*sum1);��ʼ����ˣ���Ϊ������
		printf("%lld\n",sum);
	}
	return 0;
}
