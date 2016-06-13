#include<iostream>
#include<string>
using namespace std;
int main6()
{
	int n;
	cin>>n;
	while(n--)
	{
		string a;
		cin>>a;
		int count=a.size();
		if(a.size()%2==1){cout<<a.size()<<endl;break;}
		while(count!=0)
		{
			for(int i=0,j=count-1;i<count/2-1;i++,j--)
			{
				if(a[i]==a[j])
					count=count/2;
				else
				{
					cout<<count<<endl;
					count=0;
				}
			}
		}

	}
	return 0;
}
