#include<iostream>
#include<algorithm>
using namespace std;
int f(int a[])//�ж���ʲô��
{
    if(a[0]==a[1]&&a[1]==a[2])return 4;//����    //�Ҳ���ΪʲôҪ���жϱ��Ӻ�˳��
    if(a[0]+1==a[1]&&a[1]+1==a[2])return 3;//˳��
    if(a[0]!=a[1]&&a[1]!=a[2])return 1;//����
    return 2;//����
}
int g(int a[])//�ж϶��Ӵ�С
{
    if(a[0]==a[1])return a[0]*100+a[1]*10+a[2];
    else if(a[1]==a[2])return a[2]*100+a[1]*10+a[0];
}
int main()
{
    int a[4]= {0};
    int b[4]= {0};
    while(cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2])
    {
        sort(a,a+3);
        sort(b,b+3);
        if(f(a)>f(b))cout<<"you win"<<endl;
        else  if(f(a)<f(b))cout<<"you lose"<<endl;
        else if(f(a)==f(b))
        {
            if ( f(a)==4 )a[0]>b[0]?cout<<"you win"<<endl:cout<<"you lose"<<endl;
            else if ( f(a)==2 )g(a)>g(b)?cout<<"you win"<<endl:cout<<"you lose"<<endl;
            else (a[2]*100+a[1]*10+a[0])>(b[2]*100+b[1]*10+b[0])?cout<<"you win"<<endl:cout<<"you lose"<<endl;
        }
    }
    return 0;
}
