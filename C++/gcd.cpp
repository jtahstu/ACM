#include "iostream"
#include "cmath"
using namespace std;
int gcd1(int a,int b) {	//欧几里得算法，辗转相除法
    int temp;
    while(b) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcd2(int a,int b) { //递归算法
    return a%b?gcd2(b,a%b):b;
}
int gcd3(int a,int b) { //Stein算法，移位运算
    int m=max(a,b);
    int n=min(a,b);
    if(n==0)return m;
    if((m&1)==0&&(n&1)==0)
        return 2*gcd3(m>>1,n>>1);
    if((m&1)==0)
        return gcd3(m>>1,n);
    if((n&1)==0)
        return gcd3(m,n>>1);
    return gcd3((m+n)/2,(m-n)/2);
}
int main(int argc, char const *argv[]) {
    int a,b;
    cin>>a>>b;
    cout<<gcd1(a,b)<<endl;
    cout<<gcd2(a,b)<<endl;
    cout<<gcd3(a,b)<<endl;
    return 0;
}
