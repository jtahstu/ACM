#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int j=0,k=0;
        string a;
        cin>>a;
        bool flag=false;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='/'&&a[i+1]=='/')
            {
                j=i+2;
                for(int l=j;l<a.size();l++)
                {
                    if(a[l]=='/'||a[l]==':')
                      {
                      k=l-1;
                    break;}
                    flag=true;
                }
                if(flag)break;
            }
        }
        for(int m=j;m<=k;m++)
            cout<<a[m];
        cout<<endl;
    }
    return 0;
}
