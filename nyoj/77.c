/*开灯问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述

    有n盏灯，编号为1~n，第1个人把所有灯打开，第2个人按下所有编号为2 的倍数的开关（这些灯将被关掉），第3 个人按下所有编号为3的倍数的开关（其中关掉的灯将被打开，开着的灯将被关闭），依此类推。一共有k个人，问最后有哪些灯开着？输入：n和k，输出开着的灯编号。k≤n≤1000

输入
    输入一组数据：n和k
输出
    输出开着的灯编号
样例输入

    7 3

样例输出

    1 5 6 7
*/
#include<stdio.h>
int main( )
{
    int n, k, j, open,i;
    scanf("%d%d", &n, &k );
    for(i = 1 ; i <= n ; i++ )
    {
        open = 1;
        for( j = 2 ; j <= k ; j++ )
        {
            if( i % j == 0 )
                open = (open+1) % 2;
        }
        if( open )
            printf("%d ", i );

    }
     puts("\n");
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int n,k,a[1000],i;
    cin>>n>>k;
    for(i=0;i<n;i++)
        a[i]=1;
    for(i=2;i<=k;i++)
        for(int j=0;j<n;j++)
        {
            if((j+1)%i==0)
            if(a[j]==0)a[j]=1;
            else a[j]=0;
        }
        for(i=0;i<n;i++)
            if(a[i]==1)cout<<i+1<<" ";
            cout<<endl;
    return 0;
}      //  最优代码
