#include<iostream>
using namespace std;
int tsy(int m,int n) {
    return n==0?m:tsy(n,m%n);
}
int main() {
    int m,n;
    while(cin>>m>>n)
        cout<<m*n/tsy(m,n)<<endl;
    return 0;
}
