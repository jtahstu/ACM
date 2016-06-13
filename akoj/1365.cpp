#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string s,b;
        cin>>s>>b;
        bool flag=false;
        if(s.size()>=b.size()) {
            for(int i=1; i<=s.size(); i++) {
                string temp=s.substr(i,s.size()-i)+s.substr(0,i);
                if(temp.find(b,0)!=-1 ) {
                    flag=true;
                    break;
                }
            }
        }
        if(flag)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
