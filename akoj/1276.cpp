#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    while(cin>>a>>b>>c) {
        int d=0;
        for(int i=1; i<a; i++)
            if(i%b==0||i%c==0)
                d++;
        cout<<d<<endl;
    }
    return 0;
}
