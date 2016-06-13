#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1)break;
        else if(n==6)cout<<"6=1+2+3"<<endl;
        else if(n==28)cout<<"28=1+2+4+7+14"<<endl;
        else if(n==496)cout<<"496=1+2+4+8+16+31+62+124+248"<<endl;
        else if(n==8128)cout<<"8128=1+2+4+8+16+32+64+127+254+508+1016+2032+4064"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
