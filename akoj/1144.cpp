#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,a[1001],b[1001];
    double k[1001];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        k[i]=1.0*b[i]/a[i];  //卧槽，这里需要*1.0，我勒个去
    }
    sort(k,k+n);
    int count=1,max=0;
    for(int i=1; i<n; i++)
    {
        if(k[i]==k[i-1])
        {
            count++;
            if(count>max)
                max=count;
        }
       else  count=1;
    }
    cout<<max<<endl;
   // system("1144.exe");
    return 0;
}
