/*日期计算
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
如题，输入一个日期，格式如：2010 10 24 ，判断这一天是这一年中的第几天。
输入
第一行输入一个数N（0<N<=100）,表示有N组测试数据。后面的N行输入多组输入数据，每行的输入数据都是一个按题目要求格式输入的日期。
输出
每组输入数据的输出占一行，输出判断出的天数n
样例输入
3
2000 4 5
2001 5 4
2010 10 24
样例输出
96
124
297
来源
[naonao]改编C语言习题
上传者
naonao*/


#include <iostream>
using namespace std;
int leap(int a)
{
	if(a%4==0&&a%100!=0||a%400==0)
		return 1;
	else return 0;
}
int number(int year,int m,int d)
{
	int sum=0,i,j,k,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(leap(year)==1)
		for(i=0;i<m-1;i++)
			sum+=b[i];
	else
		for(i=0;i<m-1;i++)
		    sum+=a[i];
		    sum+=d;
		return sum;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		int year,month,day,n;
		cin>>year>>month>>day;
		n=number(year,month,day);
		cout<<n<<endl;
	}
	return 0;
}

#include<stdio.h>//最优代码
int main()
{
	int a,b=0,c,y,m,d,fib;
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d %d %d",&y,&m,&d);
		if(y%400==0||y%100!=0&&y%4==0)
			fib=29;
		else fib=28;
		for(c=1;c<=m;c++)
		switch(c-1)
		{
           case 1:
		   case 3:
		   case 5:
		   case 7:
		   case 8:
		   case 10:b+=31;break;
		   case 2:b+=fib;break;
		   case 4:
		   case 6:
		   case 9:
		   case 11:b+=30;break;
		}
		b+=d;
		printf("%d\n",b);
		b=0;
	}
	return 0;
}
