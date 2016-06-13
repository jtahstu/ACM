/*字符出现的次数
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
输入一个字符串，计算字符串中字符‘a’出现的次数。
例如输入：
输出：
输入
有多组测试数据，以EOF结束。
每组数据输入一个字符串。
输出
每组数据输出一行，即'a'出现的次数。
样例输入
I am a teacher!
样例输出
3
来源
2012年C语言上机题
上传者
ACM_赵铭浩*/

#include "iostream"
#include "cstring"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
	char a[10001];
	while(gets(a)!=NULL)
	{
		int len,i,count=0;
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			if(a[i]=='a')count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
 
#include <iostream>//the best codes
using namespace std;
int main() {
	char ch[100];
	int i,c;
	while(cin.getline(ch,100)) {
		c=0;
		for(i=0;ch[i]!='\0';i++) {
		  if(ch[i]=='a')
		  	c++; 
		}
		cout<<c<<endl;
	} 
}
