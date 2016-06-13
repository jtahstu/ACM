#include<iostream>
#include<cstdio>
int tsy(int a) {
    int count=1;
    while(a!=1) {
        if(a%2==1)a=3*a+1,count++;
        else a/=2,count++;
    }
    return count;
}
using namespace std;
int main() {
    int a,b;
    while(cin>>a>>b) {
        int a1=a,b1=b;
        if(a>b)swap(a,b);
        int max=1,count;
        for(int i=a; i<=b; i++) {
            count=tsy(i);
            if(count>max)max=count;
        }
        cout<<a1<<" "<<b1<<" "<<max<<endl;
    }
    return 0;
}
