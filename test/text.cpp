#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a,b;
    while(cin>>a>>b) {
        if(log2(a&(-a))>log2(b&(-b)))
            cout<<">"<<endl;
        else if(log2(a&(-a))<log2(b&(-b)))
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }

    return 0;
}
