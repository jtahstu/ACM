#include<string>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,len,sum;
	string s;
	while(cin>>s)
	{
		if(s=="0"&&s.size()==1)break;
		for(i=0,sum=0;i<s.size();i++)
		{
			sum=10*sum+s[i]-'0';
			sum%=17;
		}
		  printf(sum?"0\n":"1\n");
	}
	return 0;
}
