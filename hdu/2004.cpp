#include<iostream>
using namespace std;
int main() {
    string s="EEEEEEDCBAA";
    int a;
    while(cin>>a) {
        if(a>100||a<0)
            cout<<"Score is error!"<<endl;
        else
            cout<<s[a/10]<<endl;
    }
    return 0;
}
