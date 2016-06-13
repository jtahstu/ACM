#include<iostream>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        int count=1;
        for(int i=1; i<n; i++) {
            count=(count+1)<<1;
        }
        cout<<count<<endl;
    }
    return 0;
}
