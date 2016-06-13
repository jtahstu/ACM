#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int t,n,i;
    double sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=1;
        for(i=1;i<=n;i++)
            sum+=log10(i);
        cout<<(int)sum<<endl;

    }
    return 0;
}
#include <iostream>//斯特林公式求对数
#include <cmath>
using namespace std;
#define PI 3.141592654
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(int)((0.5*log(PI*2*n)+n*log(n)-n)/log(10))+1<<endl;
    }
    return 0;
}
