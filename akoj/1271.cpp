#include<iostream>
using namespace std;
int a[10000001]={0};
int f(int n)
{
    a[0]=1,a[1]=1;
    for(int i=2;i<n;i++)
        a[i]=(a[i-1]%10000+a[i-2]%10000)%10000;
    return a[n-1]%10000;

}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        cout<<f(n)<<endl;
    }
    return 0;
}



//#include<stdio.h>
//enum {N=10000000+1,MOD=10000};
//int F[N];
//void fill()
//{
//    F[0]=0;
//    F[1]=1;
//    int i;
//    for(i=2; i<N; i++)F[i]=(F[i-1]+F[i-2])%MOD;
//}
//int main()
//{
//    int n;
//    fill();
//    while(~scanf("%d",&n)&&n)printf("%d\n",F[n]);
//    return 0;
//}
