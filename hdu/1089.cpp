#include<iostream>
using namespace std;
int main() {
    int n,tsy=0,jt=0;
    cin>>n;
    tsy=n;
    while(n--) {
        int m,a[1001],sum=0;
        cin>>m;
        for(int i=0; i<m; i++) {
            cin>>a[i];
            sum+=a[i];
        }
        jt++;
        cout<<sum<<endl;
        if(jt!=tsy)cout<<endl;
    }
    return 0;
}
