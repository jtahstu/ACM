#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,cas=0;;
    while( cin>>n) {
            if(n==0)break;
        int a[1001],sum=0;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0) {
            cout<<"No solution"<<endl;
            continue;
        } else {
            int tt=sum/n,count=0;
            sort(a,a+n);
            for(int i=0; i<n,a[i]<tt; i++)
                count+=tt-a[i];
            cas++;
            cout<<"Case #"<<cas<<endl;
            cout<<count<<endl;
        }
    }
    return 0;
}
