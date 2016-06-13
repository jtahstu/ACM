#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int t,a[105];
    scanf("%d",&t);
    while(t--)
    {
        memset(a,0,sizeof(a));
        int n,m,l;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
        {
             scanf("%d",&l);
             a[l]++;
        }
        for(int i=0;i<=m;i++)
            for(int j=0;j<a[i];j++)
            printf("%d ",i);
        printf("\n");

    }
    return 0;
}
