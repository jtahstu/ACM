#include<iostream>
#include<iomanip>

using namespace std;

const double pi=3.141592654;//pi 有点问题 换atan(1.0)*4,就ok了

int main()
{
    double r,h;
    cin>>r>>h;
    cout<<"Area="<<setiosflags(ios::fixed)<<setprecision(3)<<2*pi*r*r+2*pi*r*h<<endl;
    return 0;
}
