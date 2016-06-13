#include<iostream>
using namespace std;
int main(){
    int n;
    long long s[35]={0},b[35]={0};
    s[0]=1;b[0]=0;
    s[1]=3;b[1]=1;
    for(int i=2;i<=33;i++){
        s[i]=s[i-1]*3+b[i-1]*2;
        b[i]=s[i-1]+b[i-1];
    }
    while(cin>>n){
        if(n==-1)break;
        cout<<s[n]<<", "<<b[n]<<endl;
    }
    return 0;
}
