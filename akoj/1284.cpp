#include<iostream>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        int max=0,a[1001];
        for(int i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]>max)max=a[i];
        }
        cout<<max<<endl;
        for(int i=0; i<n; i++)
            if(a[i]==max)
                cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
