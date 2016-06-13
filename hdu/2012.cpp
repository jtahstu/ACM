#include<iostream>
using namespace std;
bool prime(int n) {
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}
int main() {
    int x,y;
    while(cin>>x>>y,x,y) {
        bool flag=true;
        for(int i=x; i<=y; i++) {
            if(!prime(i*i+i+41)) {
                cout<<"Sorry"<<endl;
                flag=false;
                break;
            }
        }
        if(flag)cout<<"OK"<<endl;
    }
    return 0;
}
