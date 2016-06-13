/*a letter and a number
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
we define f(A) = 1, f(a) = -1, f(B) = 2, f(b) = -2, ... f(Z) = 26, f(z) = -26;
Give you a letter x and a number y , you should output the result of y+f(x).
输入
On the first line, contains a number T(0<T<=10000).then T lines follow, each line is a case.each case contains a letter x and a number y(0<=y<1000).
输出
for each case, you should the result of y+f(x) on a line
样例输入
6
R 1
P 2
G 3
r 1
p 2
g 3
样例输出
19
18
10
-17
-14
-4*/
/*
while(n--)
{
char a;
int b,c,d;
cin>>a>>b;
c=a;
if(a>='A'&&a<='Z')
d=c-64;
if(a>='a'&&a<='z')
d=96-c;
cout<<d+b<<endl;}
return 0;}*/

#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	while(n--)
	{
		char a;
		int b,c,d;
		char ch=getchar();
		scanf("%c%d",&a,&b);
		c=a;
		if(a>='A'&&a<='Z')
		d=c-64;
		if(a>='a'&&a<='z')
		d=96-c;
		printf("%d\n",b+d);
	}
	return 0;
}
//最优代码
 
#include<stdio.h>
main()
{
	int x,n;
	scanf("%d",&x);
	while(x--)
	{
		getchar();
		char c;
		scanf("%c %d",&c,&n);
	    if(c>=65&&c<=90) c=c-64;
		else c=0-(c-96);
		n=c+n;
		printf("%d\n",n);
		

	}
}        