#include<stdio.h>
int erfen(int n,int p)
{
    int a=n;
    int b=p;
    int result=1;
    while(b != 0)
    {
        if(b % 2 == 1)
        {
            result=(result * a)%10003;  //乘一个a,也就是i
        }
        a =(a*a)%10003; //平方
        b /= 2;  //把这个数截一半
    }
    return result;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,p;
        int sum=0;
        scanf("%d %d",&n,&p);
        int i=1;
        for(i=1; i<=n; i++)
            sum=(sum+erfen(i,p))%10003;
        printf("%d\n",sum);
    }
    return 0;
}
//#include<stdio.h>//暴力不行
//int main()
//{
//    int m;
//    scanf("%d",&m);
//    while(m--)
//    {
//        int n,p,i;
//        scanf("%d%d",&n,&p);
//        int count=1,sum=0;
//        int temp=n;
//        for(i=count;i<=temp;i++)
//            {
//                for(i=1;i<=p-1;i++)
//                    temp=temp*temp%10003;
//                count++;
//                sum=(sum+temp)%10003;
//            }
//            printf("%d\n",sum);
//    }
//    return 0;
//}

//#include <stdio.h> //aoj超时,nyoj没问题
//int main()
//{
//    int a[1005][1005];
//    int i,j,k,l,m,n;
//    for(i=0; i<1001; i++)
//        a[0][i]=1;
//    for(i=1; i<1001; i++)
//        for(j=1; j<1001; j++)
//            a[i][j]=a[i-1][j]*j%10003;
//    scanf("%d",&l);
//    while(l--)
//    {
//        scanf("%d%d",&m,&n);
//        for(i=1,k=0; i<=m; i++)k=k+a[n][i];
//        printf("%d\n",k%10003);
//    }
//}
