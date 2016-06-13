#include<iostream>
#include<cstdio>
using namespace std;
const int m1[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
const int m2[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
bool judge(int n) {
    if(n%400==0||(n%4==0&&n%100!=0))
        return true;
    return false;
}
int main() {
    int n;
    cin>>n;
    while(n--) {
        int y,m,d,days=0;
        scanf("%d%d%d",&y,&m,&d);
        if(judge(y)) {
            for(int i=0; i<m-1; i++)
                days+=m1[i];
        } else {
            for(int i=0; i<m-1; i++)
                days+=m2[i];
        }
        cout<<days+d<<endl
    }
    return 0;
}
