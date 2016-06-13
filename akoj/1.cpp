#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=30;i++){
        cout<<(i&(-i))<<endl;
    }

    return 0;
}
