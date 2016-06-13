#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string a;
    while(cin>>a) {
        sort(a.begin(),a.end());
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }
    return 0;
}
