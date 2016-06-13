#include<iostream>

using namespace std;

int main()
{
    int b[]={100,50,20,10,5,2,1};//开数组，储存币种
    int n,kk;
    cin>>n;
    for(int i=0;i<7;i++)
    {
        kk=n/b[i];//除即可得kk张面值为啊a[i]的零钱
        for(int j=0;j<kk;j++)
            cout<<b[i]<<endl;
        n%=b[i];
    }
    return 0;
}
