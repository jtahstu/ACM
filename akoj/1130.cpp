#include<iostream>
using namespace std;
int main() {
    int a[5][5],max=-1,maxi,maxj,m;
    for(int i=0; i<4; i++)
        for(int j=0; j<3; j++) {
            cin>>m;
            if(m>max) {
                maxi=i;
                maxj=j;
                max=m;
            }
        }
    cout<<max<<" "<<maxi<<" "<<maxj<<endl;
    return 0;
}
