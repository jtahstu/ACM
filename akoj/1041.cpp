#include<iostream>

using namespace std;

int main()
{
    int b[]={100,50,20,10,5,2,1};//�����飬�������
    int n,kk;
    cin>>n;
    for(int i=0;i<7;i++)
    {
        kk=n/b[i];//�����ɵ�kk����ֵΪ��a[i]����Ǯ
        for(int j=0;j<kk;j++)
            cout<<b[i]<<endl;
        n%=b[i];
    }
    return 0;
}
