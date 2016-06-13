#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,m;
    while(cin>>n>>m) {
        if(m<n)swap(n,m);
        long long ping=0,li=0;
        for(int i=n; i<=m; i++) {
            if(i&1)li+=i*i*i;
            else ping+=i*i;
        }
        cout<<ping<<" "<<li<<endl;
    }
    return 0;
}

