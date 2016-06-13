#include<iostream>
using namespace std;

int f(int n)//该函数由Problem_1041改编而来
{
    int b[]= {100,50,10,5,2,1}; //开数组，储存币种
    int kk;
    int count=0;
    for(int i=0; i<6; i++)
    {
        kk=n/b[i];//除即可得kk张面值为a[i]的零钱
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
    	int sum=0; //Oh fuck 没有置0
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

