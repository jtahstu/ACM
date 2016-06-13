#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,m;
    while(cin>>n) {
        int sum=0,maxx=-1,minn=101;
        for(int i=0; i<n; i++) {
            cin>>m;
            maxx=max(maxx,m);
            minn=min(minn,m);
            sum+=m;
        }
        double result=(sum-maxx-minn)*1.0/(n-2);
        printf("%.2lf\n",result);
    }
    return 0;
}
