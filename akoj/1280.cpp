#include<iostream>
using namespace std;
int main() {
    long long a[20]= {0};
    a[1]=1;
    for(int i=2; i<=20; i++) {
        if(i%2==0)a[i]=a[i-1];
        else a[i]=a[i-2]*i;
    }
    int n;
    cin>>n;
    while(n--) {
        long long count=0;
        int m;
        cin>>m;
        for(int i=1; i<=m; i++)
            count+=a[i];
        cout<<count<<endl;
    }
    return 0;
}
