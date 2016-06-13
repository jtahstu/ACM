#include<iostream>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    while(n--) {
        int a=0,b=0;
        cin>>a>>b;
        cout<<((a%100)+(b%100))%100<<endl;
    }
    return 0;
}
