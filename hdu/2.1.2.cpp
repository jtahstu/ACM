#include<iostream>
using namespace std;
int prime(int a)
{
    int flag=1;
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)flag=0;
        break;
    }
   if(flag) return 1;
   else return 0;
}
int main()
{
    int n,count=0;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if(prime(a))count++;
    }
    cout<<count<<endl;
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,flag,p,i,j,sum;
    while(scanf("%d",&t)!=EOF)
    {
    	sum=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&n);
            flag=1;
            for(j=2;j<=sqrt(n);j++)
            {
                if(n%j==0)
                {
                	flag=0;
                	break;
                }
            }
            if(flag)sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
