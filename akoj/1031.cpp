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
            if(k>sqrt(m)&&m!=1)//�������û���ж�����������ȷʵ��������ѭ�������Ƕ���������
//��ȫ������ˣ���������������ж�m�����ǲ���������Ϊ��ʱk�Ǳ仯�ģ�����������k�ǲ����
                sum=sum+m;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
