#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long int a;
    int b,c,d;
    int m[3];
    while(cin>>a>>m[0]>>m[1]>>m[2])
    {
        int count=0;
        if(a==0)continue;
        for(int i=1;i<=a;i++)
        {
            if(i%m[0]==0||i%m[1]==0||i%m[2]==0)count++;
        }
        cout<<a-count<<endl;
    }
    return 0;
}



