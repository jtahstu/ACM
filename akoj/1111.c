 #include<stdio.h>
int main()
{
    int i=1,n,s=1,sum=0;
        scanf("%d",&n);
        while(i<=n){
                s*=i;
                s%=1000000;
                sum+=s;
                i++;
        }
        sum%=1000000;
        printf("%d\n",sum);
        return 0;
}
