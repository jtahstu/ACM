#include<iostream>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        long long s=1;
        bool flag=false;
        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            if(!(x&1)) {
                flag=true;
                s*=x;
            }
        }
        if(flag)
            cout<<s<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
