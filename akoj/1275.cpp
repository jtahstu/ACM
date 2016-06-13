#include<iostream>
using namespace std;
int main() {
    long long x,n;
    while(cin>>x>>n) {
            long long y=1;
            for(int i=0;i<n;i++)
                y*=x;
            cout<<y<<endl;
    }
    return 0;
}
