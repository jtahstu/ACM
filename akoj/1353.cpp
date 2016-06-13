#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        if(n<=24)cout<<"Oh yeah"<<endl;
        else if(n>24&&n<=50) {
            printf("cost = %.2f\n",(n-24)*0.53);
        } else {
            printf("cost = %.2f\n",(n-50)*0.6+13.78);
        }
    }
    return 0;
}
