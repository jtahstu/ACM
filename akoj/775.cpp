//扩展欧几里得定理
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int x,y,q;
void extend_Euclid(int a,int b) {
    if(b==0) {
        x=1;
        y=0;
        q=a;
    } else {
        extend_Euclid(b,a%b);
        int temp=x;
        x=y;
        y=temp-a/b*y;
    }
}
int main() {
    int a,b;
    while(~scanf("%d%d",&a,&b)) {

        extend_Euclid(a,b);
        printf("%d %d\n",x,y);
    }
    return 0;

}
