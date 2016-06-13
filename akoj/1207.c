#include<stdio.h>
int main()
{
    int k,m,n;
    int s1,s2,i,j;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d%d",&m,&n);
        s1=0;
        s2=0;
        for(i=1; i<m; i++)
        {
            if(m%i==0)
                s1+=i;
        }
        for(j=1; j<n; j++)
        {
            if(n%j==0)
                s2+=j;
        }
        if((s1==n)&&(s2==m))
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
/*亲和数

Time Limit:1000MS  Memory Limit:65536K
Total Submit:28 Accepted:9

Description

如果a的因子和等于b，b的因子和等于a，且a≠b，则称a，b为亲密数对。
比如220的所有真约数(即不是自身的约数)之和为:
1+2+4+5+10+11+20+22+44+55+110＝284。
284的所有真约数和为:
1+2+4+71+142=220。
你的任务就编写一个程序，判断给定的两个数是否是亲和数

Input

输入数据第一行包含一个数M，接下有M行，每行一个实例,包含两个整数A,B； 其中 0≤A，B≤99999。

Output

对于每个测试实例，如果A和B是亲和数的话输出YES，否则输出NO。

Sample Input


2
100 200
220 284
Sample Output


NO
YES
Source*/

/*#include "stdio.h"
int main()
{
    int n,x,y,i;
    int a[26]={220,284,1184,1210,2620,2924,5020,5564,6232,6368,10744,10856,12285,14595,17296,18416,63020,76084,66928,66992,67095,71145,69615,87633,79750,88730};
    scanf("%d",&n);
    while(n--)
    {
        int b=0;
        scanf("%d%d",&x,&y);
        for(i=0;i<26;i++)
        {
            if(x==a[i]&&y==a[i+1])
            b=1;
        }
        if (b==1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}*/
