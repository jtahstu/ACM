#include<iostream>
using namespace std;
int main()
{
	int x1,x2,x3,y1,y2,y3;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
	{
		if(x1+x2+x3+y1+y2+y3==0)break;
		int a=x2-x1,b=y2-y1,c=x3-x2,d=y3-y2;
		if(a*d-b*c>0)cout<<"0"<<endl;
		else cout<<"1"<<endl;
	}
	return 0;
}
