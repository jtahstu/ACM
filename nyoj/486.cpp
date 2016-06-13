/*Old Calculator
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
szhhck have an old calculator bought 5 years ago.he find the old machine can just calculate expressions like this  :

A-B、A+B、A*B、A/B、A%B.

because it is too old and long time not use,the old machine maybe conclude a wrong answer sometime.

Your task is to write a program to check the answer the old calculator calculates is correct or not.

输入
First input is a single line,it's N and stands for there are N test cases.then there are N lines for N cases,each line contain an equation like A op B = C(A,B and C are all integers,and op can only be + , - , * , / or % ).
More details in the Sample Input.
输出
For each test case,if the equation is illegal(divided or mod by zero),you should Output "Input Error".and if the equation is correct,Output "Accept";if not Output "Wrong Answer",and print the right answer after a blank line.
样例输入
5
1+2=32
2-3=-1
4*5=20
6/0=122
8%9=0
样例输出
Wrong Answer
3
Accept
Accept
Input Error
Wrong Answer
8*/

#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b,c;
		char x,y;
		cin>>a>>x>>b>>y>>c;
		{if(x=='+'&&a+b==c)cout<<"Accept"<<endl;
		else if(x=='+'&&a+b!=c)cout<<"Wrong Answer\n"<<a+b<<endl;}

		{if(x=='-'&&a-b==c)cout<<"Accept"<<endl;
		else if(x=='-'&&a-b!=c)cout<<"Wrong Answer\n"<<a-b<<endl;}

		{if(x=='*'&&a*b==c)cout<<"Accept"<<endl;
		else if(x=='*'&&a*b!=c)cout<<"Wrong Answer\n"<<a*b<<endl;}


        if(x=='/'&&b==0) cout<<"Input Error"<<endl;
        else if(x=='/'&&a/b==c)cout<<"Accept"<<endl;
		else if(x=='/'&&a/b!=c)cout<<"Wrong Answer\n"<<a/b<<endl;

		if(x=='%'&&a%b==c)cout<<"Accept"<<endl;
		else if(x=='%'&&a%b!=c) cout<<"Wrong Answer\n"<<a%b<<endl;

	}

	return 0;
}
 
#include<stdio.h>
int calc(int a,char o,int b)
{
	switch(o)
	{
	case '+':
		return a+b;
	case '-':
		return a-b;
	case '*':
		return a*b;
	case '/':
		return a/b;
	case '%':
		return a%b;
	}
}
int main()
{
	int ncase;
	int a,b,c,r;
	char o;
	scanf("%d",&ncase);
	while(ncase--)
	{
		scanf("%d%c%d=%d",&a,&o,&b,&c);
		if((o=='/'||o=='%')&&b==0)
		{
			puts("Input Error");
			continue;
		}
		r=calc(a,o,b);
		if(r==c)
			puts("Accept");
		else
			printf("Wrong Answer\n%d\n",r);
	}
	return 0;
}        