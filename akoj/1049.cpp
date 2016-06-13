#include<cstdio>
#include<iostream>
using namespace std;
int f(int a[101][101],int n)//翻转90度
{
    for(int j=n-1;j>=0;j--)
    {
      for(int i=0;i<n;i++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
    }
}

int g(int a[101][101],int n)//翻转180度
{
    for(int i=n-1;i>=0;i--)
    {
      for(int j=n-1;j>=0;j--)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
    }
}

int h(int a[101][101],int n)//翻转270度
{
    for(int i=0;i<n;i++)
    {
      for(int j=n-1;j>=0;j--)
            {
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
    }
}


int main()
{
    int n,m;
    int a[101][101]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    if(m==1)
        f(a,n);
    if(m==2)
      g(a,n);
    if(m==3)
        h(a,n);
    return 0;
}
