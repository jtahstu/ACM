#include <stdio.h>
int main()
{
	int n,i;
	int a[50];
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
	a[1]=1;
	a[2]=2;
	for(i=3;i<=n;i++)
		a[i]=a[i-1]+a[i-2];
	printf("%d\n",a[n]);
	}
	return 0;
}
