#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double s,b;
    while(cin>>s) {
        b=fabs(s);
        printf("%.2lf\n",b);
    }
    return 0;
}
