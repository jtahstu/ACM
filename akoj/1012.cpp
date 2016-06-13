#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int tt(char a)
{
    if(a=='1')cout<<"0001";
    else if(a=='2')cout<<"0010";
    else if(a=='3')cout<<"0011";
    else if(a=='4')cout<<"0100";
    else if(a=='5')cout<<"0101";
    else if(a=='6')cout<<"0110";
    else if(a=='7')cout<<"0111";
    else if(a=='8')cout<<"1000";
    else if(a=='9')cout<<"1001";
    else if(a=='A')cout<<"1010";
    else if(a=='B')cout<<"1011";
    else if(a=='C')cout<<"1100";
    else if(a=='D')cout<<"1101";
    else if(a=='E')cout<<"1110";
    else if(a=='F')cout<<"1111";
    else cout<<"0000";
}
int main()
{
    string a;
    while(cin>>a)
    {
        for(int i=0; i<a.size(); i++)
            tt(a[i]);
        cout<<endl;
    }
    return 0;
}
