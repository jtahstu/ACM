#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0&&b==0&&c==0&&d==0)break;
        if(a==b+1)cout<<"2"<<endl;
        else if(b==c+1)cout<<"3"<<endl;
        else if(c==d+1)cout<<"4"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}
