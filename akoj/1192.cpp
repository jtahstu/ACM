#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int f(long long a)
{
    if(a==0)return 0;
    long long b[50]={0},i=0;
    while(a)
    {
        b[i]=a%2;
        a=a/2;
        i++;
    }
    int count=1,x=1;
    for(int j=1;j<i;j++)
    {
        if(b[j]==1&&b[j-1]==1)count++;
        if(count>x)x=count;
        if(b[j]!=b[j-1])count=0;
    }
    return x;
}

int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        if(f(a)>f(b))cout<<"fat"<<endl;
        else if(f(a)==f(b))cout<<"fat and thin"<<endl;
        else cout<<"thin"<<endl;
    }
    return 0;
}
//#include<stdio.h>
//int cal(char * s)
//{
//    int n, c, f, i, j;
//    for(n = 0; s[n]; s[n] = s[n++] - '0');
//    for(c = i = 0; i < n; c += f, i += !s[i])
//    for(f = 0, j = i; j < n; s[j] += f * 10, f = s[j] & 1, s[j++] >>= 1);
//    return c;
//}
//int main()
//{
//    char a[128], b[128];
//    int c;
//    for(; scanf("%s %s", a, b) != EOF; puts((c = cal(a) - cal(b)) > 0 ? "fat" : c ? "thin" : "fat and thin"));
//    return 0;
//}
