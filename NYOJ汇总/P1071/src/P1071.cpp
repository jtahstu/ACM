/*
 * http://acm.nyist.edu.cn/JudgeOnline/problem.php?pid=1071
 * by jtahstu on 2015/2/11 15:00
 * copy csdn 听自己心跳的声音
 * http://blog.csdn.net/u013634213/article/details/40055329
 */
#include<cstdio>
#include<cstring>
int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) {
		if (!(a * b)) {
			puts("Signs can't be sure");
			continue;
		}
		if ((a >> 31) ^ (b >> 31))
			puts("Signs are opposite");
		else
			puts("Signs are not opposot");
	}
	return 0;
}

#include<stdio.h>
int main_best()
{
	int a,b,c;
	while(~scanf("%d%d",&a,&b))
	{
		c=((a>>31)&1)+((b>>31)&1);
		if((!a)||(!b))printf("Signs can't be sure\n");
		else printf("Signs are %s\n",c&1?"opposite":"not opposot");
	}
	return 0;
}
