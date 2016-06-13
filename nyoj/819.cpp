#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    while(cin>>s) {
        int count=0;
        for(int i=0; i<s.length(); i++)
            if(s[i]=='c')
                count++;
        if(count==0) {
            cout<<s.length()-1<<endl;
            continue;
        } else if(count&1) {
            cout<<"0"<<endl;
            continue;
        } else {
            int t=0,x=0,y=0;
            for(int i=0; i<s.length(); i++) {
                if(s[i]=='c')
                    t++;
                if(t==count/2&&x==0)x=i;
                if(t==(count/2+1)&&y==0)y=i;
                if(t>count/2+1)break;
            }
            cout<<y-x<<endl;
            continue;
        }

    }
    return 0;
}
