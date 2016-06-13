#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        int i=10;
        while(m/i>=10)
        {
            i*=10;
        }
        cout<<m%i<<endl;
    }
}


#include<cstdio>//±äÌ¬×ö·¨
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
        scanf("\n%*c%d",&m);
        cout<<m<<endl;
    }
    return 0;
}
