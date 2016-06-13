#include<iostream>
#include<algorithm>
using namespace std;
int main1240()
{
	int a[3], b[3];
	while (cin >> a[0] >> a[1] >> a[2])
	{
		if(a[0]==0&&a[1]==0&&a[2]==0)break;
		cin>>b[0]>>b[1]>>b[2];
		sort(a,a+3);sort(b,b+3);
		 (a[1] >= b[1] && a[0] >= b[0] && a[2] >= b[2])?cout<<"Yes\n":cout<<"No\n";
	}
	return 0;
}
