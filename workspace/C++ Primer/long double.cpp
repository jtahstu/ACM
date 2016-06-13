#include<iostream>
#include<complex>
using namespace std;
int main(){
//    double ss=1.0;
    long long ss=1;
    ss=ss<<62;
    cout<<ss<<endl;

    int c=7,cc=071,ccc=0x71;
    cout<<c<<" "<<cc<<" "<<ccc<<endl;

    string *p,str="hello sb";
    p=&str;
    cout<<*p<<endl;

    complex<double> d(2.0,3.5);//¸´Êý
    complex<double> dd(3.0,3);
    cout<<d+dd<<endl;

    return 0;
}
