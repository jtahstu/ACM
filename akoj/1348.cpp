#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    double a,b;
    while(cin>>a>>b) {
        if((long long)a%(long long)b==0)
            cout<<a/b<<endl;
        else {
            double v=a/b;
            printf("%.2f\n",v);
        }
    }
    return 0;
}
