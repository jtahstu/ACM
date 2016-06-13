#include<iostream>//ì³²¨ÄÇÆõÊıÁĞ
using namespace std;
int main()
{
    long long a[45]={0,0,1,2};
    for(int i=4;i<=40;i++)
        a[i]=a[i-1]+a[i-2];
    int n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        cout<<a[m]<<endl;
    }
    return 0;
}
