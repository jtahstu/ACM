#include<iostream>
using namespace std;
int main()
{
	int a,b,c,delta;
	while(cin>>a>>b>>c)
	{
		delta=b*b-4*a*c;
		if(a==0)
		{
			if (a=b=c==0)cout<<"Abnormal\n";
			else cout<<"1\n";
		}
		else
		{
			if (delta==0)cout<<"1\n";
			else if (delta<0)cout<<"0\n";
			else cout<<"2\n";
		}
	}
	return 0;
}
// 1133 1256 1257 1260 1262 1881130233
//  1028   1036   1046 1049   14205221
