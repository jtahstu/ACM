#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
const int N=100005;
int a[N];
int main() {
    int n;
   scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    long long sum=0;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            sum+=floor((a[i]+a[j])/(a[i]*a[j]));
    cout<<sum<<endl;
    return 0;
}
