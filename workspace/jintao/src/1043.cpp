#include <iostream>
using namespace std;
int s[505]={0};
bool judge(int i)
{
	for(int k=1;k<=i;k++)
		if(s[k]==s[i])
			return false;
	return true;
}
void backtrack(int i,int n,int *a)
{
	if(i<=n)
	{
		for(int k=1;k<=n;k++)
		{
			s[i]=k;
			if(judge(i))backtrack(i+1,n,a);
		}
	}
	else
	/*
	 {

		for(int i=0;i<n;i++)
			sum+=a[i][s[i]];
		if(sum>count)sum=count;
	}
	cout<<count<<endl;
	*/
	{
		for(int i=1;i<=n;i++)
			cout<<s[i]<<" ";
	}
}
int main1043()
{
	int n,a[505][505];
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	backtrack(0,n,*a);
	return 0;
}
