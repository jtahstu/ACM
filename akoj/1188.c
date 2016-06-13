#include <stdio.h>
int main()
{
        int N,n[10001],t,i,j;
        while(scanf("%d",&N)&&N!=0)
        {
            for(i=0;i<N;i++)
                scanf("%d",&n[i]);
            for(j=0;j<N-1;j++)
                for(i=0;i<N-1-j;i++)
                    if(n[i]>n[i+1])
                    {
                        t=n[i];
                        n[i]=n[i+1];
                        n[i+1]=t;
                    }
            if(N%2!=0)
                printf("%d\n",n[N/2]);
            else
                printf("%d\n",(n[N/2]+n[N/2-1])/2);
        }
        return 0;
}
