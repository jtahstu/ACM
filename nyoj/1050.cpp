/*5C？5S？
时间限制：1000 ms  |  内存限制：65535 KB
难度：0
描述
Yomean师兄是个土豪，最近他遇到了一个麻烦，他想买个苹果，但是要买5S好呢还是买5C好。最后他决定按性价比来选，选择性价比高的，如果性价比一样那么优先选择5S。

性价比=性能/价值。
输入
输入第一个行是一个整数T，表示总共有T组数据。
接下来是T组数据，每组数据占一行，有4个不大于10000的整数，每两个数由一个空格隔开。
A1 B1 A2 B2
A1，B1，A2，B2分别代表5S的性能值、5S的价格、5C的性能值、5C的价格。
输出
结果输出T行，对应T组数据。如果yomean买5S，请输出”iphone 5S”，否则输出“iphone 5C”。注意不要输出双引号和注意字母大小写。
样例输入
2
1 2 4 8
1 2 4 4
样例输出
iphone 5S
iphone 5C*/

#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{

	int n;
	cin>>n;
	while(n--)
	{
		double a,b,c,d; //这里用浮点数，不能用int
		cin>>a>>b>>c>>d;
		a/b>=c/d?cout<<"iphone 5S"<<endl:cout<<"iphone 5C"<<endl;
	}
	return 0;
}
