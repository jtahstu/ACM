#include<iostream>
using namespace std;
int tt(int a[][],int i,int j)
{


}
int main()
{
    int m,n;
    int a[100][100]= {0};
    while(cin>>m>>n)
    {
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                cin>>a[i][j];
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(a[i][j]==1)
                tt(a,i,j);
            }
            return 0;
}
