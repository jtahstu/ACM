/*#include<cstdio>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>m;
    while(m--)
    {
        cin>>n;//��10Ϊ����������õ���λ��
        double tmp=n*log10(n);
        double res=tmp-floor(tmp);	//floor����ȡ������.,�õ�����
        printf("%I64d\n",(long long)pow(10,res));
    }
    return 0;
}*/

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{

    __int64 cas,b,i,d;
    double a,m,n,c;
    scanf("%I64d",&cas);
    for(i=1;i<=cas;i++)
    {
        scanf("%lf",&n);
        a=n*log10(n);
        b=(__int64)(a);
        c=a-b;
        d=(__int64)(pow(10,c));
        printf("%I64d\n",d);
    }
    return 0;
}
