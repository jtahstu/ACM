#include<iostream>
using namespace std;
int main() {
    int a,b,sum,i;
    while(cin>>a>>b&&a&&b) {
        a %= 1000;
        sum = a;
        for(i=1; i<b; i++) {
            sum*=a;
            sum %= 1000;
            if (sum == 0) break;
        }
        cout<<sum<<endl;
    }
    return 0;
}
