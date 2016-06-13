#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
const double pi=3.1415927;
int main() {
    double r,v;
    while(cin>>r) {
        v=pi*r*r*r*4/3;
        printf("%.3lf\n",v);
    }
    return 0;
}
