/**
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=658
 * by jtahstu on 2015/3/11 20:00
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int n;
	while(cin>>s>>n)
	{
		unsigned int x=n%s.size();
		unsigned int y=s.size()-x;
		for(unsigned int i=y;i<s.size();i++)
			cout<<s[i];
		for(unsigned int j=0;j<y;j++)
			cout<<s[j];
		cout<<endl;
	}
	return 0;
}
