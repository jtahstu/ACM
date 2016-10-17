#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        long long sum=0;
        if(n&1)sum+=n*n*n;
        else sum+=n*n;

    }
    cout<<sum<<endl;
}
