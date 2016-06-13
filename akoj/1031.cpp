#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int a,n,m,k,sum=0;
    cin>>a;
    while(a--)
    {
        cin>>n;
        while(n--)
        {
            cin>>m;
            for(k=2; k<=sqrt(m); k++)
            {
                if(m%k==0)break;
            }
            if(k>sqrt(m)&&m!=1)//这里如果没有判断条件，上面确实是跳出了循环，但是都跳出来了
//即全部相加了，加上这个条件是判断m到底是不是质数因为此时k是变化的，不是质数则k是不变的
                sum=sum+m;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
