#include<iostream>
using namespace std;

int main() {
    int n;
    while(cin>>n) {
        int m;
        bool flag=false;
        for(int i=0; i<n; i++) {
            cin>>m;
            if(m==i)flag=true;
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
