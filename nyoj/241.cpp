/*字母统计
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
现在给你一个由小写字母组成字符串，要你找出字符串中出现次数最多的字母，如果出现次数最多字母有多个那么输出最小的那个。
输入
第一行输入一个正整数T（0<T<25）
随后T行输入一个字符串s,s长度小于1010。
输出
每组数据输出占一行，输出出现次数最多的字符；
样例输入
3
abcd
bbaa
jsdhfjkshdfjksahdfjkhsajkf
样例输出
a
a
j
来源
[路过这]原创
上传者
路过这*/

#include <stdio.h>
#include "string.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i,len;
    char a[1011];
    cin>>n;
    getchar();
    while(n--)
    {
        char b[1011]={0};
        int fla=0,max=0;
        cin>>a;
        len=strlen(a);
        for(i=0; i<len; i++)
        {

            b[a[i]-'a']++;
        }
        max=b[0];
        for(i=0; i<26; i++)
        {
            if(b[i]>max)//||(b[i]==max&&a[i]-'a'<a[fla]-'a')
            {
                max=b[i];
                fla=i;
            }
        }
        cout<<(char)(fla+'a')<<endl;
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
main()
{
	int x,i,max,q;
	char a[1011];
	scanf("%d",&x);
	getchar();
	while(x--)
	{
		int s[26]={0};
		gets(a);
		for(i=strlen(a)-1;i>=0;i--)
			s[a[i]-97]++;
		max=0;
		for(i=0;i<26;i++)
			if(max<s[i]) max=s[i],q=i;
		printf("%c\n",q+97);
	}

}
