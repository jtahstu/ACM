#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,a,n,m,sum=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&m);
            for(k=2; k<=sqrt(m); k++)
            {
                if(m%k==0)break;
            }
            if(k>sqrt(m)&&m!=1)
                sum=sum+m;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
