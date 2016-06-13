#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int k,k1,k2,k3,i;
    while(scanf("%s",&a)!=EOF)
    {
        if(a[0]=='E')return 0;
        else
        {
            k=-1+strlen(a);
            k1=k2=k3=0;
            for(i=0; i<=k; i++)
            {
                if(a[i]=='A')k1++;
                if(a[i]=='O')k2++;
                if(a[i]=='J')k3++;
            }
            if(k1>=k2&&k2>=k3)
            {
                for(i=1; i<=k3; i++)printf("AOJ");
                for(i=1; i<=k2-k3; i++)printf("AO");
                for(i=1; i<=k1-k2; i++)printf("A");
                printf("\n");
                continue;
            }
            if(k1>=k3&&k3>=k2)
            {
                for(i=1; i<=k2; i++)printf("AOJ");
                for(i=1; i<=k3-k2; i++)printf("AJ");
                for(i=1; i<=k1-k3; i++)printf("A");
                printf("\n");
                continue;
            }
            if(k2>=k1&&k1>=k3)
            {
                for(i=1; i<=k3; i++)printf("AOJ");
                for(i=1; i<=k1-k3; i++)printf("AO");
                for(i=1; i<=k2-k1; i++)printf("O");
                printf("\n");
                continue;
            }
            if(k2>=k3&&k3>=k1)
            {
                for(i=1; i<=k1; i++)printf("AOJ");
                for(i=1; i<=k3-k1; i++)printf("OJ");
                for(i=1; i<=k2-k3; i++)printf("O");
                printf("\n");
                continue;
            }
            if(k3>=k1&&k1>=k2)
            {
                for(i=1; i<=k2; i++)printf("AOJ");
                for(i=1; i<=k1-k2; i++)printf("AJ");
                for(i=1; i<=k3-k1; i++)printf("J");
                printf("\n");
                continue;
            }
            if(k3>=k2&&k2>=k1)
            {
                for(i=1; i<=k1; i++)printf("AOJ");
                for(i=1; i<=k2-k1; i++)printf("OJ");
                for(i=1; i<=k3-k2; i++)printf("J");
                printf("\n");
                continue;
            }
        }
    }
    return 0;
}
