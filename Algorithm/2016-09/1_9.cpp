#include<iostream>
#include<cstdio>
using namespace std;
#define MAXN 9
int parvalue[MAXN+5]= {10000,5000,2000,1000,500,200,100,50,20,10};
int num[MAXN+5]= {0};
int exchange(int n) {
    cout<<n<<endl;
    for(int i=0; i<=MAXN; i++) {
        num[i]+=n/parvalue[i];
        n%=parvalue[i];
    }
    return 0;
}
int main() {
    double m;
    scanf("%lf",&m);
    cout<<m<<endl;
    exchange((int)100*m);
    for(int i=0; i<=MAXN; i++) {
        if(num[i]!=0)
            cout<<(float)parvalue[i]/100<<": "<<num[i]<<endl;
    }
    return 0;
}
