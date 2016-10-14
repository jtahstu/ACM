/*8除不尽的自然数
时间限制：1000 ms  |  内存限制：65535 KB
描述
一个自然数被8除余1，所得的商被8除也余1，再将第二次的商被8除后余7，最后得到一个值为，我们设这个值为a（a<1000）。

又知这个自然数被17除余4，所得的商被17除余15，最后得到一个值，是a的2倍。

你猜这个自然数是多少？

请你写一个程序直接求出这个自然数。

输入
输出
输出这个自然数是多少
样例输入
样例输出
来源
毛毛原创
上传者
TC_王星悦*/
#include "iostream"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
	int m=0;
	for(int i=1;i<10000;i++)
	{
		if(i%8==1&&(i/8)%8==1&&i/8/8%8==7&&i%17==4&&i/17%17==15&&i/17/17==2*(i/8/8/8))
            m=i;
	}
	cout<<m<<endl;
	return 0;
}
#include "iostream"
using namespace std;
int main()
{
    cout<<"1993"<<endl;
}
