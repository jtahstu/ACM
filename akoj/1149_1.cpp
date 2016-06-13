#include<iostream>
using namespace std;
long long C(int n,int r)
{
    //if(n<=1)return 1;
    long long ans[100];
    ans[0]=1,ans[1]=n;
    for(int i=2; i<=r; i++)
    {
        ans[i]=ans[i-1]*(n-i+1)/i;
    }
    return ans[r];
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        cout<<C(n,m)<<endl;
    }
    return 0;
}
//import sys
//def fact(n):
//    if n <= 1:
//        return 1
//    return fact(n - 1) * n;
//def f(n, m):
//    s = 0;
//    sign = 1
//    for i in range(2, m + 1):
//        s += sign * fact(n) / fact(i)
//        sign *= -1
//    return s
//
//for line in sys.stdin.readlines():
//    n, m = map(int, line.strip().split(' '))
//    print f(n, m)
//
