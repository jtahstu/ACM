//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int N,i;
//    double k;
//    while(scanf("%d",&N)==1)
//    {
//    	k=1;
//    	for(i=1;i<=N;i++)
//    	k+=log10(i*1.0);
//    	printf("%d\n",(int)k);
//	}
//    return 0;
//}
// 当N比较大时，再用上面这种方法就有点笨拙了,but这个代码确实AC了
//斯特林公式N!=sqrt(2*PI*N)*(N/e)^N
//N！的长度len=log10(sqrt(2*PI*N)*(N/e)^N)+1 =0.5*log10(2.0*PI*N)+N*log10(N/e)+1
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <iostream>
using namespace std ;
#define PI 3.1415926
#define e  2.718281828459
int main() {
   __int64 len,n,ncase ;
    scanf ("%I64d" ,&ncase ) ;
    while ( ncase -- ) {
        scanf ( "%I64d", &n ) ;
        if(n == 1) {
            printf("1\n") ;
            continue ;
        }
        //斯特林公式n!=sqrt(2*PI*n)*(n/e)^n
        len = 0.5*log10(2.0*PI*n)+n*log10(n*1.0/e)+1;
        printf("%I64d\n",len) ;
    }
}
    // my code
/*
#include "stdio.h"
int main()
{
	int N,i;
	while(scanf("%d",&N)==1)
	{
		int len=1;
		double ji;
		for (i = 1; i <= N; i++)
		{
			ji*=i;
			if(ji>10)
			{
				len++;
				ji=ji/10;
			}
		}
		printf("%d\n",len);
	}
	return 0;
}*/
