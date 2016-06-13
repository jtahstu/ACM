#include<stdio.h>
#include<stdlib.h>

#define N 100000

int main ( void )
{
	int i , j;
	int prime[N + 1];

	for ( i = 2; i <= N; i++ )
		prime[i] = 1;
	for ( i = 2; i*i<N; i++ )// ֻ�ܱ�1���Լ�������������������ֻҪ�жϵ�������ƽ��������
	{
		if ( prime[i] == 1 )
		{
			for ( j = 2 * i; j <= N; j++ )//��������Χ�ڵ�ÿһ�����֣��ҳ��䱶����������Ӧ�������� =0����ʾ��������
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
//#include<memory.h>//���ڴ���в�����ͷ�ļ�
//#define max 1000005
//int num[max];
//int main()
//{
//	int n;
//	int count=0;
//	memset(num,0,sizeof(num));
//	for(int i=2;i<max;i++)//ɸѡ�������
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
//		if(prime[i]==0)//�ж��Ƿ���������������Ϊ 0 ����Ϊ �������
//		{
//			count++;//��Ǳ���
//			a[i]=count;
//			for(j=i;j<max;j+=i)
//			{
//				prime[j]=i;//�����е� ���������� ǰ�ڵ� ����������������
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
