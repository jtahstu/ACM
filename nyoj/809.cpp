#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
    int n;
    for(cin>>n; n; n--) {
        int a[8];
        for(int i=0; i<7; i++)
            cin>>a[i];
        sort(a,a+7);
        double jtahstu=(a[0]+a[6]+a[3])/3.0;
        printf("%.2lf\n",jtahstu);

    }
    return 0;
}
