#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main() {
    int d;
    string s,temp;
    while(cin>>d>>temp>>s) {
        if(s=="week") {
            if (d == 5 || d == 6)
                cout<<"53"<<endl;
            else
                cout<<"52"<<endl;
        } else {
            if ( d == 30)
                cout<<"11"<<endl;
            else if (d == 31)
                cout<<"7"<<endl;
            else
                cout<<"12"<<endl;
        }
    }
    return 0;
}
