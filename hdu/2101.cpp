#include<iostream>
using namespace std;
int main() {
    long long a=0,b=0;
    while(cin>>a>>b) {
        if((a+b)%86==0)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
