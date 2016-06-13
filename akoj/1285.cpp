#include<iostream>
using namespace std;
int main() {
    int a[1001],b[1001],m,n;
    cin>>m;
    for(int i=0; i<m; i++)
        cin>>a[i];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>b[i];
    int k=0,j=0,c[1001];
    for(int i=0; i<m; i++) {
        if(a[i]!=b[j]) {
            c[k]=a[i];
            k++;
        } else  j++;
    }
    cout<<k;
    for(int i=0; i<k; i++)
        cout<<" "<<c[i];
    cout<<endl;
    return 0;
}
