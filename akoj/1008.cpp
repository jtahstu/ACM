#include<iostream>
#include<cstring>
using namespace std;
main()
{
    int n,i,len;
    char a[100];
    cin>>n;
    while(n--)
    {
        cin>>a;
        len=strlen(a);
        for(i=0; i<len; i++)
        {
            if(a[i]<='z'&&a[i]>='a')
                a[i]=a[i]-32;
            else
                a[i]=a[i]+32;
        }
        cout<<a<<endl;
    }
    return 0;
}
