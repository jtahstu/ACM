#include<iostream>
using namespace std;
int main() {
    int n,a;
    while(cin>>n) {
        long long s=1;
        for(int i=0; i<n; i++) {
            cin>>a;
            if(a&1)
                s*=a;
        }
        cout<<s<<endl;
    }
    return 0;
}
