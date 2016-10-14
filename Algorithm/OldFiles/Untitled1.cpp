#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int m;
        cin>>m;
        int sum=0,temp;
        for(int i=0; i<m; i++) {
            cin>>temp;
            sum+=temp;
        }
        cout<<sum<<endl;
    }
    return 0;
}
