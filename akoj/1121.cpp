/*分数化小数

Time Limit:1000MS  Memory Limit:65536K
Total Submit:83 Accepted:29

Description

输入正整数a,b,c 0 < a, b < 10^6,c< 100输出a/b的小数形式，精确到小数点后的c位,例如a=1 b=6 c=4输出应该是0.1667

Input

输入正整数a,b,c

Output

输出a/b的小数形式，精确到小数点后的c位,例如a=1 b=6 c=4输出应该是0.1667

Sample Input

1 6 4
1 2 20
Sample Output

0.1667
0.50000000000000000000*/

#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
main()
{
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        double s;
        s=a/b;
        cout<<setprecision(c)<<s<<endl;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int B[1000],a,b,c,i;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        printf("%d.",a/b);
        a%=b;
        for(i=0; i<=c; i++)
        {
            B[i]=a*10/b;
            a=(a*10%b);

        }
        int sc=0;
        if(B[c]>=5)
            sc=1;
        for(i=c-1; i>=0; i--)
        {

            B[i]=(B[i]+sc)%10;
            sc=B[i]/10;
            if(sc==0)break;
        }
        for( i=0; i<c; i++)
            printf("%d",B[i]);
        printf("\n");
    }
    return 0;
}


