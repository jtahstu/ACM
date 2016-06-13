#include <stdio.h>
#include <stdlib.h>
#define MAXN 100002
int arr[MAXN];

int cmp(const void *x,const void *y)
{
	return *(int *)y-*(int *)x;
}

int main()
{
	int n,m,i;
	while(scanf("%d %d",&n,&m)&&n)
	{
		for(i=0;i<n;++i)
			scanf("%d",&arr[i]);
		qsort(arr,n,sizeof(arr[0]),cmp);
		if(m>=n)
		{
			printf("%d",arr[0]);
			for(i=1;i<n;++i)
				printf(" %d",arr[i]);
			printf("\n");
		}
		else
		{
			printf("%d",arr[0]);
			for(i=1;i<m;++i)
				printf(" %d",arr[i]);
			printf("\n");
		}
	}
	return 0;
}
