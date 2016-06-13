#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    while(cin>>n)
    {
        int i,s=1;
        for(i=1; i<=n; i++)
            s*=i;
        cout<<s<<endl;
    }
    return 0;
}

/*#include<stdio.h>
int fun(int t)
{
    if (t==1)return 1;
    return t*fun(t-1);
}
int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)printf("%d\n",fun(n));
}*/

