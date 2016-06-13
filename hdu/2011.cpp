#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    while(n--){
        cin>>m;
        double s=0,sign=1;
        for(int i=1;i<=m;i++){
            s+=sign*(1.0/i);
            sign*=-1;
        }
        printf("%.2lf\n",s);
    }
    return 0;
}
