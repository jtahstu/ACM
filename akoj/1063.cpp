#include<iostream>
using namespace std;

int f(int n)//�ú�����Problem_1041�ı����
{
    int b[]= {100,50,10,5,2,1}; //�����飬�������
    int kk;
    int count=0;
    for(int i=0; i<6; i++)
    {
        kk=n/b[i];//�����ɵ�kk����ֵΪa[i]����Ǯ
        n%=b[i];
        count+=kk;
    }
    return count;
}

int main()
{
    int n,a;
    while(cin>>n)
    {
    	int sum=0; //Oh fuck û����0
        if(n==0)break;
        while(n--)
        {
            cin>>a;
            sum+=f(a);
        }
        cout<<sum<<endl;
    }
    return 0;
}

