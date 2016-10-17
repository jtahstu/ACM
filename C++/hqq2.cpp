#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n¡ª)
	{
		int a[12]={0};
		for(int i=0;i<12;i++)
			cin>>a[i];
		int sum=0,has=0;
		bool flag=true;
		for(int i=0;i<12;i++)
		{
			has+=300-a[i];
			if(has>=100)
				sum+=has/100*100;
			if(has<0)
			{
				cout<<-(i+1)<<endl;
				flag=false;
				break;
			}
			has%=100;
		}
		if(flag)
			cout<<has+sum*1.2<<endl;
	}
	return 0;
}
