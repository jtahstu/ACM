#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
bool cmp(double a,double b) {
    return a>b;
}
int main() {
    double a[10000];
    int t;
    while(cin>>t) {
        for(int i=0; i<t; i++) {
            int num;
            cin>>num;
            for(int j=0; j<num; j++) cin>>a[j];
            sort(a,a+num,cmp);
            int count=0;
            float last=20;
            while(last>0.0000001) {
                double now=sqrt(a[count]*a[count]-1);
                last=last-2*now;
                count++;
            }
            cout<<count<<endl;
        }
    }
}
