/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=54
 * by jtahstu on 2015/2/5 3:00
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
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
