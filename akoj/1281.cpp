#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        for(int i=0; i<11; i++) {
            if(s[i]=='a'||s[i]=='b'||s[i]=='c')cout<<"2";
            if(s[i]=='d'||s[i]=='e'||s[i]=='f')cout<<"3";
            if(s[i]=='g'||s[i]=='h'||s[i]=='i')cout<<"4";
            if(s[i]=='j'||s[i]=='k'||s[i]=='l')cout<<"5";
            if(s[i]=='m'||s[i]=='n'||s[i]=='o')cout<<"6";
            if(s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s')cout<<"7";
            if(s[i]=='t'||s[i]=='u'||s[i]=='v')cout<<"8";
            if(s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z')cout<<"9";
        }
        cout<<endl;
    }
    return 0;
}
