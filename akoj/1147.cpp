/*小周的烦恼

Time Limit:1000MS  Memory Limit:65536K
Total Submit:91 Accepted:53

Description

4231 删去某位后可变成 423,421,431,231 其中最大的一个数为431。
小周想找到某个数删去某位后最大的一个数。请您帮帮他吧。

Input

输入第一行有一个整数N表示有N组测试数据。
接下来有N行，且每行都有一个整数m（0 < m < 2^30）。

Output

输出每行m删去某位后最大的一个数。

Sample Input


2
123
4231
Sample Output


23
431*//*
#include<stdio.h>
#include<math.h>
int N,m,A[10],n,max,s,j,i,z;
main()
{
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d",&m);
		n=(int)(log10(m)+1);
		max=m/10;
		for(i=n-1;i>=0;i--)
		{
			A[i]=m%10;
			m/=10;
		}
		for(i=0;i<n;i++)
		{
			s=0;
			for(j=0;j<n;j++)
			{
				if(j==i)
					continue;
				s=s*10+A[j];
			}
			if(max<s)max=s;
		}
		printf("%d\n",max);
	}
}
*/
#include "iostream"
#include <cmath>
using namespace std;
int main()
{
    int n,len,m,a[10],i,j,s;
    cin>>n;
    while(n--)
    {
        int max;
        cin>>m;
        len=(int)(log10(m)+1);
        max=m/10;
        for(i=len-1; i>=0; i--)
        {
            a[i]=m%10;
            m/=10;
        }
        for(i=0; i<len; i++)
        {
            s=0;
            for(j=0; j<len; j++)
            {
                if(i==j)continue;
                s=s*10+a[j];
            }
            if(s>max) max=s;
        }
        cout<<max<<endl;
    }
    return 0;
}
