#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main() {
    int n;
    string s,b;
    cin>>n;
    getchar();
    for(int i=0; i<n; i++) {
        getline(cin,s);
        b+=s[0];
    }
    cout<<b<<endl;
    return 0;
}
