#include<iostream>
using namespace std;
int f(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	while(cin>>n)
	{
		int sum=0;
		if(n==0)break;
		while(f(n))
		{
		if(f(n)<10) {cout<<f(n)<<endl;break;}
			else f(n)=f(f(n));
		}

	}
	return 0;
}
