#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main() {
    double n,m;
    while(cin>>n>>m) {
        double sum=n;
        for(int i=1; i<m; i++) {
            n=sqrt(n);
            sum+=n;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
