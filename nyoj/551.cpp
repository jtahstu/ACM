/*成绩转换
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
请编写一个判断学生成绩等级的程序,该程序的功能是：判断一个成绩（整数），
如果这个数大于等于90则输出A,
大于等于80则输出B,
大于等于70则输出C,
大于等于60则输出D,
小于60则输出E.
输入
有多组测试数据，以EOF结束。
每组输入一个成绩u(0<=u<=100)。
输出
每组数据输出一行，即该生成绩对应的级别。(A或B或C或D或E)
样例输入
100
样例输出
A
来源
2012年C语言上机题
上传者
ACM_李如兵*/

#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n)
	{
		if (n>=90&&n<=100)cout<<"A"<<endl;
		if(n>=80&&n<90)cout<<"B"<<endl;
		if(n>=70&&n<80)cout<<"C"<<endl;
		if(n>=60&&n<70)cout<<"D"<<endl;
		if(n<60)cout<<"E"<<endl;
	}
	return 0;
}
 
 
#include <stdio.h>
main()
{
	int n,k;
	char sz[]="EEEEEEDCBAA";
		scanf("%d",&k);
		printf("%c\n",sz[k/10]);
	
}                