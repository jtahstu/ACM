#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
const int N=1200;
int A[N];
int main()
{
    int n,i,j,temp,start,sc;
    while(cin>>n)
    {
        memset(A,0,sizeof(A));
        for(A[0]=1,i=1; i<=n; i++)
            for(sc=0,j=0; j<N; j++)
                temp=A[j]*i+sc,
                sc=temp/10,
                A[j]=temp%10;
        for(start=N-1; A[start]==0; --start);
        for(; start>=0; --start)
          cout<<A[start];
        cout<<endl;
    }
}
