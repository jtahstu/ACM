#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
void jt(int n) { //8进制
    int a[20],m=n,i=0,count=0;
    while(m) {
        a[i]=m%8;
        m/=8;
        i++;
    }
    for(int j=i-1; j>=0; j--) {
        count=count*10+a[j];
    }
    printf("%4d",count);
}
int main() {
    string s;
    int n,m;
    while(cin>>s) {
        cin>>n;
        if(s=="0") {//if is 8 .实际上八进制可以用%o ， fuck
            for(int i=0; i<n; i++) {
                cin>>m;
                jt(m);
            }
        } else {//if is 16
            for(int i=0; i<n; i++) {
                scanf("%d",&m);
                printf("%4X",m);
            }

        }
        cout<<endl;
    }

    return 0;
}
