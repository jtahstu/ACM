//153£¬370£¬371£¬407
#include<iostream>
using namespace std;
int main() {
    int a,b;
    while(cin>>a>>b) {
        int s[5]= {0},count=0;
        bool flag=false;
        for(int i=a; i<=b; i++) {
            if(i==153||i==370||i==371||i==407) {
                s[count++]=i;
                flag=true;
            }
        }
        if(s[0]==0)cout<<"no"<<endl;
        else {
            cout<<s[0];
            for(int i=1; i<count; i++)
                cout<<" "<<s[i];
            cout<<endl;
        }
    }
    return 0;
}
