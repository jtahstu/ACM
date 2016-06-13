#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	double p,s,r;
	while(cin>>a>>b>>c)
	{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		r=a*b*c/(4*s);
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<r<<endl;
	}
}
