#include<stdio.h>
#include<stdlib.h>

#define N 100000

int main ( void )
{
	int i , j;
	int prime[N + 1];

	for ( i = 2; i <= N; i++ )
		prime[i] = 1;
	for ( i = 2; i*i<N; i++ )// 只能被1和自己整除的数才是质数，只要判断到此数的平方根即可
	{
		if ( prime[i] == 1 )
		{
			for ( j = 2 * i; j <= N; j++ )//对上述范围内的每一个数字，找出其倍数，并将相应的数组项 =0，表示不是质数
			{
				if ( j%i == 0 )
					prime[j] = 0;
			}
		}
	}
	int a , b , cnt = 0;
	while ( ~scanf ( "%d%d" , &a , &b ) )
	{
		printf ( "Case %%%d:" , ++cnt );
		int count = 0;
		for ( int i = a; i <= b; i++ )
		if ( prime[ i ]==1 )
			count++;
		printf ( "%d\n" , count );
	}
	printf ( "\n" );
	return 0;
}

//#include<stdio.h>
//#include<memory.h>//对内存进行操作的头文件
//#define max 1000005
//int num[max];
//int main()
//{
//	int n;
//	int count=0;
//	memset(num,0,sizeof(num));
//	for(int i=2;i<max;i++)//筛选素数打表法
//	{
//		if(num[i]==0)
//		{
//			count++;
//			for(int j=i;j<max;j+=i)
//			num[j]=count;
//		}
//	}
//	while(~scanf("%d",&n))
//	{
//		printf("%d\n",num[n]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#define max 1001000
//int a[max],prime[max];
//int main()
//{
//	int n,i,j,count=0;
//	memset(a,0,sizeof(a));
//	memset(prime,0,sizeof(prime));
//	for(i=2;i<max;i++)
//	{
//		if(prime[i]==0)//判断是否是素数，是素数为 0 否则为 非零的数
//		{
//			count++;//标记变量
//			a[i]=count;
//			for(j=i;j<max;j+=i)
//			{
//				prime[j]=i;//对所有的 非素数进行 前期的 遍历，减少运算量
//			}
//		}
//	}
//	while(~scanf("%d",&n))
//	{
//		if(n==1)
//		{
//			printf("0\n");
//			continue;
//		}
//		int k=prime[n];
//		printf("%d\n",a[k]);
//	}
//	return 0;
//}
