#include<iostream>
using namespace std;
int main() {
    int n;
    while(cin>>n&&n) {
        int x=0,y=0,z=0;
        double m;
        for(int i=0; i<n; i++) {
            cin>>m;
            if(m<0)x++;
            else if(m==0)y++;
            else z++;
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}
