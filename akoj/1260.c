#include "stdio.h"
int main()
{
	int a,b,c,delta;
	while(scanf("%d%d%d",&a,&b,&c)==3)
	{
		delta=b*b-4*a*c;
		if(a==0)
		{
			if (a=b=c==0)printf("Abnormal\n");
			else printf("1\n");
		}
		else
		{
			if (delta==0)printf("1\n");
			else if (delta<0)printf("0\n");
			else printf("2\n");
		}
	}
	return 0;
}
// 1133 1256 1257 1260 1262 1881130233
//  1028   1036   1046 1049   14205221
