#include "iostream"
#include "stdio.h"
using namespace std;
int main(int argc, char const *argv[])
{
	int i,j,t,a[1001],n,m;
        while(cin>>n)
		{
			for(i=1;i<=n;i++)
				cin>>a[i];
			for(i=1;i<n;i++)
				for (j=1; j <n+1-i; j++)
				if(a[j]>a[j+1])
				{
					t=a[j];a[j]=a[j+1];a[j+1]=t;
				}
				for(i=1;i<=n;i++)
					cout<<(char)(a[i]%26+65)<<" ";
				cout<<endl;
		}
	return 0;
}
