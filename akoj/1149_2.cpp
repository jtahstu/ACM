#include<cstdio>
#include<iostream>
using namespace std;
long long f(int n){//½×³Ë
    if(n<=1)return 1;
    return f(n-1)*n;
}
long long solve(int n,int m){
    long long s=0,a=1;
    for(int i=2;i<m+1;i++)
    {
        s+=a*f(n)/f(i);
        a*=-1;
    }
    return s;
}
int main(){
    int n,m;
    while(cin>>n>>m)
    {
        cout<<solve(n,m)<<endl;
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
