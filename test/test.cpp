#include<stdio.h>
bool judge(int n)
{
    if(n==1)return true;
    else{
        for(int i=2;i*i<=n;i++)
            if(n%i==0)
            return false;
        return true;
    }
}

int main()
{
    int a,b,cnt=0;
    while(~scanf("%d%d",&a,&b))
    {
        printf("Case %%%d:",++cnt);
        int count=0;
        for(int i=a; i<=b; i++)
            if(judge(i))
                count++;
        printf("%d\n",count);
    }
}

