/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=112
 * by jtahstu on 2015/2/5 4:00
 */

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
	int a,b;
	while(cin>>a>>b)
	{
		 long long jt=1;
		for(int i=0;i<b;i++)
			jt*=a;
		cout<<jt<<endl;
	}
	return 0;
}
