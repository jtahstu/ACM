#include<cstdio>
#include<iostream>//题意即求n!里有多少个2,   4,8,16得多加几个2
using namespace std;
int main()
{
    int n;
    int a[31]= {2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,
                262144, 524288,1048576, 2097152, 4194304, 8388608,16777216,33554432,67108864,
                134217728, 268435456, 536870912,1073741824};
    while(cin>>n)
    {
        int count=0;
        for(int i=0; i<29; i++)
            if(n>=a[i]&&n<a[i+1])
            {
                count=i;
                break;
            }
        cout<<count+n/2+1<<endl;
    }
    return 0;
}
