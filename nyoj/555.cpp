/*#include "iostream"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
    int a[1001],i;
     while(cin>>a[0]){
    for(i=1; i<10; i++)
    {
        cin>>a[i];
    }}
    for(i=9; i>=0; i--)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}*/
#include<stdio.h>
int main()
{
int a[10];
while(scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9])==10)
{
printf("%d %d %d %d %d %d %d %d %d %d\n",a[9],a[8],a[7],a[6],a[5],a[4],a[3],a[2],a[1],a[0]);
}
}
