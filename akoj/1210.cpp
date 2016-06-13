#include<iostream>
using namespace std;
int main() {
    int n=0,a[10001]= {0};
    while(cin>>a[n]) {
        for(int i=0; i<n; i++) {
            if(a[n]==a[i]) {
                n--;
                break;//n--,nice
            }
        }
        n++;
    }
    cout<<a[0];
    for(int k=1; k<n; k++)
        cout<<" "<<a[k];
    cout<<'\n';
    return 0;
}
