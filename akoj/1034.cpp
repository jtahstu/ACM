#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,s,l;
    cin>>a>>b>>c;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<(a+b)*c/2<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<a+b+2*sqrt(c*c+(b-a)*(b-a)/4)<<endl;
    return 0;
}
