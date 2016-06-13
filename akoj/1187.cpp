#include <iostream>
using namespace std;
char a[1000];
int main()
{
	int n,k,i,j;
	cin>>n>>k;
	for(i = 2; i <= k; i++)
	{
		for(j = i; j <= n; j += i)
		{
			if(j % i == 0)
			{
				if(a[j] == 0)
				a[j] = 1;
				else
				a[j] = 0;
			}
		}
	}
	for(i = 1; i <= n; i++)
	{
		if(a[i] == 0)
		cout<<i<<" ";
	}
	cout<<'\n';
}
