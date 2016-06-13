#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main() {
    int n,m[505],sum1=0,sum2=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>m[i];
    sort(m,m+n);
    for(int i=0; i<n; i++) {
        if((i+1)%2==1)sum1+=m[i];
        else sum2+=m[i];
    }
    cout<<abs(sum1-sum2)<<endl;
    return 0;
}
