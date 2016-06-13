#include<stdio.h>
int C(int m,int n)
{
    int mt,nt;
    mt=m;nt=n;
    int r=(m%n);
    while(r!=0)
    {
       m=n;
       n=r;
       r=m%n;
    }
    return (mt*nt/n);
}

int main()
{
    int a1,b1,a2,b2;
    int i,m,n,mt,nt,r,s;
    while(scanf("%d%d%d%d",&a1,&b1,&a2,&b2)==4)
        {
            i=0;
            s=C(a1,a2);
            for(i=1; i<=s; i++)
            {
                if(i%a1==b1&&i%a2==b2)
                    printf("%d\n",i);
            }
        }
}
