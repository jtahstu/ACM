#include<iostream>
#include<string>
using namespace std;
int main() {
    string a;
    while(cin>>a) {
        for(int i=0; i<a.size(); i++) {
            if(a[i]=='a')a[i]='A';
            if(a[i]=='o')a[i]='O';
            if(a[i]=='e')a[i]='E';
            if(a[i]=='i')a[i]='I';
            if(a[i]=='u')a[i]='U';
        }
        cout<<a<<endl;
    }
    return 0;
}
