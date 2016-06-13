#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int k1,k2,m,n;
    while(cin>>s>>k1>>k2) {
        char a[100];
        for(int i=0; i<s.length(); i++)
            for(int j=0; j<26; j++) {
                if(s[i]-'A'==(k1*j+k2)%26) {
                    a[i]=j+'A';
                    break;
                }
            }
        a[s.length()]='\0';
        cout<<a<<endl;
    }
    return 0;
}
//是给密码求明文，开始看反了，以为求密码
