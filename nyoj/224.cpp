#include<iostream>//统计计数即可，超时的问题，要避免
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int a[1000000+5];
int main()
{
    memset(a,0,sizeof(a));
    int count=0,n,t,m;
    char s[10];
    scanf("%d%d",&n,&t);
    for(int i=0; i<t; i++)
    {
        scanf("%s",s);
        if(s[0]=='C')
        {
            scanf("%d",&m);
            if(a[m]==0)
            {
                a[m]++;
                count++;
            }
            else
            {
                a[m]--;
                count--;
            }
        }
        else
            printf("%d\n",count);

    }
    return 0;
}
