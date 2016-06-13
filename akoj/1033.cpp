#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int m,n,N,c,r;
    cin>>N;
    while(N--)
    {
        cin>>m>>n;
        for(c=0; c<=m; c++)
        {
            r=m-c;
            if(2*c+4*r==n)break;
        }
        if(c<=m)
           cout<<c<<" "<<r<<endl;
        else
         cout<<"No answer\n";
    }
    return 0;

}
