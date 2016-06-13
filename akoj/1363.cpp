#include<iostream>
using namespace std;
bool prime(int n) {
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int axb(int a, int b, int s) {
    int sum=0;
    if (s == 0) {//计算1的个数
        while (a > 0) {
            sum += a % 2;
            a >>= 1;
        }
        while (b > 0) {
            sum += b % 2;
            b >>= 1;
        }
    } else {//计算0的个数
        while (a > 0) {
            if (a % 2 == 0)
                sum++;
            a >>= 1;
        }
        while (b > 0) {
            if (b % 2 == 0)
                sum++;
            b >>= 1;
        }
    }
    return sum;
}
int main() {
    int a,b;
    while(cin>>a>>b) {
        if(prime(a)||prime(b))
            cout<<axb(a,b,0)<<endl;
        else
            cout<<axb(a,b,1)<<endl;
    }
    return 0;
}
