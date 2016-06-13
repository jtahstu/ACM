#include<iostream>
using namespace std;
int a[18]={57,71,87,97,99,101,103,113,114,115,128,129,131,137,147,156,163,186};
int b[18];
void solve(int n,int k){
    if(n==18){
        if(k!=0)return ;
        for(int i=0;i<18;i++)
            cout<<b[i]<<" ";
        cout<<endl;
        return;
    }
    int max=k/a[n];
    for(int i=max;i>=0;i--){
        b[n]=i;
        solve(n+1,k-b[n]*a[n]);
    }
}
int main(){
    int n,k;
    cin>>k;
    solve(0,k);
    return 0;
}
