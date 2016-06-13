#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
	int t,a,b,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		a/=b;
		for(i=2;;i++)
		{
			if(gcd(a,i)==1)
			{
			    printf("%d\n",i*b);break;
			}
		}
	}
    return 0;
}
