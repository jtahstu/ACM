#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        sum+=a;
        while(a>=b)
        {
            a-=b;//ֻҪa-b������b , ���൱��a���һ��
            a++;
            sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}

#include "stdio.h"
#include<fstream>
int main()
{
    //freopen("d:\\1.txt","r",stdin);
    //freopen("d:\\2.txt","w",stdout);
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int n,k,sum;
        scanf("%d%d",&n,&k);
        sum=n;
        while(n/k)
        {
            sum+=n/k;
            n=n/k+n%k;
        }
        printf("%d\n",sum);
    }
    return 0;
}
