#include<cstdio>
#include <iostream>
using namespace std;
int C(int m,int n)//��m n��С����������ֹ��ʱ
{
    int mt,nt;
    mt=m;nt=n;
    int r=(m%n);
    while(r!=0)
    {
       m=n;
       n=r;
       r=m%n;
    }
    return (mt*nt/n);
}

int main()
{
    int a1,b1,a2,b2,s;
    while(cin>>a1>>b1>>a2>>b2)
        {
            int i=0;
            s=C(a1,a2);
            for(i=1; i<=s; i++)
            {
                if(i%a1==b1&&i%a2==b2)
                    cout<<i<<endl;
            }
        }
}
