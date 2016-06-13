/*字符串输出
时间限制：1000 ms  |  内存限制：65535 KB
难度：0
描述
给定一个字符串，长度小于1000，把串分成两半，如果长度为奇数，前一半比后一半多一，如果长度为偶数平均分，然后先反序输出前一半，再反序输出后一半。
输入
输入有多组数据，每组数据有一行字符串
输出
输出为一行后一半和前一半的反序串
样例输入
1234
123
样例输出
2143
213
来源
原创
上传者
TC_蒋鑫博*/
#include "iostream"
#include "cstdio"
#include "cstring"
using namespace std;
int main(int argc, char const *argv[])
{
	char a[1001];
	int n,len;
	while(cin>>a)
	{
		len=strlen(a);
		if(len%2==0)
		{
			for(int i=len/2-1;i>=0;i--)cout<<a[i];
				for (int i=len-1;i >=len/2;i--)cout<<a[i];
				cout<<endl;
		}
		else
        {
            for(int i=len/2;i>=0;i--)cout<<a[i];
            for(int i=len-1;i>=len/2+1;i--)cout<<a[i];
            cout<<endl;
        }
	}
	return 0;
}
