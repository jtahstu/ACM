#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100][100],b[100][100];
    int x,y,count=0;
    for(int i=0; i<100; i++)
    {
        count++;
        for(int j=0; j<2; j++)
        {
            cin>>a[i][j];
            if(a[i][0]==0&&a[i][1]==0)break;
        }
    }
    int sum=0;
    for(int i=0; i<count; i++)
        sum+=a[i][1];
        int p=0,q;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            while(a[p][1]--)
            {
                b[i][j]=a[p][0];
                p++;
            }
            if(sum<n*n)a[i][j]=0;
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;

    return 0;
}
