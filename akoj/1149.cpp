//#include <iostream>
//#include<cstdio>
//using namespace std;
//int main()
//{
//    int c,n,m,i;
//    double b[21]= {0,1,2,6,24,120,720}; //a[21]={0,0,1,2};
//    //计算全错位排列数
////	for(i=4;i<21;i++)
////	{
////		a[i]=(i-1)*(a[i-1]+a[i-2]);
////	}
//    //计算阶乘
//    for(i=7; i<21; i++)
//    {
//        b[i]=i*b[i-1];
//    }
//    while(cin>>m>>n)
//    {
//        cout<<b[m]/b[n]<<endl;
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    long long int f[22],i,nx,mx,n,m ;//本题需用long long
    f[1]=0 ;f[2]=1 ;
    for(i=3 ;i<=20 ;i++) // 递推公式
        f[i]=(i-1)*(f[i-1]+f[i-2]) ;
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        nx=1 ;mx=1 ;
        for(i=n-m+1 ;i<=n ;i++)
                nx*=i ;
        for(i=m ;i>=2 ;i--)
                mx*=i ;
        printf("%lld\n",nx/mx*f[m]) ;
    }
    return 0 ;
}
#include<stdio.h>
long long a[22],b[22];
int main(){
	int i,n,m;
	for(i=1,a[0]=1;i<21;i++)
		a[i]=a[i-1]*i;
	for(i=3,b[2]=1;i<21;i++)
		b[i]=(i-1)*(b[i-2]+b[i-1]);
	while(scanf("%d%d",&n,&m)!=EOF){
		printf("%lld\n",a[n]/a[n-m]/a[m]*b[m]);
	}
}
