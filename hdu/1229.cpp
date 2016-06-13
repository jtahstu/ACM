#include<iostream>
#include<string>
using namespace std;
int main() {
    int a,b,c,s[101]= {0},k[101]= {0};
    while(cin>>a>>b>>c) {
        int a1=a,b1=b;
        if(a==0&&b==0)break;
        for(int i=0; i<c; i++) {//这里小于c，一开始写4了
            s[i]=a%10;
            a/=10;
            k[i]=b%10;
            b/=10;
        }
        bool flag=true;
        for(int j=0; j<c; j++) {
            if(s[j]!=k[j]) {
                flag=false;
                cout<<a1+b1<<endl;
                break;
            }
        }
        if(flag)cout<<"-1"<<endl;
    }
    return 0;
}
