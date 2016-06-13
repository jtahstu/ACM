#include<iostream>
#include<algorithm>
using namespace std;
int tt(int a[],int n) {
    for(int i=1; i<n; i++)
        a[0]=a[0]^a[i];
    return a[0];
}
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t,a[10001]= {0};
        cin>>t;
        for(int i=0; i<t; i++)
            cin>>a[i];
            int b=tt(a,t);
        cout<<b<<endl;
    }
    return 0;
}
