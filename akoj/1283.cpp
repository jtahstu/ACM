#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int m,a[1001];
        cin>>m;
        for(int i=0; i<m; i++)
            cin>>a[i];
        sort(a,a+m);
        int count=0;
        for(int i=0; i<m; i++)
            if(a[i]!=a[i+1])
                count++;
        cout<<count<<endl;
        for(int i=0; i<m; i++)
            if(a[i]!=a[i+1])
                cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
