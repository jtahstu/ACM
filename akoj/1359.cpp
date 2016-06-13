#include<iostream>
using namespace std;
long long jc(int n) {
    long long s=1;
    for(int i=2; i<=n; i++)
        s*=i;
    return s;
}
int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        long long ans=jc(a)/(jc(a-b)*b);
        cout<<ans<<endl;
    }
    return 0;
}
