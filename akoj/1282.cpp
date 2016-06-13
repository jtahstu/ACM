#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        char s;
        int m;
        cin>>s>>m;
        if(s>='A'&&s<='Z')cout<<s-64+m<<endl;
        if(s>='a'&&s<='z')cout<<-(s-96-m)<<endl;
    }
    return 0;
}
