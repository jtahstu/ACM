#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    long long n,m;
    scanf("%lld%lld",&n,&m);
    for(long long i=1; i<=n; i++) {
        long long sum=0;
        for(long long j=i; j<=n; j++) {
            sum=(i+j)*(j-i+1)/2;
            if(sum==m) {
                printf("[%lld,%lld]\n",i,j);
                break;
            }
            if(sum>m)break;
        }
    }
    return 0;
}
/*
这道题我做了几个月你信吗......今天终于ac了
数学本来就博大精深了  又要灵活的运用的c上 突然发现脑子不够用了。。
高中的等差数列a,a+1,a+2,....a+n;
暂且把b=a+n;
则2*s=(b-a+1)*(a+b);
令x=b-a+1,y=a+b;
解得a=(x+y-1)/2,b=(y-x+1)/2;
然后x从1---sqrt(2*s)，判断2*s能否整除x，如果能且x+y-1能被2整除，
就得到了a,b的值。
代码奉上：*/
#include <stdio.h>
#include <math.h>
int main() {
    long long n,m,y,x;
    scanf("%lld %lld",&n,&m);
    for(x=sqrt(2*m); x>=1; x--) {
        if(2*m%x==0) {
            y=2*m/x;
            if((x+y-1)%2==0)
                printf("[%lld,%lld]\n",(y-x+1)/2,(x+y-1)/2);
        }
    }
    return 0;
}
