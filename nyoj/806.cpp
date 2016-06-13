#include<iostream>
using namespace std;
int main(){
    int n;
    for(cin>>n;n;n--){
            int p,q,r;
        string s="Saturday",b="Sunday",y;
        cin>>y;
        if(y==s||y==b){
            cin>>p>>q>>r;
            cout<<p+q+r<<endl;
            continue;
        }else{
            cin>>p>>q;
            cout<<p+q<<endl;
            continue;
        }

    }
    return 0;
}
