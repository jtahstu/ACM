#include<iostream>
using namespace std;
int main()
{
    int n,m,a[4],i,j,count,max,min,t;
    cin>>n;
    while(n--)
    {
        count=1;
        cin>>m;
        while(m!=6174)
        {
            for(i=0; i<4; i++)
            {
                a[i]=m%10;
                m=m/10;
            }
            for(i=0; i<4; i++)
                for(j=i+1; j<4; j++)
                    if(a[i]<a[j])
                    {
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
            max=a[0]*1000+a[1]*100+a[2]*10+a[3];
            min=a[3]*1000+a[2]*100+a[1]*10+a[0];
            m=max-min;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
